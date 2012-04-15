# Candy Machine makefile

myProgram : candyMain.o admin_tools.o candy.o candy_machine.o console.o dispenser.o inventory.o money_handler.o
	g++ -o myProgram candyMain.o admin_tools.o candy_machine.o console.o dispenser.o inventory.o money_handler.o candy.o

candyMain.o : candyMain.cpp candy_machine.h
	g++ -c candyMain.cpp

admin_tools.o : admin_tools.cpp admin_tools.h
	g++ -c admin_tools.cpp

candy_machine.o : candy_machine.cpp candy_machine.h admin_tools.h console.h dispenser.h inventory.h money_handler.h candy.h
	g++ -c candy_machine.cpp

console.o : console.cpp console.h
	g++ -c console.cpp

dispenser.o : dispenser.cpp dispenser.h
	g++ -c dispenser.cpp

inventory.o : inventory.cpp inventory.h
	g++ -c inventory.cpp

money_handler.o : money_handler.cpp money_handler.h
	g++ -c money_handler.cpp

candy.o : candy.cpp candy.h
	g++ -c candy.cpp

clean:
	rm *.o myProgram
