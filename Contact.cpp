#include <iostream>
using namespace std;

class Contact{
    private:
        string Fname;
        string Lname;
        string Add;
        int Phone;
        string Email;
        
    public:
    // Constructors
    Contact(){
        SetF("Malik");
        SetL("Moe");
        SetA("New York");
        SetP( 1234567890);
        SetE("MalikMoe@gmail.com");
        };
        
    Contact(string a, string b, string c, int d, string e){
        SetF(a);
        SetL(b);
        SetA(c);
        SetP(d);
        SetE(e);
        Out();
        };

// Setters
    void SetF (string a){
        Fname = a;
        };
        
    void SetL (string a){
        Lname = a;
        };
        
    void SetA (string a){
        Add = a;
        };
        
    void SetP (int a){
        if (a < 99999999){
            cout << "Invalid phone number Please re-enter" << endl;
            cin >> a;
            SetP(a);
        };
        Phone = a;
    };
    
    void SetE (string a){
        
        Email = a;
        };
    
        
// Getters
    string GetF(){
        return Fname;
        };
    string GetL(){
        return Lname;
        };
        
    string GetA(){
        return Add;
        };
    int GetP(){
        return Phone;
        };
    string GetE(){
        return Email;
        };

// Output
  void Out(){
      cout << "Name: "<< GetF() << " " << GetL() <<  endl; 
      cout << "Address: " << GetA() << endl;
      cout << "Phone: " << GetP() << endl;
      cout << "Email: " << GetE() << endl;
      cout << " " << endl;
      
      } 
// Input
    void In(){
        string a;
        int b;
        cout << "What is the First name" << endl;
        cin >> a;
        SetF(a);
        cout << "What is the Last name" << endl;
        cin >> a;
        SetL(a);
        cout << "What is the Address" << endl;
        cin >> a;
        SetA(a);
        cout << "What is the Phone Number" << endl;
        cin >> b;
        SetP(b);
        cout << "What is the Email" << endl;
        cin >> a;
        SetE(a);
        Out();
        }

};


int main(){
    Contact C;
    Contact();
    Contact("Alex", "Lopez", "New York", 1987654321, "Email@mail.com");
    C.Out();
    C.In();
    C.Out();
  return 0;
}