TEMPLATE = subdirs
SUBDIRS = \
    src \
    app \
    tests

app.depends = src
tests.depends = src

OTHER_FILES += \
    defaults.pri
