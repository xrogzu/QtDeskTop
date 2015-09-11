﻿#ifndef QSIMPLEMODE_H
#define QSIMPLEMODE_H

#include <QWidget>
#include <QWebView>
#include <QWebSettings>
#include <QWebFrame>

class QSimpleMode : public QWidget
{
    Q_OBJECT
public:
    explicit QSimpleMode(QWidget *parent = 0);

private:
    void initUI();
signals:

protected:
    void contextMenuEvent(QContextMenuEvent *evt);
public slots:
    void addObject();


    QStringList invoke();
    QStringList getAllCanDoList();
    QString     get(QString sql);
    void    returnToAll();
private:
    QWebView *web;
};

#endif // QSIMPLEMODE_H