#include <iostream>
#include <QApplication>
#include <QTextEdit>

#include "emul/emul_test.h"
#include "gui/gui_test.h"

using namespace std;

int main(int argc, char** argv){
	cout<<"Hello world!"<<endl;
	nothing(15);
	everything(7);
	QApplication app(argc, argv);

	QTextEdit tedit;
	tedit.show();

	return app.exec();
}
