#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream write("a.text"); //we have define the write object from the ofstream class
    write << "good morning students, " << endl; // opininf tghe file & writing in the file 
    write << "we shall work on file handling!, " << endl;
    write.close(); //closing the file after writing

    ofstream fout("b.txt");
    fout << "written in the file usimng another - defined object: fout" << endl;
    fout.close();
    //we can use any word to make an object, ex: write out, fout , fwrite , w

    ofstream out("a.txt");
    out.put('G');// adding singlt character to the file
    out << "ood morning!";
    out.close();

}