#pragma warning(disable : 4996)

#include "String.h"
#include <cctype>
#include <cstring>

int String::m_strings_count_ = 0;

void String::Init(const char *string)
{
    m_length_ = (int)std::strlen(string);
    m_elements_ = new char[m_length_ + 1];
    std::strcpy(m_elements_, string);
}

String::String()
{
    m_length_ = 0;
    m_elements_ = nullptr;
    m_strings_count_++;
}

String::String(const char *string)
{
    Init(string);
    m_strings_count_++;
}

String::String(const String &string)
{
    Init(string.m_elements_);
    m_strings_count_++;
}

String::~String()
{
    m_strings_count_--;
    delete[] m_elements_;
}

int String::CountOf(const char character) const
{
    int count = 0;
    
    for (int i = 0; i < Length(); i++)
        if (m_elements_[i] == character)
            count++;

    return count;
}

void String::ToLower()
{
    for (int i = 0; i < Length(); i++)
        m_elements_[i] = (char)std::tolower(m_elements_[i]);
}

void String::ToUpper()
{
    for (int i = 0; i < Length(); i++)
        m_elements_[i] = (char)std::toupper(m_elements_[i]);
}

String& String::operator=(const String &string)
{
    if (this == &string)
        return *this;

    delete[] m_elements_;
    Init(string.m_elements_);
    return *this;
}

String& String::operator=(const char *string)
{
    delete[] m_elements_;
    Init(string);
    return *this;
}

char& String::operator[](const int i)
{
    return m_elements_[i];
}

const char& String::operator[](const int i) const
{
    return m_elements_[i];
}

bool operator<(const String &first, const String &second)
{
    return std::strcmp(first.m_elements_, second.m_elements_) < 0;
}

bool operator>(const String &first, const String &second)
{
    return second < first;
}

bool operator==(const String &first, const String &second)
{
    return std::strcmp(first.m_elements_, second.m_elements_) == 0;
}

std::ostream& operator<<(std::ostream &output_stream, const String &string)
{
    output_stream << string.m_elements_;
    return output_stream;
}

std::istream& operator>>(std::istream &input_stream, String &string)
{
    char temp[String::kCinLimit];
    input_stream.get(temp, String::kCinLimit);

    if (input_stream)
        string = temp;

    while (input_stream && input_stream.get() != '\n') { }
    return input_stream;
}

String operator+(const String &first, const String &second)
{
    const int new_length = first.Length() + second.Length();
    const auto temp = new char[new_length + 1];
    std::strcat(std::strcpy(temp, first.m_elements_), second.m_elements_);

    auto result = String(temp);
    delete[] temp;
    return result;
}

String operator+(const char *first, const String &second)
{
    return String(first) + second;
}

String operator+(const String &first, const char *second)
{
    return first + String(second);
}

