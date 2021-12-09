#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void voprosdva() {
    int input;
    int pl2 = 0;
    int pl1;
    char variant;
    cout << "выбери вопрос\n";
    cin >> input;
    switch (input) {
    case 1:
        cout << "Венесуэла столица a)Каракас b)Лима c)Венесуэла d)Сантьяго " << endl;
        cin >> variant;
        if (variant == 'a')
        {
            pl2 = pl2 + 5;
        }
        else
        {
            pl2 = pl2 - 3;
        }; break;
    case 2:
        cout << "Кого в Австралии больше? a)Никто не знает b)Людей c)Их поровну d)Кенгуру " << endl;
        cin >> variant;
        if (variant == 'd')
        {
            pl2 = pl2 + 5;
        }
        else
        {
            pl2 = pl2 - 3;
        } break;
    case 3:
        cout << "Чем изначально была избушка на курьих ножках? a)Дом смерти(погребальн.) b)Избушкой на курьих ножках c)сказочной птицей d)Никто не знает " << endl;
        cin >> variant;
        if (variant == 'a')
        {
            pl2 = pl2 + 5;
        }
        else
        {
            pl2 = pl2 - 3;
        } break;
    case 4:
        cout << "Когда построили первое метро? a)1880 b)1863 c)1905 d)1840 " << endl;
        cin >> variant;
        if (variant == 'b')
        {
            pl2 = pl2 + 5;
        }
        else
        {
            pl2 = pl2 - 3;
        } break;
    case 5:
        cout << "Кто дарит детям подарки в Италии (на Рождество)? a)Санта b)Папа Ноэль c)Ведьма d)Клоун " << endl;
        cin >> variant;
        if (variant == 'c')
        {
            pl2 = pl2 + 5;
        }
        else
        {
            pl2 = pl2 - 3;
        } break;
    case 6:
        cout << "Сколько весит среднее облако? a)500 кг b)1тонна c)100 кг d)2-3 кг " << endl;
        cin >> variant;
        if (variant == 'a')
        {
            pl2 = pl2 + 5;
        }
        else
        {
            pl2 = pl2 - 3;
        } break;
    case 7:
        cout << "Какую скорость может развить страус? a)до 30 км/ч b)до 60 км/ч c)более 70 км/ч d)до 100 км/ч " << endl;
        cin >> variant;
        if (variant == 'b')
        {
            pl2 = pl2 + 5;
        }
        else
        {
            pl2 = pl2 - 3;
        } break;
    case 8:
        cout << "Лемниската - это? a)Самка ската b)Морское животное c)Знак бесконечности d)Понятие в грамматике" << endl;
        cin >> variant;
        if (variant == 'c')
        {
            pl2 = pl2 + 5;
        }
        else
        {
            pl2 = pl2 - 3;
        } break;
    case 9:
        cout << "Фрукт, название которого переводится <Яблоко из Китая> - ? a)Апельсин b)Драконий фрукт c)Маракуйя d)Черешня" << endl;
        cin >> variant;
        if (variant == 'a')
        {
            pl2 = pl2 + 5;
        }
        else
        {
            pl2 = pl2 - 3;
        } break;
    case 10:
        cout << "Привет! - какая часть речи? a)существительное b)Наречие c)Местоимение d)междометие " << endl;
        cin >> variant;
        if (variant == 'd')
        {
            pl2 = pl2 + 5;
        }
        else
        {
            pl2 = pl2 - 3;
        } break;
    case 11:
        cout << "Сколько лошадей в упряжке Санта Клауса? a)1 b)0 c)3 d)12 " << endl;
        cin >> variant;
        if (variant == 1 || variant == 'a')
        {
            pl2 = pl2 + 5;
        }
        else
        {
            pl2 = pl2 - 3;
        } break;
    case 12:
        cout << "Откуда произошёл знак + в математике? a)от латинского &, которое переводится как «и» b)от латинского &, которое переводится как «или» c)Всегда был + d)Неизвестно " << endl;
        cin >> variant;
        if (variant == 'a')
        {
            pl2 = pl2 + 5;
        }
        else
        {
            pl2 = pl2 - 3;
        } break;
    default:
        cout << "Всего 12 вопросов. Больше нет, сорри";
        break;
    }
}
void voprosodin() {
    int input;
    int pl2 = 0;
    int pl1 = 0;
    char variant;
    cout << "выбери вопрос\n";
    cin >> input;
    switch (input) {
    case 1:
        cout << "Венесуэла столица a)Каракас b)Лима c)Венесуэла d)Сантьяго " << endl;
        cin >> variant;
        if (variant == 'a')
        {
            pl1 = pl1 + 5;
        }
        else
        {
            pl1 = pl1 - 3;
        }; break;
    case 2:
        cout << "Кого в Австралии больше? a)Никто не знает b)Людей c)Их поровну d)Кенгуру " << endl;
        cin >> variant;
        if (variant == 'd')
        {
            pl1 = pl1 + 5;
        }
        else
        {
            pl1 = pl1 - 3;
        } break;
    case 3:
        cout << "Чем изначально была избушка на курьих ножках? a)Дом смерти(погребальн.) b)Избушкой на курьих ножках c)сказочной птицей d)Никто не знает " << endl;
        cin >> variant;
        if (variant == 'a')
        {
            pl1 = pl1 + 5;
        }
        else
        {
            pl1 = pl1 - 3;
        } break;
    case 4:
        cout << "Когда построили первое метро? a)1880 b)1863 c)1905 d)1840 " << endl;
        cin >> variant;
        if (variant == 'b')
        {
            pl1 = pl1 + 5;
        }
        else
        {
            pl1 = pl1 - 3;
        } break;
    case 5:
        cout << "Кто дарит детям подарки в Италии (на Рождество)? a)Санта b)Папа Ноэль c)Ведьма d)Клоун " << endl;
        cin >> variant;
        if (variant == 'c')
        {
            pl1 = pl1 + 5;
        }
        else
        {
            pl1 = pl1 - 3;
        } break;
    case 6:
        cout << "Сколько весит среднее облако? a)500 кг b)1тонна c)100 кг d)2-3 кг " << endl;
        cin >> variant;
        if (variant == 'a')
        {
            pl1 = pl1 + 5;
        }
        else
        {
            pl1 = pl1 - 3;
        } break;
    case 7:
        cout << "Какую скорость может развить страус? a)до 30 км/ч b)до 60 км/ч c)более 70 км/ч d)до 100 км/ч " << endl;
        cin >> variant;
        if (variant == 'b')
        {
            pl1 = pl1 + 5;
        }
        else
        {
            pl1 = pl1 - 3;
        } break;
    case 8:
        cout << "Лемниската - это? a)Самка ската b)Морское животное c)Знак бесконечности d)Понятие в грамматике" << endl;
        cin >> variant;
        if (variant == 'c')
        {
            pl1 = pl1 + 5;
        }
        else
        {
            pl1 = pl1 - 3;
        } break;
    case 9:
        cout << "Фрукт, название которого переводится <Яблоко из Китая> - ? a)Апельсин b)Драконий фрукт c)Маракуйя d)Черешня" << endl;
        cin >> variant;
        if (variant == 'a')
        {
            pl1 = pl1 + 5;
        }
        else
        {
            pl2 = pl2 - 3;
        } break;
    case 10:
        cout << "Привет! - какая часть речи? a)существительное b)Наречие c)Местоимение d)междометие " << endl;
        cin >> variant;
        if (variant == 'd')
        {
            pl1 = pl1 + 5;
        }
        else
        {
            pl1 = pl1 - 3;
        } break;
    case 11:
        cout << "Сколько лошадей в упряжке Санта Клауса? a)1 b)0 c)3 d)12 " << endl;
        cin >> variant;
        if (variant == 1 || variant == 'a')
        {
            pl1 = pl1 + 5;
        }
        else
        {
            pl1 = pl1 - 3;
        } break;
    case 12:
        cout << "Откуда произошёл знак + в математике? a)от латинского &, которое переводится как «и» b)от латинского &, которое переводится как «или» c)Всегда был + d)Неизвестно " << endl;
        cin >> variant;
        if (variant == 'a')
        {
            pl1 = pl1 + 5;
        }
        else
        {
            pl1 = pl1 - 3;
        } break;
    default:
        cout << "Всего 12 вопросов. Больше нет, сорри";
        break;
    }
}
int main()
{
    setlocale(LC_ALL, "rus");
    char variant;
    int per = 0;
    int pl1 = 0;
    int pl2 = 0;
    int randomDigit = 0;
    int version = 0;
    do {
        cout << "ход первого" << endl;
        srand(time(NULL));
        randomDigit = 1 + rand() % 6;
        cout << "Угадай загаданное исло (1-6):";
        cin >> version;
        if (version == randomDigit)
        {
            cout << "Да, я загадал - " << randomDigit << endl;
            voprosdva();
        }
        else
        {
            cout << "Нет, я загадал - " << randomDigit << endl;
        }
        cout << "счёт первого равен " << pl1 << endl;
        cout << "ход второго" << endl;
        srand(time(NULL));
        randomDigit = 1 + rand() % 6;
        cout << "Угадай загаданное исло (1-6):";
        cin >> version;
        if (version == randomDigit)
        {
            cout << "Да, я загадал - " << randomDigit << endl;
            voprosodin();
        }
        else
        {
            cout << "Нет, я загадал - " << randomDigit << endl;
        }
        cout << "счёт второго равен " << pl2 << endl;
    } while (pl1 < 10 || pl2 < 10);
    if (pl1 == 10)
    {
        cout << "игрок 1 победил";
    }
    else if (pl2 == 10)
    {
        cout << "игрок 2 победил";
    };
}