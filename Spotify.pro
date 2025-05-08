QT       += core gui
RESOURCES += resources.qrc
QT += core gui widgets multimedia
QT += multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    admin.cpp \
    main.cpp \
    mainwindow.cpp \
    user.cpp

HEADERS += \
    admin.h \
    mainwindow.h \
    user.h

FORMS += \
    admin.ui \
    mainwindow.ui \
    user.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
