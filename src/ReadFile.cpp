//
// Created by steam on 07/04/2024.
//

#include "ReadFile.h"
#include <iostream>
#include <fstream>

using namespace std;

void Read(){

    int yValue = 2;
    int xValue = 2;

    // Create a text string, which is used to output the text file
    int Values[yValue][xValue] = {{1,1},{1,1},{1,1}};

    string tempValues;

    // Read from the text file
    ifstream MyReadFile("C:\\Users\\steam\\CLionProjects\\machine-learning\\Data\\mnist_train.csv");

    int x = 0;
    int y = 0;

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile,tempValues)) {
    }
    cout << "Done with reading";





    // Close the file
    MyReadFile.close();
}