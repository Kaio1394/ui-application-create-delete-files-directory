QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# TARGET = createrFilesDir

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    createrfilespage.cpp \
    global_data.cpp \
    main.cpp \
    resultpage.cpp

HEADERS += \
    createrfilespage.h \
    global_data.h \
    resultpage.h

FORMS += \
    createrfilespage.ui \
    resultpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

VERSION = 1.0.0
DEFINES += APP_VERSION=\\\"$$VERSION\\\"
