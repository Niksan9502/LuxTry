
#include <iostream>
//#include "New.cpp"
/*
#define firstBit        0b1
#define secondBit       0b10
#define thirdBit        0b100
#define fourthBit       0b1000
#define fifthBit        0b10000
#define sixthBit        0b100000
#define seventhBit      0b1000000
#define eighthBit       0b10000000
#define ninethBit       0b100000000
#define tenthBit        0b1000000000
#define eleventhBit     0b10000000000
#define twelvethBit     0b100000000000
#define thirteenbit     0b1000000000000
#define fourteenthBit   0b10000000000000
#define fifteenthBit    0b100000000000000
#define sixteentnbit    0b1000000000000000
#define seventeenthBit  0b10000000000000000
#define eighteenthBit   0b100000000000000000
#define nineteenthBit   0b1000000000000000000
#define                 0b10000000000000000000
#define                 0b100000000000000000000
#define                 0b1000000000000000000000
#define                 0b10000000000000000000000
#define                 0b100000000000000000000000
#define                 0b1000000000000000000000000
#define                 0b10000000000000000000000000
#define                 0b100000000000000000000000000
#define                 0b1000000000000000000000000000
#define                 0b10000000000000000000000000000
#define                 0b100000000000000000000000000000
*/
void checkbits1(int sequence[]);
void checkbits(int sequence[]);
int i;
//int flag=0;

int main()
{
    int sequence  [32] = {272, 272, 224, 16252928, 50593792, 33685504, 67239936, 67174400, 33587200, 16809984, 16973824, 8650752, 7864320, 0};
    int sequence1 [32] = {0, 224, 0, 0, 16252928, 33292288, 66846720, 66977792, 33488896, 16711680, 16515072, 7864320, 0, 0};
    checkbits(sequence);
    return 0;
}
/*
void checkbits1(int sequence[])
{
    int flag=1;
    std::cout<<"Input\t\tInput as Grid\n";

    for( i=0;i<32;i++)
    {
        std::cout<<sequence[i];
        if(sequence[i]<10000000)
        {
            std::cout<<"\t\t";
        }
        else if(sequence[i]<100000000)
            std::cout<<"\t";
        for(long check=2147483648;check>0;check/=2) //
        {

            if(((sequence[i]&check)==check) && flag==1)
            {
                std::cout<<"1";
                flag=0;
            }
            else if((((sequence[i]&check)==check)) || flag==0)
            {
                std::cout<<".";
                //flag=0;
            }
            else if(((((sequence[i]&check)==check)) && flag==0))
                flag=1;
                //void newOne();
            /*if(flag==1)
                std::cout<<1;
            else if(flag==0)
                std::cout<<".";

        }
        std::cout<<"\n";
    }
}
/*
void newOne()
{

    for(int i=0;i<32;i++)
    {
        std::cout<<sequence[i];
        if(sequence[i]<10000000)
        {
            std::cout<<"\t\t";
        }
        else if(sequence[i]<100000000)
            std::cout<<"\t";
         std::cout<<"here";
        for(check=2147483648;check>0;check/=2) //
        {
            if(((sequence[i]&check)==check)/* && ((sequence[i]&check)==check/2)//)
            {
                 std::cout<<"here";
                for(int c=2;flag!=1;check/=2)
                {
                    std::cout<<"here";
                    if((sequence[i]&check)==check/c)
                        flag=1;
                }
                std::cout<<1;
                if(flag==1)
                    func();
            }
            else
                std::cout<<".";
        }
        std::cout<<"\n";
    }
}

void func()
{
    for(;flag!=0;check/=2, i++)
    {
        std::cout<<1;
        if(!(((sequence[i]&check)==check)))
            flag=0;

    }
}
*/

//------------

void checkbits(int sequence[])
{
    std::cout<<"Input\t\tInput as Grid\n";
    bool a;
    int flag=0;
    for(i=0;i<32;i++)
    {
        std::cout<<sequence[i];
        if(sequence[i]<10000000)
        {
            std::cout<<"\t\t";
        }
        else if(sequence[i]<100000000)
            std::cout<<"\t";
        for(long check=2147483648;check>0;check/=2) //
        {
            a=(sequence[i]&check)==check;
            if(a==0 && flag==0)
                std::cout<<".";
            else if(a==1 && flag==0)
            {
                std::cout<<".";
                flag=1;
                for(;flag!=0 || check !=0;check/=2)
                {
                    a=(sequence[i]&check)==check;
                    if(a==1 && flag==1)
                        std::cout<<1;
                    else if(a==0 && flag==1)
                    {
                        std::cout<<".";
                        flag=0;
                    }
                }
            }/*
            if(a && flag==1)
                flag=0;
            //else
            //    flag=0;
            else if(a)
                flag=1;
                //sequence[i]==sequence[i]^check;
                //std::cout<<".";
            //else id ()
              //  std::cout<<1;
*/
        }
        std::cout<<"\n";
    }
}

//-----------
/*
void checkbits(int sequence[])
{
    std::cout<<"Input\t\tInput as Grid\n";

    for(i=0;i<32;i++)
    {
        std::cout<<sequence[i];
        if(sequence[i]<10000000)
        {
            std::cout<<"\t\t";
        }
        else if(sequence[i]<100000000)
            std::cout<<"\t";
        for(long check=2147483648;check>0;check/=2) //
        {

            if((sequence[i]&check)==check)
                std::cout<<1;
            else
                std::cout<<".";
        }
        std::cout<<"\n";
    }
}
*/
