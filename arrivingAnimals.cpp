//arrivingAnimals.cpp
//BAV 9/29/2025

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    fstream myFile02;
    //myFile.open("bryza.txt", ios::out);// write
    //if (myFile.is_open()) {
      //  myFile << "Hello from my file writing program\n";
        //myFile << "This is a new line\n";
      //  myFile.close();
    //}

    //myFile.open("bryza.txt", ios::app);// append
    //if (myFile.is_open()) {
      //  myFile << "Hello2\n";
    //    myFile.close();
  //  }

    myFile02.open("D:/bryza CIT-66/projects/zooKeeperChallenge/arrivingAnimals.txt", ios::in);//read
    if (myFile02.is_open()) {
        string line;
        while (getline(myFile02, line)) {
            cout << line << endl;

        }
        myFile02.close();
    }

  if (myFile02.is_open()) {
      string myline;
      while (getline (myFile02, myline)) {
        cout << myline << endl;
      }
    }

    //Test to see if the file was actually created
  //  if (myFile) {
  //      cout << "\n File bryza.txt successfully in the cmake-build-debug\n";
  //  }


    return 0;

}