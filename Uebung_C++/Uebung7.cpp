#include <iostream>
#include <unistd.h>
#include <signal.h>
using namespace std;

void handle_interrupt (int signum ){
    cout << "Von Benutzer abgebrochen ..." << endl;
    exit( signum );
}

int main (){
    signal(SIGINT , handle_interrupt );
    for (int i = 0; i < 10; i++){
        cout << " Berechnung wird durchgef ührt ..." << endl;
        sleep (1000) ;
    }
}