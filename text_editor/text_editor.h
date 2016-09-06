#ifndef TEXT_EDITOR_H
#define TEXT_EDITOR_H

#include <QtWidgets/QMainWindow>
#include "ui_text_editor.h"

class text_editor : public QMainWindow
{
    Q_OBJECT
    QString default_file_name{"Untitled"};
    QString file_name;
    Ui::text_editorClass ui;

public:
    text_editor(QWidget *parent = 0);
    ~text_editor();

private slots:
  void open_file_btn_clicked();
  void save_file_btn_clicked();
  void save_file_as_btn_clicked();
  void create_file_btn_clicked();
  void exit_btn_clicked();

private:
  QString get_file_name();
  void refresh_window_title();
  void create_file();
  void open_file();
  void save_file();
  void save_file_as();
};

#endif // TEXT_EDITOR_H
