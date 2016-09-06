

#include "text_editor.h"

#include <boost/scope_exit.hpp>

#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

text_editor::text_editor(QWidget *parent)
  : QMainWindow(parent)
{
  ui.setupUi(this);

  refresh_window_title();

  QObject::connect(ui.actionOpen, &QAction::triggered,
                   this, &text_editor::open_file_btn_clicked);

  QObject::connect(ui.actionSave, &QAction::triggered,
                   this, &text_editor::save_file_btn_clicked);

  QObject::connect(ui.actionSave_as, &QAction::triggered,
                   this, &text_editor::save_file_as_btn_clicked);

  QObject::connect(ui.actionNew, &QAction::triggered,
                   this, &text_editor::create_file_btn_clicked);
}

text_editor::~text_editor()
{

}


void text_editor::open_file()
{
  QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
    QString(), tr("Text Files (*.txt);;C++ Files (*.cpp *.h)"));

  if (!fileName.isEmpty())
  {
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly))
    {
      QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
      return;
    }
    BOOST_SCOPE_EXIT(&file)
    { 
      file.close();
    } BOOST_SCOPE_EXIT_END

    file_name = fileName;
    QTextStream in(&file);
    ui.textEdit->setText(in.readAll());
  }
}


void text_editor::save_file()
{
  if (!file_name.isEmpty())
  {
    QFile file(file_name);
    if (!file.open(QIODevice::WriteOnly))
    {
      QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
    }
    else
    {
      BOOST_SCOPE_EXIT(&file)
      {
        file.close();
      } BOOST_SCOPE_EXIT_END

      QTextStream stream(&file);
      stream << ui.textEdit->toPlainText();
      stream.flush();
    }
  }
}


void text_editor::save_file_as()
{
  QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), 
    QString(), tr("Text Files (*.txt);;C++ Files (*.cpp *.h)"));

  if (!fileName.isEmpty())
  {
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly))
    {
      QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
    }
    else
    {
      BOOST_SCOPE_EXIT(&file)
      {
        file.close();
      } BOOST_SCOPE_EXIT_END
     
      QTextStream stream(&file);
      stream << ui.textEdit->toPlainText();
      stream.flush();
    }
  }
}

void text_editor::refresh_window_title()
{
  this->setWindowTitle(get_file_name() + " - Notepad");
}


void text_editor::open_file_btn_clicked()
{
  open_file();
  refresh_window_title();
}

void text_editor::create_file_btn_clicked()
{
  create_file();
  refresh_window_title();
}

void text_editor::save_file_btn_clicked()
{
  if (file_name.isEmpty())
    save_file_as();
  else
    save_file();
}

void text_editor::save_file_as_btn_clicked()
{
  save_file_as();
}

void text_editor::create_file()
{
  file_name.clear();
  ui.textEdit->clear();
}

QString text_editor::get_file_name()
{
  return file_name.isEmpty() ? default_file_name : file_name;
}

