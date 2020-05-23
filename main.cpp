
#include <Queen/InterfaceQueen.h>
#include <OP/mythread.h>
#include <mainwindow1.h>
#include <QApplication>
#include "OP/modelisationprblm.h"
using namespace std;




InterfaceQueen *game;

int main(int argc, char *argv[])
{        QApplication app(argc, argv);


        game = new InterfaceQueen();
         game->AffichageEchiquier();

        QString locale = QLocale::system().name();



        QTranslator translator;

        translator.load(QString("Accueil") + locale);
        app.installTranslator(&translator);


        MainWindow1 mainWindow1;
        mainWindow1.show();

        return app.exec();
}















