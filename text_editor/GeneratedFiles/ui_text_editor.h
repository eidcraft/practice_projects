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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_text_editorClass
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionDelete;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *text_editorClass)
    {
        if (text_editorClass->objectName().isEmpty())
            text_editorClass->setObjectName(QStringLiteral("text_editorClass"));
        text_editorClass->resize(410, 445);
        actionNew = new QAction(text_editorClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(text_editorClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(text_editorClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_as = new QAction(text_editorClass);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionExit = new QAction(text_editorClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionCopy = new QAction(text_editorClass);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(text_editorClass);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionCut = new QAction(text_editorClass);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionDelete = new QAction(text_editorClass);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        centralWidget = new QWidget(text_editorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        text_editorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(text_editorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 410, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        text_editorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(text_editorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        text_editorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(text_editorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        text_editorClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionDelete);

        retranslateUi(text_editorClass);

        QMetaObject::connectSlotsByName(text_editorClass);
    } // setupUi

    void retranslateUi(QMainWindow *text_editorClass)
    {
        text_editorClass->setWindowTitle(QApplication::translate("text_editorClass", "text_editor", 0));
        actionNew->setText(QApplication::translate("text_editorClass", "New", 0));
        actionOpen->setText(QApplication::translate("text_editorClass", "Open...", 0));
        actionSave->setText(QApplication::translate("text_editorClass", "Save", 0));
        actionSave_as->setText(QApplication::translate("text_editorClass", "Save as...", 0));
        actionExit->setText(QApplication::translate("text_editorClass", "Exit", 0));
        actionCopy->setText(QApplication::translate("text_editorClass", "Copy", 0));
        actionPaste->setText(QApplication::translate("text_editorClass", "Paste", 0));
        actionCut->setText(QApplication::translate("text_editorClass", "Cut", 0));
        actionDelete->setText(QApplication::translate("text_editorClass", "Delete", 0));
        menuFile->setTitle(QApplication::translate("text_editorClass", "File", 0));
        menuEdit->setTitle(QApplication::translate("text_editorClass", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class text_editorClass: public Ui_text_editorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXT_EDITOR_H
