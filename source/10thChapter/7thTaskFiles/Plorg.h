#ifndef STEPHENPRATASOLUTIONS_2C24648A38714A7BBD4F3573219281A2
#define STEPHENPRATASOLUTIONS_2C24648A38714A7BBD4F3573219281A2

class Plorg
{
private:
    char m_name_[19] { };
    int m_ci_;

public:
    explicit Plorg(const char *name = "Plorga");

    void SetCI(int ci);
    void ShowFields() const;
};

#endif
