#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int map[5][5];
class ship
{
    public:
    int generatorHeat;
    int batteryCharge;
}
int getRand6();
int getRand100();
int getRandPwrOf2();
void stats();
int showMap();
void repopulateMap();
void takeOff();
void startWarp();
void startWork();
void takeOff()
{
    
}
void startWarp()
{
    
}
void startWork()
{
    
}
void repopulateMap()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            map[i][j]=getRand100();
        }
        cout<<endl;
    }
}
int showMap()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<map[i][j]<<" ";
        }
        cout<<endl;
    }
}
void stats()
{
    ship ship;
    cout<<"Generator Heat: "<<ship.generatorHeat<<endl;
    cout<<"Battery Charge: "<<ship.batteryCharge<<endl;
}
int getRand6()
{
    int a;
    a=rand()%6+1;
    return a;
}
int getRand100()
{
    int a;
    a=rand()%100+1;
    return a;
}
int getRandPwrOf2()
{
    int a;
    a=rand()%6+1;
    return pow(2,a);
    
}

int main()
{
    repopulateMap();
    
    
    return 0;
}
