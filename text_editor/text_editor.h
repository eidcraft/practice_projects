#ifndef TEXT_EDITOR_H
#define TEXT_EDITOR_H

#include <QtWidgets/QMainWindow>
#include "ui_text_editor.h"

class text_editor : public QMainWindow
{
    Q_OBJECT
    QString file_name{"Untitled"};
    Ui::text_editorClass ui;

public:
    text_editor(QWidget *parent = 0);
    ~text_editor();

private slots:
  void open_file_btn_clicked();
  void save_file_btn_clicked();

private:
  void refresh_window_title();
  //void new_file();
  void open_file();
  void save_file();
};

#endif // TEXT_EDITOR_H
