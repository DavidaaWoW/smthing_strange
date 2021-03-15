/*При делении с остатком у меня не получилось использовать рекурсию, поэтому просто есть абсолютно идентичные куски кода, каждый из которых отвечает
за добавление ещё одной цифры после запятой, сейчас он считает до 4 цифр после запятой, в теории куски кода можно продолжать вставлять до бесконечности...*/
#include <iostream>
#include <math.h>
#include <sstream>

using namespace std;

void err(int a)
{
    switch (a)
    {
    case '0':
        cout<< "Ошибка, возможно вы неправильно ввели числа, или символ операции";
        exit(0);
        break;
    case '1':
        cout<< "Ай-ай, то, что я использую только оператор сложения не значит, что правила арифметики изменились. Нельзя делить на ноль!";
        exit(1);
        break;
    }
}

int rev(int a)
{
    int temp = 0;
    if(a>0)
    {
        int temp1 = -1;
        while(a!=abs(temp))
        {
            temp += temp1;
        }
        return temp;
    }
    else if(a<0)
    {
        int temp1 = 1;
        while(temp!=abs(a))
        {
            temp += temp1;
        }
    }
}

int multh(int a, int b)
{
    if(b == 0)
        return 0;
    int temp = a;
    for(int c = 0;c<abs(b)-1;c++)
    {
        a += temp;
    }
    if(b<0)
        return rev(a);
    return a;
}

int rem(int a,int b)
{
    return multh(b,10);
}

string dividh5(int a, int b)
{
    string l;
    stringstream ss;
    int temp = b,temp1 = 0;
    while(b<=a)
    {
        temp1++;
        b += temp;
    }
    if(b<0)
        ss << rev(temp1);
    else
        ss << temp1;
    ss >> l;
    return l;
}

string dividh4(int a, int b)
{
    string l;
    stringstream ss;
    int temp = b,temp1 = 0;
    while(b<=a)
    {
        temp1++;
        b += temp;
    }
        b += rev(temp);
            if(a-b!=0)
        {
            b = a + rev(b);
            ss << temp1 << dividh5(rem(temp,b),temp);
            ss >> l;
            return l;
        }
    if(b<0)
        ss << rev(temp1);
    else
        ss << temp1;
    ss >> l;
    return l;
}

string dividh3(int a, int b)
{
    string l;
    stringstream ss;
    int temp = b,temp1 = 0;
    while(b<=a)
    {
        temp1++;
        b += temp;
    }
    b += rev(temp);
            if(a-b!=0)
        {
            b = a + rev(b);
            ss << temp1 << dividh4(rem(temp,b),temp);
            ss >> l;
            return l;
        }
    if(b<0)
        ss << rev(temp1);
    else
        ss << temp1;
    ss >> l;
    return l;
}

string dividh2(int a, int b)
{
    string l;
    stringstream ss;
    int temp = b,temp1 = 0;
    while(b<=a)
    {
        temp1++;
        b += temp;
    }
    b += rev(temp);
        if(a-b!=0)
        {
            b = a + rev(b);
            ss << temp1 << dividh3(rem(temp,b),temp);
            ss >> l;
            return l;
        }
    if(b<0)
        ss << rev(temp1);
    else
        ss << temp1;
    ss >> l;
    return l;
}

string dividh(int a, int b)
{
    string l;
    stringstream ss;
        int temp3 = 0;
    if(a<0)
        temp3++;
    if(b<0)
        temp3++;
    if(temp3==1)
        ss<<"-";
    a = abs(a);
    b = abs(b);
    int temp = b,temp1 = 0;
    while(b<=a)
    {
        temp1++;
        b += temp;
    }
    b += rev(temp);
    if(a-b!=0)
        {
            b = a + rev(b);
            ss << temp1 << "." << dividh2(rem(temp,b),temp);
            ss >> l;
            return l;
        }
    if(b<0)
        ss << rev(temp1);
    else
        ss << temp1;
    ss >> l;
    return l;
}

void sum(int a, int b)
{
    cout<<"Ну, это слишком просто... я просто возьму число " << a << " и прибавлю к нему число " << b << " и получу в итоге число " << a+b << endl;
}

void diff(int a, int b)
{
    cout<<"Как же мне выполнить вычитание используя только оператор сложения? Всё просто, я сначала поменяю знак числу " << b << " делать я это буду прибавляя друг к другу числа 1, или -1 до тех пор, пока не получу нужное мне число по модулю " << rev(b) << " ну а затем, я могу спокойно прибавить к первому числу второе и получить верный ответ:" << a << " + (" << rev(b)<<") = " << a+rev(b)<<endl;
}

void mult(int a, int b)
{
    cout<<"Хмм, выполнить умножение сложением? Звучит довольно просто. Я просто возьму число " << a << " и буду складывать его с самим собой ровно " << b << " раз и в итоге получу ответ: " << multh(a,b);
}

void divid(int a, int b)
{
    if(b == 0)
        err(1);
    cout<<"Деление - действительно сложная операция, к сожалению я не смогу получить остаток от деления, но до целых обещаю выполнить :) я попробую представить " << a << " / " << b << " = x, как " << a << " = " << b <<"x, благодаря этому, я смогу воспользоваться операторами умножения, в результате чего получу ответ: " << a << " / " << b << " = " << dividh(a,b)<< endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Я очень люблю арифметику, а ещё я считаю, что во всём нужно видеть только ПЛЮСЫ, ниже представлен элементарный калькулятор, который выполняет арифметические действия, используя при этом только оператор сложения"<<endl;
    cout<<"Введите первое число, арифметический оператор (+,-,*,/) и второе число"<<endl;
    int a,b;
    char sym;
    cin>>a>>sym>>b;
    switch (sym)
    {
    case '+':
        sum(a,b);
        break;
    case '-':
        diff(a,b);
        break;
    case '*':
        mult(a,b);
        break;
    case '/':
        divid(a,b);
        break;
    default:
        err(0);
    }
    return 0;
}
