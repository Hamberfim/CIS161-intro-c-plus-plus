QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

INCLUDEPATH += ../app
SOURCES += ../app/calculator.cpp \
        tst_calctest.cpp
