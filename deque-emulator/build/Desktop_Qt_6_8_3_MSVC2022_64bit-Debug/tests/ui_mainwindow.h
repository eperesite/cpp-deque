/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *list_widget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *txt_elem_content;
    QPushButton *btn_edit;
    QPushButton *btn_find;
    QHBoxLayout *horizontalLayout;
    QLineEdit *le_count;
    QPushButton *count;
    QLabel *lbl_count;
    QLabel *label;
    QPushButton *btn_pop_front;
    QPushButton *btn_push_front;
    QPushButton *btn_pop_back;
    QPushButton *btn_push_back;
    QPushButton *btn_erase;
    QPushButton *btn_insert;
    QPushButton *btn_clear;
    QLabel *label_6;
    QPushButton *min_element;
    QPushButton *max_element;
    QPushButton *btn_sort;
    QPushButton *btn_sOrt;
    QPushButton *btn_unique;
    QPushButton *btn_revers;
    QPushButton *btn_shuffle;
    QPushButton *lower_bound;
    QPushButton *upper_bound;
    QLabel *label_4;
    QPushButton *btn_dec;
    QPushButton *btn_inc_iterator;
    QPushButton *btn_begin;
    QPushButton *btn_end;
    QLabel *label_2;
    QPushButton *btn_tea;
    QPushButton *btn_cakes;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLineEdit *txt_size;
    QPushButton *btn_resize;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(720, 664);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        list_widget = new QListWidget(centralwidget);
        list_widget->setObjectName("list_widget");
        list_widget->setGeometry(QRect(20, 30, 281, 591));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(311, 29, 320, 593));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        txt_elem_content = new QLineEdit(layoutWidget);
        txt_elem_content->setObjectName("txt_elem_content");

        gridLayout_2->addWidget(txt_elem_content, 0, 0, 1, 1);

        btn_edit = new QPushButton(layoutWidget);
        btn_edit->setObjectName("btn_edit");

        gridLayout_2->addWidget(btn_edit, 0, 1, 1, 1);

        btn_find = new QPushButton(layoutWidget);
        btn_find->setObjectName("btn_find");

        gridLayout_2->addWidget(btn_find, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        le_count = new QLineEdit(layoutWidget);
        le_count->setObjectName("le_count");

        horizontalLayout->addWidget(le_count);

        count = new QPushButton(layoutWidget);
        count->setObjectName("count");

        horizontalLayout->addWidget(count);

        lbl_count = new QLabel(layoutWidget);
        lbl_count->setObjectName("lbl_count");

        horizontalLayout->addWidget(lbl_count);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 3);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 2);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        btn_pop_front = new QPushButton(layoutWidget);
        btn_pop_front->setObjectName("btn_pop_front");

        gridLayout->addWidget(btn_pop_front, 2, 0, 1, 1);

        btn_push_front = new QPushButton(layoutWidget);
        btn_push_front->setObjectName("btn_push_front");

        gridLayout->addWidget(btn_push_front, 2, 1, 1, 1);

        btn_pop_back = new QPushButton(layoutWidget);
        btn_pop_back->setObjectName("btn_pop_back");

        gridLayout->addWidget(btn_pop_back, 3, 0, 1, 1);

        btn_push_back = new QPushButton(layoutWidget);
        btn_push_back->setObjectName("btn_push_back");
        btn_push_back->setToolTipDuration(-1);

        gridLayout->addWidget(btn_push_back, 3, 1, 1, 1);

        btn_erase = new QPushButton(layoutWidget);
        btn_erase->setObjectName("btn_erase");

        gridLayout->addWidget(btn_erase, 4, 0, 1, 1);

        btn_insert = new QPushButton(layoutWidget);
        btn_insert->setObjectName("btn_insert");

        gridLayout->addWidget(btn_insert, 4, 1, 1, 1);

        btn_clear = new QPushButton(layoutWidget);
        btn_clear->setObjectName("btn_clear");

        gridLayout->addWidget(btn_clear, 5, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        min_element = new QPushButton(layoutWidget);
        min_element->setObjectName("min_element");

        gridLayout->addWidget(min_element, 7, 0, 1, 1);

        max_element = new QPushButton(layoutWidget);
        max_element->setObjectName("max_element");

        gridLayout->addWidget(max_element, 7, 1, 1, 1);

        btn_sort = new QPushButton(layoutWidget);
        btn_sort->setObjectName("btn_sort");

        gridLayout->addWidget(btn_sort, 8, 0, 1, 1);

        btn_sOrt = new QPushButton(layoutWidget);
        btn_sOrt->setObjectName("btn_sOrt");

        gridLayout->addWidget(btn_sOrt, 8, 1, 1, 1);

        btn_unique = new QPushButton(layoutWidget);
        btn_unique->setObjectName("btn_unique");

        gridLayout->addWidget(btn_unique, 9, 0, 1, 1);

        btn_revers = new QPushButton(layoutWidget);
        btn_revers->setObjectName("btn_revers");

        gridLayout->addWidget(btn_revers, 9, 1, 1, 1);

        btn_shuffle = new QPushButton(layoutWidget);
        btn_shuffle->setObjectName("btn_shuffle");

        gridLayout->addWidget(btn_shuffle, 10, 0, 1, 1);

        lower_bound = new QPushButton(layoutWidget);
        lower_bound->setObjectName("lower_bound");

        gridLayout->addWidget(lower_bound, 11, 0, 1, 1);

        upper_bound = new QPushButton(layoutWidget);
        upper_bound->setObjectName("upper_bound");

        gridLayout->addWidget(upper_bound, 11, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 12, 0, 1, 1);

        btn_dec = new QPushButton(layoutWidget);
        btn_dec->setObjectName("btn_dec");

        gridLayout->addWidget(btn_dec, 13, 0, 1, 1);

        btn_inc_iterator = new QPushButton(layoutWidget);
        btn_inc_iterator->setObjectName("btn_inc_iterator");

        gridLayout->addWidget(btn_inc_iterator, 13, 1, 1, 1);

        btn_begin = new QPushButton(layoutWidget);
        btn_begin->setObjectName("btn_begin");

        gridLayout->addWidget(btn_begin, 14, 0, 1, 1);

        btn_end = new QPushButton(layoutWidget);
        btn_end->setObjectName("btn_end");

        gridLayout->addWidget(btn_end, 14, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 15, 0, 1, 1);

        btn_tea = new QPushButton(layoutWidget);
        btn_tea->setObjectName("btn_tea");

        gridLayout->addWidget(btn_tea, 16, 0, 1, 1);

        btn_cakes = new QPushButton(layoutWidget);
        btn_cakes->setObjectName("btn_cakes");

        gridLayout->addWidget(btn_cakes, 16, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 3);

        verticalSpacer = new QSpacerItem(258, 28, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 1, 1, 2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        txt_size = new QLineEdit(layoutWidget);
        txt_size->setObjectName("txt_size");

        gridLayout_3->addWidget(txt_size, 2, 1, 1, 1);

        btn_resize = new QPushButton(layoutWidget);
        btn_resize->setObjectName("btn_resize");
        btn_resize->setFocusPolicy(Qt::TabFocus);

        gridLayout_3->addWidget(btn_resize, 2, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "std::vector demo", nullptr));
        btn_edit->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        btn_find->setText(QCoreApplication::translate("MainWindow", "find", nullptr));
        count->setText(QCoreApplication::translate("MainWindow", "count", nullptr));
        lbl_count->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264\321\213", nullptr));
        btn_pop_front->setText(QCoreApplication::translate("MainWindow", "pop_front", nullptr));
        btn_push_front->setText(QCoreApplication::translate("MainWindow", "push_front", nullptr));
        btn_pop_back->setText(QCoreApplication::translate("MainWindow", "pop_back", nullptr));
        btn_push_back->setText(QCoreApplication::translate("MainWindow", "push_back", nullptr));
        btn_erase->setText(QCoreApplication::translate("MainWindow", "erase", nullptr));
        btn_insert->setText(QCoreApplication::translate("MainWindow", "insert", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274", nullptr));
        min_element->setText(QCoreApplication::translate("MainWindow", "min_element", nullptr));
        max_element->setText(QCoreApplication::translate("MainWindow", "max_element", nullptr));
        btn_sort->setText(QCoreApplication::translate("MainWindow", "merge sort", nullptr));
        btn_sOrt->setText(QCoreApplication::translate("MainWindow", "merge sOrT", nullptr));
        btn_unique->setText(QCoreApplication::translate("MainWindow", "unique", nullptr));
        btn_revers->setText(QCoreApplication::translate("MainWindow", "reverse", nullptr));
        btn_shuffle->setText(QCoreApplication::translate("MainWindow", "shuffle", nullptr));
        lower_bound->setText(QCoreApplication::translate("MainWindow", "lower_bound", nullptr));
        upper_bound->setText(QCoreApplication::translate("MainWindow", "upper_bound", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\230\321\202\320\265\321\200\320\260\321\202\320\276\321\200", nullptr));
        btn_dec->setText(QCoreApplication::translate("MainWindow", "--", nullptr));
        btn_inc_iterator->setText(QCoreApplication::translate("MainWindow", "++", nullptr));
        btn_begin->setText(QCoreApplication::translate("MainWindow", "begin", nullptr));
        btn_end->setText(QCoreApplication::translate("MainWindow", "end", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\320\276\320\273\320\276\320\262\320\272\320\270", nullptr));
        btn_tea->setText(QCoreApplication::translate("MainWindow", "= \321\207\320\260\320\271", nullptr));
        btn_cakes->setText(QCoreApplication::translate("MainWindow", "= \321\202\320\276\321\200\321\202\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "size():", nullptr));
        btn_resize->setText(QCoreApplication::translate("MainWindow", "resize", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
