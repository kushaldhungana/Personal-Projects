#include<iostream>
#include<string>

using namespace std;

class User{
  string name;
  int age;
  double height;
  string hobbies[];
  string sex;
  int id;
  string friends[];
};

class SocialNetwork{
public:
  void addUser();
  void deleteUser();
  string searchUserByName(string name);
  string searchUserByAge(int age);
  string searchUserByHobbies(string hobbies[]);
  int getFriendsofUser(string friends[]);
};
