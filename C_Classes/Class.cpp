#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age,standard;
        string first_name,last_name;
    public:
        void set_age(int a) {
            age = a;
        }
        void set_standard(int a) {
            standard = a;
        }
        void set_first_name(string a) {
            first_name = a;
        }
        void set_last_name(string a) {
            last_name = a;
        }
        int get_age() {
            return age;
        }
        int get_standard() {
            return standard;
        }
        string get_last_name(){
            return last_name;
        }
        string get_first_name(){
            return first_name;
        }
        string to_string(){
            string val, strAge, strStandart;
            stringstream ss,ss2;
            
            ss << age;
            strAge = ss.str();
            
            ss2 << standard;
            strStandart = ss2.str();
            
            val = strAge + "," + first_name + "," + last_name + "," + strStandart;
            return val;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
