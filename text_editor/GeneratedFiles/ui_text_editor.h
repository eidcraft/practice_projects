/********************************************************************************
** Form generated from reading UI file 'text_editor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXT_EDITOR_H
#define UI_TEXT_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_text_editorClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *text_editorClass)
    {
        if (text_editorClass->objectName().isEmpty())
            text_editorClass->setObjectName(QStringLiteral("text_editorClass"));
        text_editorClass->resize(600, 400);
        menuBar = new QMenuBar(text_editorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        text_editorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(text_editorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        text_editorClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(text_editorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        text_editorClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(text_editorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        text_editorClass->setStatusBar(statusBar);

        retranslateUi(text_editorClass);

        QMetaObject::connectSlotsByName(text_editorClass);
    } // setupUi

    void retranslateUi(QMainWindow *text_editorClass)
    {
        text_editorClass->setWindowTitle(QApplication::translate("text_editorClass", "text_editor", 0));
    } // retranslateUi

};

namespace Ui {
    class text_editorClass: public Ui_text_editorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXT_EDITOR_H
