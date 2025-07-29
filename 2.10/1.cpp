#include <bits/stdc++.h>
using namespace std;

class Restaurant {
public:
    string name, location, cuisine, owner, openingHours;
    int capacity, staffCount;
    bool openNow, hasDelivery;
    double rating;

    Restaurant() {}
    Restaurant(string a, string b, string c, int d, bool e, double f, string g, int h, bool i, string j) {
        name = a; location = b; cuisine = c; capacity = d; openNow = e; rating = f;
        owner = g; staffCount = h; hasDelivery = i; openingHours = j;
    }
    void DisplayInfo() {
        cout << name << " " << location << " " << cuisine << " " << capacity << " " << openNow << " ";
        cout << rating << " " << owner << " " << staffCount << " " << hasDelivery << " " << openingHours << endl;
    }
};

class MedicalClinic {
public:
    string name, address, specialization, headDoctor, openDays;
    int doctorCount, roomCount;
    bool emergencyAvailable, hasLab;
    double rating;

    MedicalClinic() {}
    MedicalClinic(string a, string b, string c, int d, int e, bool f, double g, string h, bool i, string j) {
        name = a; address = b; specialization = c; doctorCount = d; roomCount = e; emergencyAvailable = f;
        rating = g; headDoctor = h; hasLab = i; openDays = j;
    }
    void DisplayInfo() {
        cout << name << " " << address << " " << specialization << " " << doctorCount << " " << roomCount << " ";
        cout << emergencyAvailable << " " << rating << " " << headDoctor << " " << hasLab << " " << openDays << endl;
    }
};

class School {
public:
    string name, address, principal, level, language;
    int studentCount, teacherCount, classrooms;
    bool isPrivate;
    double rating;

    School() {}
    School(string a, string b, int c, int d, int e, bool f, string g, double h, string i, string j) {
        name = a; address = b; studentCount = c; teacherCount = d; classrooms = e; isPrivate = f;
        principal = g; rating = h; level = i; language = j;
    }
    void DisplayInfo() {
        cout << name << " " << address << " " << studentCount << " " << teacherCount << " " << classrooms << " ";
        cout << isPrivate << " " << principal << " " << rating << " " << level << " " << language << endl;
    }
};

class Book {
public:
    string title, author, publisher, genre, language, isbn;
    int pages, year;
    double price;
    bool isEbook;

    Book() {}
    Book(string a, string b, int c, string d, int e, string f, string g, double h, bool i, string j) {
        title = a; author = b; pages = c; publisher = d; year = e; genre = f;
        language = g; price = h; isEbook = i; isbn = j;
    }
    void DisplayInfo() {
        cout << title << " " << author << " " << pages << " " << publisher << " " << year << " ";
        cout << genre << " " << language << " " << price << " " << isEbook << " " << isbn << endl;
    }
};

class Student {
public:
    string name, gender, school, grade, major, email;
    int age, id;
    double gpa;
    bool scholarship;

    Student() {}
    Student(string a, int b, string c, string d, string e, double f, string g, bool h, int i, string j) {
        name = a; age = b; gender = c; school = d; grade = e; gpa = f;
        major = g; scholarship = h; id = i; email = j;
    }
    void DisplayInfo() {
        cout << name << " " << age << " " << gender << " " << school << " " << grade << " ";
        cout << gpa << " " << major << " " << scholarship << " " << id << " " << email << endl;
    }
};

class Job {
public:
    string title, company, location, type, requirements, benefits, deadline;
    double salary;
    bool remote;
    int experienceYears;

    Job() {}
    Job(string a, string b, string c, double d, bool e, string f, int g, string h, string i, string j) {
        title = a; company = b; location = c; salary = d; remote = e; type = f;
        experienceYears = g; requirements = h; benefits = i; deadline = j;
    }
    void DisplayInfo() {
        cout << title << " " << company << " " << location << " " << salary << " " << remote << " ";
        cout << type << " " << experienceYears << " " << requirements << " " << benefits << " " << deadline << endl;
    }
};

int main() {
    Restaurant r("Oshxona","Toshkent","Milliy",100,1,4.5,"Ali",15,1,"08:00-22:00");
    MedicalClinic m("Shifo","Andijon","Terapiya",12,8,1,4.2,"Dr.Saida",1,"Du-Yak");
    School s("1-maktab","Samarqand",800,40,25,0,"Karimov",3.9,"O'rta","O'zbek");
    Book b("Qorako'z","Abdulla Qodiriy",300,"Kitob Dunyosi",1930,"Roman","O'zbek",25000,0,"1234567890");
    Student st("Jamshid",18,"Erkak","3-maktab","11-sinf",4.0,"Matematika",1,1001,"jamshid@mail.uz");
    Job j("Backend Developer","IT Park","Toshkent",1500,1,"Full-time",2,"C++/SQL","Obed, Bonus","2025-08-01");

    r.DisplayInfo();
    m.DisplayInfo();
    s.DisplayInfo();
    b.DisplayInfo();
    st.DisplayInfo();
    j.DisplayInfo();

    return 0;
}
