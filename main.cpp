//
// Created by aidan on 2/7/2024.
//

#include "Letter.h"
#include "Table.h"
#include "Tree.h"

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]){

    ifstream inFile;

    inFile.open(R"(C:\Finished Projects\Huffman Tree\Tests\test-file-0.txt)");

    if(!inFile.is_open()){
        cout << "Could not open file" << endl;
        return 1;
    }
    else{
        //Read file and count frequency of each character
        Table table = Table(inFile);

        table.ToString(cout);

        Tree tree = Tree(table);


    }





}
