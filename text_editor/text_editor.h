#ifndef TEXT_EDITOR_H
#define TEXT_EDITOR_H

#include <QtWidgets/QMainWindow>
#include "ui_text_editor.h"

class text_editor : public QMainWindow
{
    Q_OBJECT

public:
    text_editor(QWidget *parent = 0);
    ~text_editor();

private:
    Ui::text_editorClass ui;

private slots:
  void set_text();
  void open_file();

};

#endif // TEXT_EDITOR_H
