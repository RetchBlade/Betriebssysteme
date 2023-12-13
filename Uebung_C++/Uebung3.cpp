#include <iostream>
#include <unistd.h>

using namespace std;

int main (){
    cout << "Das ist der Beginn vom Prozess ." << endl;
    execl ("/bin/date", "date", 0);
    // könnte auch genutzt werden
    // execl ("/bin/ls", "ls", "-la", 0)
    cout << "Das ist der Rest vom Prozess ." << endl;
    exit (0);
}


/**
 * Im Gegensatz dazu gibt es unter Unix auch das Konzept der Prozessverkettung. Mit-
tels der exec()-Funktion ist es hier möglich, aus einem Programm heraus eine andere
ausführbare Datei zu starten, die den aktuellen Prozess terminiert (bei Erfolg). Durch
das Ersetzen des alten Prozesses erbt der neue Prozess dessen Eigenschaften: die PID,
*/