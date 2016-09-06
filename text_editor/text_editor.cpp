

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

    QTextStream in(&file);
    ui.textEdit->setText(in.readAll());
  }
}


void text_editor::save_file()
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
  this->setWindowTitle(file_name + " - Notepad");
}

void text_editor::open_file_btn_clicked()
{
  open_file();
  refresh_window_title();
}

void text_editor::save_file_btn_clicked()
{
  save_file();
}