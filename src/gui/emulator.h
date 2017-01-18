/*
	Class to generally implement qt gui and connect it to emulator
*/

#include <QApplication>
#include <QTextEdit>

#include "../emul/proc.h"

class Emulator_App{
	Proc* cpu;
	int argc;
	char** argv;

public:
	Emulator_App(int, char**, Proc*);
	~Emulator_App();

	int run();
};
