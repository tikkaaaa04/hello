class Player
{
private:
    char *name;
    int age;
    char *country;
public:
    Player();
    Player(const char* nm, int ag, const char* cn);
    Player(Player &p);
    void setName(const char* nm);
    void setAge(int ag);
    void setCountry(const char* cn);

    char* getName();
    int getAge();
    char* getCountry();

    void display();

    ~Player();
};
