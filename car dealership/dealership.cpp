#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;

int car(string str) {
    if (str.compare("TOYOTA") == 0)
        return 0;
    else if (str.compare("HONDA") == 0)
        return 1;
    else if (str.compare("BMW") == 0)
        return 2;
    else if (str.compare("NISSAN") == 0)
        return 3;
    else if (str.compare("TESLA") == 0)
        return 4;
    else if (str.compare("DODGE") == 0)
        return 5;
    else
        return -1;
}

int color(string str) {
    if (str.compare("RED") == 0)
        return 0;
    else if (str.compare("WHITE") == 0)
        return 1;
    else if (str.compare("BLUE") == 0)
        return 2;
    else if (str.compare("BLACK") == 0)
        return 3;
    else if (str.compare("GREY") == 0)
        return 4;
    else if (str.compare("PINK") == 0)
        return 5;
    else
        return -1;
}

int main() {
    string inFile, outFile;
    ifstream fin;
    ofstream fout;

    string str;
    string CarModel[6] = { "TOYOTA ","HONDA ","BMW ","NISSAN ","TESLA ","DODGE " };
    string CarColor[6] = { "RED ","WHITE ","BLUE ","BLACK ","GREY ","PINK " };

    int A[6][6];


    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            A[i][j] = 0;


    cout << "Enter name of input file: ";
    cin >> inFile;


    fin.open(inFile);


    if (!fin) {
        cout << "Unable to open file " << inFile << endl;
        return 0;
    }
    bool flag = false;
    int row, col;
    while (fin >> str) {
        if (flag == false) {
            row = car(str);
            flag = true;
            if (row == -1)
                cout << "Unknown car or color in the input file: " << "<" << str << "> <";
        }
        else if (flag == true) {
            col = color(str);
            flag = false;
            if (row == -1 || col == -1)
                cout << str << ">" << endl;
            else
                A[row][col]++;
        }
    }


    cout << "Enter the name of output file: ";
    cin >> outFile;


   fout.open(outFile);
    if (!fout) {
        cout << "Unable to open file " << outFile << endl;
        return 0;
    }
    fout << setw(10) << right << "|";
    for (int i = 0; i < 6; i++)
        fout << setw(9) << right << CarColor[i] << "|";
    fout << endl;
    fout << setfill('-') << right << setw(71) << " " << setfill(' ') << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (j == 0)
                fout << setw(9) << right << CarModel[i] << "|";
            fout << setw(8) << right << A[i][j] << " |";
        }
       fout << endl;
    }

    fin.close();
    fout.close();
    return 0;
}
