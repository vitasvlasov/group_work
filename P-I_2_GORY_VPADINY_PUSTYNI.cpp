#include <iostream>
#include <string>
using namespace std; 

class Desert {
  private:
   string nameD, continentD;
  float t1D;
  long int t2D;
  public:
  Desert (string nameD = " ", string continentD = " ", float t1D = 0.0,long int t2D = 0);
  void output ();
};

Desert :: Desert (string _nameD,  string _continentD, float _t1D, long int _t2D){
  nameD = _nameD; 
  
  continentD = _continentD;
  t1D = _t1D;
  t2D = _t2D;
}

void Desert :: output (){
cout << " Название: " << nameD << endl << " Континент: " << continentD << endl  << " Средняя температура: " << t1D << endl << " Площадь (в км): " << t2D << endl << endl;
}

class Top {
  private:
   string nameT, dateT, continentT;
  public:
  Top (string nameT = " ", string dateT = " ", string continentT = " ");
  void output ();
};

Top :: Top (string _nameT, string _continentT, string _dateT){
  nameT = _nameT; 
  dateT = _dateT;
  continentT = _continentT;
  
}

void Top :: output (){
cout << " Название: " << nameT <<  endl << " Континент: " << continentT << endl << " Дата первого восхождения: " << dateT << endl << endl;
}


class SeaTrench {
  private:
   string nameS, continentS;
   float t1S;
  public:
  SeaTrench (string nameS = " ", string continentS = " ", float t1S = 0.0);
  void output ();
};

SeaTrench :: SeaTrench (string _nameS,  string _continentS, float _t1S){
  nameS = _nameS; 
  continentS = _continentS;
  t1S = _t1S;
}

void SeaTrench :: output (){
cout << " Название: " << nameS << endl << " Океан: " << continentS << endl <<  " Глубина (в метрах): " << t1S  << endl << endl;

}

int main () {

  Desert Sahara ("Сахара", "Африка", 25.3, 9200000);
  Desert Antarctic ("Антарктическая пустыня", "Антарктика", -25, 13829430 );
  Desert Arctic ("Арктическая пустыня", "Арктика", -26, 2600000);


  Top Everest ("Вершина Эверест", "Евразия", "29.05.1953");
  Top Chagori ("Вершина Чогори", "Евразия", "31.07.1954");
  Top Kanchen ("Вершина Канченджанга", "Евразия", "25.05.1955");

  SeaTrench Mariana ("Марианская впадина", "Тихий океан", 11000);
  SeaTrench Tonga ("Впадина Тонга", "Тихий океан", 10882);
  SeaTrench Philippine ("Филиппинская впадина", "Тихий океан", 10540);
  


  int i1 = 1, choice, SearchChoice, j;
  string word;
  j = 0;
  cout << "Начало работы программы" << endl;
  while (i1 != 0) {
    cout<<"1.Список пустынь" << endl;
    cout<<"2.Список морских впадин "<<endl;
    cout<<"3.Список горных вершин"<<endl;
    cout<<"4.Поиск по названию"<<endl;
    cout<<"5.Завешить работу программы"<<endl;
    cin >> choice;
     
      switch(choice){
        case 1: 
        if (choice == 1){
          Sahara.output();
          Antarctic.output();
          Arctic.output();
        }
        break;

        case 2: 
        if (choice == 2){
          Mariana.output();
          Tonga.output();
          Philippine.output();
        }
        break;

        case 3: 
        if (choice == 3){
          Everest.output();
          Chagori.output();
          Kanchen.output();
        }
        break;
        
        case 4:
          cout << "Если вы ищите пустыню введите - 1"<< endl;
          cout << "Если вы ищите впадину введите - 2"<< endl;
          cout << "Если вы ищите вершину введите - 3"<< endl;
          cin >> SearchChoice;
             switch(SearchChoice){
               case 1: 
                cout << "Введите название пустыни (слово 'пустыня' вводить не нужно)" << endl;
                cin >> word;
                    if (word == "Сахара" || word == "сахара")
                    {
                      Sahara.output();
                      j = 1;
                    }
                    if (word == "Антарктическая" || word == "антарктическая")
                    {
                      Antarctic.output();
                      j = 1;
                    }
                    if (word == "Арктическая" || word == "арктическая")
                    {
                      Arctic.output();
                      j = 1;
                    }
                    if (j == 0){
                      cout << "Название введено не верно!" << endl;
                    }
                    j = 0;
                    break;

                    case 2: 
                cout << "Введите название впадины (слово 'впадина' в назвнании не нужно)" << endl;
                cin >> word;
                    if (word == "Марианская" || word == "марианская")
                    {
                      Mariana.output();
                      j = 1;
                    }
                    if (word == "Тонга" || word == "тонга")
                    {
                      Tonga.output();
                      j = 1;
                    }
                    if (word == "Филиппинская" || word == "филиппинская")
                    {
                      Philippine.output();
                      j = 1;
                    }
                    if (j == 0){
                      cout << "Название введено не верно!" << endl;
                    }
                    j = 0;
                    break;

                    case 3: 
                cout << "Введите название вершины (слово 'вершина' в назвнании не нужно)" << endl;
                cin >> word;
                    if (word == "Эверест" || word == "эверест")
                    {
                      Everest.output();
                      j = 1;
                    }
                    if (word == "Чогори" || word == "чогори")
                    {
                      Chagori.output();
                      j = 1;
                    }
                    if (word == "Канченджанга" || word == "канченджанга")
                    {
                      Kanchen.output();
                      j = 1;
                    }
                    if (j == 0){
                      cout << "Название введено не верно!" << endl;
                    }
                    j = 0;
                    break;

                  }

             



        case 5: 
        if (choice == 5){
          cout<<"Работа завершена!";
          i1 = 0; 
        }
        break;
      }
  }
}
