#include <iostream>
#include <signal.h>
using namespace std;
void error (int signum ){
    cout << "Hier ist der Fehler " << signum << " aufgetreten !"<<
    endl;
    exit( signum );
}

int main(){
    int a = 0;
    int *p = 0;
    signal (SIGSEGV , error );
    cout << " Probiere verbotenen Speicherzugriff ueber Nullzeiger ..." <<endl;
    a = *p;
    cout << "Ab hier wird weitergearbeitet ." << endl;
    exit (0);
}