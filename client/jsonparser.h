#ifndef JSONPARSER_H
#define JSONPARSER_H

#include <QObject>
#include <QString>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonValue>

class JsonParser : public QObject
{
  Q_OBJECT
public:
  explicit JsonParser(QObject *parent = 0);

  void authorisation(const QJsonObject &response);
  void getProfessionsList(const QJsonObject &response);
  void getLessonsList(const QJsonObject &response);
  void getQuestions(const QJsonObject &response);
signals:
  void authSignalPars(QString token, QString fullName);
  void authSignalPars(QString fullName);
  void getProfs(QJsonArray prof);
public slots:
  void responseSlot(QString);
};

#endif // JSONPARSER_H
