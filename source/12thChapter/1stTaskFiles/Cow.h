#ifndef STEPHENPRATASOLUTIONS_9ED4F4EBC5404273A58B5CC27CE42A95
#define STEPHENPRATASOLUTIONS_9ED4F4EBC5404273A58B5CC27CE42A95

class Cow
{
private:
    char m_name_[20] { };
    char *m_hobby_ { };
    double m_weight_ { };

    void Init(const char *name, const char *hobby, double weight);

public:
    Cow();
    Cow(const char *name, const char *hobby, double weight);
    Cow(const Cow &cow);
    ~Cow();

    Cow& operator=(const Cow &cow);
    void ShowCow() const;
};

#endif
