#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <qDebug>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    qDebug() << "totes cooking with greasers.";

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
