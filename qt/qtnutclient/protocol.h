#ifndef PROTOCOL_H
#define PROTOCOL_H
#include <QObject>
#include <QString>
#include <list>

namespace Internal {
class Protocol : public QObject
{
    Q_OBJECT
public:
    explicit Protocol(QObject *parent = nullptr);
    void connectToServer(const QString & host, int port);
    std::list<QString> listDevices();
signals:

};
}
#endif // PROTOCOL_H
