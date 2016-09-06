

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

  QObject::connect(ui.actionOpen, &QAction::triggered,
                   this, &text_editor::open_file);

}

text_editor::~text_editor()
{

}

void text_editor::set_text()
{
  ui.textEdit->setText("set_text function invoked");
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