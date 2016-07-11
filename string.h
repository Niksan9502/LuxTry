#ifndef STRING_H
#define STRING_H
#include <stdio.h>
#include </usr/include/string.h>

extern int calc();

class Iterator
{
    unsigned index;
public:
/*
    Iterator()
    {
        index=0;
        do{
            str[index]=this.buffer_[index];
            index++;
        }while(this.buffer_[index]!='\0');
        size=index;
    }
*/

    Iterator begin();// const;
    Iterator end();// const;
    Iterator operator++();
    Iterator operator++(int);

    bool operator==(const Iterator& other);
    bool operator!=(const Iterator& other);
    char& operator*(int index);


};

using namespace std;
    class String
    {
    private:
        unsigned int capacity_;
        unsigned int size_;
        char* buffer_;
    public:
        Iterator I;
        String(unsigned capacity);
        String(const char* str);
        String(const String& other);
        ~String();




    int size();
    int length();
    int capacity();
    bool empty();
    void clear();
    char& operator[](int index);
    char& at(int index);
    ostream& operator<<(ostream& out);

    String& operator=(const String& other);

    bool operator==(String& other);
    bool operator!=(String& other);

    bool operator<(String& other);
    bool operator>(String& other);

    bool operator<=(String& other);
    bool operator>=(String& other);




};
#endif // STRING_H
