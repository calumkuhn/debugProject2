#include "DSString.h"
#include <string.h>
#include <iostream>
#include <fstream>

DSString::DSString(){
    data = nullptr;
    len = 0;
}

DSString::DSString(const char *p){
    const char * q = p;
    int i = 0;
    while(*p++){
        i++;
    }
    data = new char[i+1];
    int j = 0;
    for(j; *q; q++, j++){
        data[j] = *q;
    }
    len = j;
}

DSString::DSString(const DSString &l) {
    len = l.len;
    data = new char[len];
    for (int i = 0; i < len; i++){
        data[i] = l.data[i];
    }
}

DSString::~DSString(){
    delete[] data;
}

DSString& DSString:: operator=(const DSString &l) {
    len = l.len;
    if (data != nullptr){
        delete []data;
    }
    data = new char[len];
    for (int i = 0; i < len; i++){
        data[i] = l.data[i];
    }
    return * this;
}

DSString DSString::operator+(const DSString &l )const{
    char * temp = new char[len+l.len-1];
    for (int i = 0; i < len; i++){
        temp [i] = data[i];
    }
    int j = 0;
    for (int i = len; i < len+l.len-1; ++i) {
        temp[i] = l.data[j];
        j++;
    }
    DSString dataa(temp);
    return dataa;
}

bool DSString::operator==(const DSString &l) const{
    if (len == l.len) {
        for (int i = 0; i <len; ++i) {
            if (data[i]!= l.data[i])
            {
                return false;
            }
        }
        return true;
    }
    else
        return false;
}
bool DSString::operator<(const DSString &l) const{
    int i = 0;
    while(this->c_str()[i]!='\0' || l.c_str()[i]!='\0')
    {
        if(this->c_str()[i]<l.c_str()[i])
            return true;
        i++;
    }
    return false;
//    if (strcmp(this->c_str(),l.c_str())==-1)
//        return true;
//    return false;
}

DSString DSString::substring(size_t start, size_t numChars) const{
    char* temp = new char [(int)numChars+1];
    int starting_point = start;
    int i;
    for (i = 0; i < numChars; ++i) {
        temp[i] = this->data[starting_point];
        starting_point++;
    }
    temp[i] = '\0';
    DSString dataa(temp);
    return dataa;
}

const char * DSString::c_str() const{
    char* temp = new char[len+1];
    int i;
    for (i = 0; i < len; ++i) {
        temp[i] = data[i];
    }
    temp[i] = '\0';
    return temp;
}

std::ostream &operator<<(std::ostream &out, const DSString &l){
    for (int i = 0; i < l.len; ++i) {
        out<<l.data[i];
    }
    return out;
}
// Implement your class.
// You may functions for c-strings in string.h, but use them sparingly
// and implement mostly your own functions.

int DSString::length() const{
    int i = len;
    return i;
}

std::ifstream &operator>> (std::ifstream& input, DSString& output)
{
    char buffer[5000];
    input.getline(buffer, 5000, '\n');
    DSString replace(buffer);
    output = replace;
    return input;
}

char DSString::getAtChar(size_t start) const{
    char temp;
    int starting_point = start;
    temp = this->data[starting_point];
    return temp;
}

DSString DSString::getAtString(size_t start) const{
    char* temp = new char [2];
    int starting_point = start;
    temp[0] = this->data[starting_point];
    temp[1] = '\0';
    DSString dataa(temp);
    return dataa;
}

DSString DSString::apndCharToString(char newChar) const{
    char* temp = new char [len+1];
    for (int i = 0; i < len; i++){
        temp [i] = data[i];
    }
    temp[len] = newChar;
    DSString dataa(temp);
    return dataa;
}