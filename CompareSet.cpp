#include<bits/stdc++.h>
using namespace std;
class Student {
private:
    string name,surname;
public:
    float gpax;
    Student(float score, string name, string surname){
        setFullname(name, surname);
        this->gpax = score;
    }
    void setFullname(string name, string surname){
        this->name = name;
        this->surname = surname;
    }
    string getFullname(){
        return name + " " + surname;
    }
    bool operator<(const Student & other) const {
        return this->gpax < other.gpax;
    }
};
int main(){
    Student a(2.95, "na","ni");
    Student b(4.00, "at", "su");
    cout << (a<b) << endl;
    priority_queue<Student> pq;
    pq.push(a);
    pq.push(b);
    cout << pq.top().getFullname << endl;

}