#pragma once

#include <QObject>
#include <QtCore>

class TestCommand : public QObject
{
	Q_OBJECT

private slots:
	void prepareCommand();
};

