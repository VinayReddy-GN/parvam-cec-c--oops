#include<iostream>
#include<fstream>
using namespace std;

class voterID{
    private:
        string passportsize_photo , adress , identityproofs[10] ;
        int year , DOB , identityproofscount ;
    public:
        void addvoterIDdetails(string voterIDphoto , string voterIDadress , int year , int DOB){
            passportsize_photo = voterIDphoto;
            adress = voterIDadress;
            this->year=year;
            this->DOB=DOB;
            
        }
        void addvoterIDidentityproofs(int count){
            identityproofscount = count;
            cin.ignore();
            cout << "enter the " << count << "identityproofs of the voter card :";
            for(int i=0; i<count; i++){
                cout<<"identityproofs -" << i+1 << ":" <<endl;
                getline(cin , identityproofs[i]); //can enter multiple words along with space
            }
            cout << "click enter button for next input" << endl;
        }
        void storevoterIDdetails(){
            ofstream store("voter_ID.txt", ios::app); //append the content to existing file
            store << " enter the voterID details are as fallow : " << endl;
            store << "enter voterID photo : " << passportsize_photo << endl;
            store << " enter voterID  residential adress : " << adress << endl;
            
            store << " year of issuing : " << year << endl;
            store << "enter your data of birth " << DOB << endl;
            store << "voterID has these identity proofs : "  << endl;
            for(int i=0; i<identityproofscount; i++){
                store << "\t" << i+1 << "." << identityproofs[i] << endl;
            }
            store << "-------------------------------" << endl;
        }
        

};
int main(){
    string voterID_passportsizephoto , voterID_adress  ,voterID_identityproofs[10];
    int identityproofs_count , issuing_year , person_DOB;

    cout << "enter the identity proofs of the voterID card:" << endl;
    cout << "passportsizwphoto , adress ,   issuing year , person DOB :"<< endl;
    
    cin >> voterID_passportsizephoto >> voterID_adress >>   issuing_year >> person_DOB;

    cout << "enter the number of identityproofs:" << endl;
    cin >> identityproofs_count;
    cin.ignore();

    voterID voterID1;
    voterID1.addvoterIDdetails(voterID_passportsizephoto , voterID_adress  , issuing_year , person_DOB );
    voterID1.addvoterIDidentityproofs(identityproofs_count);
    voterID1.storevoterIDdetails();


   
}