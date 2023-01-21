#include <bits/stdc++.h>
// #include <deque>


using namespace std;


// bool comp(int a)
// {
//     if(a<5) return true;
//     else return false;
// }

// void printVector (vector <int> v)
// {
//         // for(auto it=v.begin(); it != v.end())
//         // {
//         //     cout << *it << " ";
//         // } 

//         // for(auto it : v)
//         // {
//         //     cout << it << " ";
//         // }

//         for_each(v.begin(), v.end(), [] (int a) {
//             if(a < 5) cout << a;

//         });

// }

// struct jojo
// {
//     int x=0;
//     int y=1;

// } p9;  // p9 will be a poointer ty budew imet dostup tok s iteratorom tipo pointera


int main()
{
    // map <int, string> name;
    // name.emplace(12, "roma");
    // name.insert(make_pair(12, "roma"));
    // name.insert(pair<int, string>(2, "ramazan"));
    // в мапах все уже отсортировано по ключуб ключь это первый элемент нашего мапа
    // map <int, string> :: iterator i = name.begin();
    // i = name.find(123); 
    // auto i = name.find(123);
    // если элемент не найден то возвращает name.end() if(i == name.end()){ dngregewrg}
    // авто и ручнаой итероатор это одно и тоже;
    // v map my ne mochem dobovit' 2 elementa s odnim klychom новый элемент просто не добавится;
    // dlya etogo my dolchny ispolzovat' multimap
    // посик осуществ только по ключу
    // name[ключьб первый тип памяти]; мы таким образом сразу получаем пару; но вывод будет не ключ а пара его;
    // name[123] = "Aidar"; change;
    // // name.erase(ключ);
    //     pair <int, string> roma(123, "roma");
    //     cout << roma.first;
    //     cout << roma.second;
    // multimap <int, string> taker;
    // STACK

    // stack <int, vector<int>> jojo;

    // jojo.emplace(123);(это быстрее);
    // jojo.push(123);
    // jojo.empty(); возвращает булевое значение есть там что то или нету If pustoi cout True, else cout << False;
    // вывод последнего элемента jojo.top();
    // удалить последний элемент jojo.pop() и удалив можем предыдущий элемент вывести
    // мы в stack имеем доступ только к последнему элементу;
    // negation {!}
    // while(!jojo.empty())
    // {
    //     cout << jojo.top();
    //     jojo.pop();
    // }
    // jojo.emplace(123);
    // мультиmap не сортирует 2-й элемент; and maybe map; 

    // создать копию массива;
    // int w[] = {1, 2, 4, 5, 6};
    // int a[0];
    // copy (w, w+5, a);

    // for(int i=0;i<5;i++)
    // {
    //     cout << a[i] <<" ";
    // }

    // чистка вектора namevector.clear();

    // удалить последний элемент namevector.pop_back();

    // вместимость вектора namevector.capasity(); выделяется память с запасом. Это место для следующего элемента.

    // добавить самостоятельно запас для след элемента namevector.reserve();

    // выровнить вектор массива его запас с содержанием что в нем хранится namevector.shrink_to_fit();

    // vector <int> jojo(10, 1);(заполнить вектор каким то типом данных весь вектор)
    // for(int i=0;i<jojo.size();i++)
    // {
    //     cout << jojo[i] << " ";
    // }

    // изменить размер вектора namevector.resize(new size);


    // Iterator_______________________________________________________________________________________________________

    // Перед itetator надо изучить Указатели____________________________________________________________________________

    // int *a = new int(5);//(указывает на память где оно хранится)
    // *a = 123;
    // cout << *a;

    // Алгоритм {unique} возвращает указатель на новый конец контейнера

    // максимальный элемент в массиве : (поинтер нужен нет, хз)max_element(a.begin(), a.end());


    // mp[key] = значение какое то оно меняет старую память на новую заменяет его. Он откличается от emplace метода ввода.
    // в мап автоматическиое обнуление какого то вида памяти происходит

    // simple code youtube



    // lyamda function
    // [оговорка о захвате] (параметр тип памяти возврата) {определение метода наверн какое то условие}
    // for_each бытсрый перебор массивва безиспольщзования перебора оно делает для каждого элемента но не n раз 
    // for_each можешь заменить на for(type of memory you can use only auto  : massive/container){do that};
    // for (pair<int, string> mpEx : mapExample ) {
    //     cout<<mpEx.first<<" "<<mpEx.second<<endl;
    // }
    // ,  , , , , ,, , , , , , , , , , , ,
    // for (auto mpEx : mapExample){
    //     cout<<mpEx.first<<" "<<mpEx.second<<endl;
    // }
    // vector<int> v {4, 1, 3, 5, 2, 3, 1, 7};
    // printVector(v);

    // [] (const int& a, const int& b) { условие} тут б выступает в роли всего массива всех элементов в массиве
    // а если одно значение то просто элемент в промежутке между бегин и енд
    // unique дает доступ к уникальным элементам 
    // q = unique(v.begin(), v.end(), [] (int a, int b) {
    //     return a == b;
    // }); потом можем просто использовать q;

    // list <int> v = {4, 1, 3, 5, 2, 3, 1, 7};
    
    
    
    
    // auto square = [] (int a)
    // {
    //     return a*a;
    // };
    // cout << square(5);
    // auto DABL = [] (int a)
    // {
    //     return a*2;
    // };
    // cout << DABL(2); //== 4


    // namecontainer.remove(то что мы хотим удалить) ; удаляет этот элемент из контейнера

        
    // bool number_single (const int& val) { 
    // return val < 10;
    // }
    // int main() {
    // // ...
    // mylist.remove_if(number_single);
    // // ... ну или [] функция

    // auto it = ([&] (int a)
    // {
    //     return(a>3);
    // });
    // v.remove_if(it);
    // for_each(v.begin(), v.end(), [] (int a) {
    //     cout << a <<" ";
    // });


    // там где было понимание итераторов и понтеров_________________________________________________________ 

    // int * jojo;
    // jojo = так ты указываешь где оно хранится в памяти
    // а *jojo ты так указываешь на эту память нде оно находится и выводится значение самой переменной где переменная хранится это похоже на ключь
    // int a = 5;
    // cout << &a ----> так ты получишь информацию о том где хранится наша переменная 
    // и так ты можешь менять переменные с помощью нахождения переменных

    // multiset <int> v = {4, 1, 3, 5, 2, 3, 1, 7};
    // multiset <int> :: iterator it1 = v.begin();
    // multiset <int> :: iterator it2 = v.end(); 
    // // auto it3 = v.find(5);
    // multiset <int> :: iterator it3;
    // it3 = v.find(4);
    // // cout << &(*it1);
    // // cout << " " << &(*it2);
    // cout << (&(*it3));
    // в сетах мултисатах в листе и тд разные значения хранятся не последовательно а разбросано и в форике там будет плюсовать ++ до тех пор пока не встретит значение 
    // наверное для разных типов памяти выделяется разные места для хранения значении у итераторов
    // итератор указывает на память где оно хранится и мы с помощбю итераторов можем получить доступ и памяти где оно хранится 

    // int static q; эта переменная никогда не удаляется а сохраняет ее до завершения программы
    // можно его заменить глобальной переменнной но так выглядит более эстетично
    // std::generate(v1.begin(), v1.end(), gen); // просто добавляет элементы в наш вектор автоматический 



    // reverse_iterator просто начинает отсчет с конца но вс еравно все оставляешь на своих местах
    // :: reverse_iterator it = jojo.rbegin();
    // for(it;it!=jojo.rend();it++)
    // {
    //     it-> it -> //// 
    // }


    // // double d = 5/3;
    // // printf("%.7f", );
    // /

    // Library Algotigthh

    // count_if(begin, end, func);

    // rotate((begin, end) расположение, where (end or begin()));

    // [0;3) в алгоритмах всегда так 

    // fill((begin, end+something)(промежуьток)б чем заполнить);

    // LIST

    // distance(дистанция между итераторами)

    // unique 
    // последовательные повт цифры уберает и ток 1 знач оставит

    // unique возвращает последнее значение после расстрела 

    // STRUCTUREES
    
    // struct jojo p1;//[10];;
    // p1.x = 1000000000;
    // cout << p1.x << p1.y;
    // p1[0].x = 3;
    // p1[0].y = 5;
    // cout << p1[0].x << " " << p1[0].y;

    // struct jojo * p2 = &p1;
    // cout << p2->x <<" " << p2->y ;

    // struct jojo


    // * ----> указывает на ячейку памяти и выводит значение в котором там хранится что то

    // int w[5] = {1, 2, 3, 4, 5};
    // int a[0];
    // copy(w, w+5, a);
    // for(int i=0;i<5;i++)
    // {
    //     cout << a[i] <<" ";
    // }

    // vector<int> jojo{1, 2, 3, 4, 5};
    // vector<int> akk;
    // akk = jojo;
    // cout << akk.size();

    vector<int> jojo{1, 2, 3, 4, 5, 6, 7,8, 9, 10};


    // remove_if(jojo.begin(), jojo.end(), [&](int a)
    // {
    //     if(a > 5) return false;
    //     else return true;
    // });
    // remove_if(jojo.begin(), jojo.end(), comp);
    // for(int i=0;i<jojo.size();i++)
    // {
    //     cout << jojo[i] <<" ";
    // }

    // int k = count_if(jojo.begin(), jojo.end(), comp);
    // // for(int i=0;i<jojo.size();i++)
    // // {
    // //     cout << jojo[i] <<" ";
    // // }
    // cout << k;
    // vector<int> :: iterator it;
    // for(it=jojo.rbegin();it!=jojo.rend();it++)
    // {
    //     cout << *it <<" ";
    // }

    // for(it=jojo.end()-1;it!=jojo.begin()-1;it--)
    // {
    //     cout << *it <<" ";
    // }
    // вывод реверс итератор гнах не нужен

    // cout << distance(jojo.begin(), jojo.end());

    // rotate(jojo.begin(), jojo.begin()+4, jojo.end()-5);

    // for(auto it : jojo)
    // {
    //     cout << it <<" " ;
    // }


    // vector<int> roma(10, 10);
    // for(int i=0;i<10;i++)
    // {
    //     cout << roma[i] <<" ";
    // }

    // vector<int> roma(10);

    // fill(roma.begin(), roma.begin()+5, 6 );
    // for(int i=0;i<roma.size();i++)
    // {
    //     cout << roma[i] << " ";
    // }
    deque<int> jojo;
    
    // jojo.push_fr(10);/
    // pop удаляет с конца
    // push запускает в конец
    // front() вывести первый элемент
    // back() выводит последний элемент на экран
    // stoi - берет только цифры и превращает в инт
}   


