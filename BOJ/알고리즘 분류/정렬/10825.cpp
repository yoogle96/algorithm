#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Student {
    public:
    string name;
    int kor;
    int eng;
    int math;

    Student(string _name, int _kor, int _eng, int _math){
        name = _name;
        kor = _kor;
        eng = _eng;
        math = _math;
    }
};

vector<Student> v;

bool cmp(Student s1, Student s2){
    if(s1.kor != s2.kor){
        return s1.kor > s2.kor;
    }else{
        if(s1.kor == s2.kor && s1.eng == s2.eng && s1.math != s2.math){
            return s1.math > s2.math;
        }else if(s1.kor == s2.kor && s1.eng == s2.eng && s1.math == s2.math){
            return s1.name < s2.name;
        }else{
            return s1.eng < s2.eng;
        }
    }
}

int main(){
    int N;
    string name;
    int kor, eng, math;
    cin >> N;
    for(int i = 0 ; i < N; i++){
        cin >> name >> kor >> eng >> math;
        Student student = Student(name, kor, eng, math);
        v.push_back(student);
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0 ; i < v.size(); i++){
        cout << v[i].name << "\n";
    }    
}