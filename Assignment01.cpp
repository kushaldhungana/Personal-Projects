#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Note{
public:
  string title;
  string text;
  vector<string> tags;
  //string tags[];
  Note(){

  }
  Note(string title, string text){
    this->title=title;
    this->text=text;
  }
};

class Storyboard{
public:
  //void addNote
  Note* searchByTitle(string title);
    if (aa.title==title){
      return this->aa;
    }
  }
  Note* searchByText(string text){
    if(aa.text==text){
      return this->aa;
    }
  }
  //Note searchByTag(string tag[]);
private:
  unordered_map<string, Note*> newtitle;
  unordered_map<string, Note*> newtext;
  unordered_map<string, vector<Note*>> newtags;
};
  //Note aa;


Note* Storyboard::searchByTitle(string title){
  auto it= newtitle.find(title);
  cout<< "The Note is"<<endl;
  return it->second;
}

Note* Storyboard::searchByText(string text){
  auto it= newtext.find(text);
  cout<<"The Note is"<<endl;
  return it->second;
}
/*
Note::Note(){
}

Note::Note(string title,string text){
  this->title= title;
  this->text= text;
  this->tags[]= tags[];
}
*/
int main(){
Note a("Helloman","sadad");
cout<<a.title<<endl;
cout<<"Ke cha kabcha"<<endl;
Storyboard Het;
Het.searchByText("Helloman");
//Note b;
//Storyboard nn;
//a.title='Helloman';
//a.text="Kechaketa";
//a.tags[]={"hero","heroine","yestayestai"};

}
