#pragma once
#include <iostream>

class String
{
private:
    char *m_elements_{ };
    int m_length_ { };
    static int m_strings_count_;
    constexpr static int kCinLimit = 80;

    void Init(const char *string);
    
public:
    String();
    explicit String(const char *string);
    String(const String &string);
    ~String();

    static int HowMany() { return  m_strings_count_; } 
    int Length() const { return m_length_; }
    int CountOf(char character) const;
    void ToLower();
    void ToUpper();
    
    String& operator=(const String &string);
    String& operator=(const char *string);
    char& operator[](int i);
    const char& operator[](int i) const;
    
    friend bool operator<(const String &first, const String &second);
    friend bool operator>(const String &first, const String &second);
    friend bool operator==(const String &first, const String &second);
    friend std::ostream& operator<<(std::ostream &output_stream, const String &string);
    friend std::istream& operator>>(std::istream &input_stream, String &string);
    friend String operator+(const String &first, const String &second);
    friend String operator+(const char *first, const String &second);
    friend String operator+(const String &first, const char *second);
};
