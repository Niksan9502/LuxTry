#include <iostream>
#include "/usr/include/string.h"
#include "/usr/include/math.h"
#include "/usr/include/stdlib.h"
//#define N 8
//#define p_num 1

void makeCrossroads();
int main()
{
    unsigned int p_num=0;
    unsigned int N=0;
    unsigned int temp[1000];
    std::cout<<"Please input size of the array: ";
    std::cin>>N;
    for(int i=0 ; ; i++)
    {
        std::string n,m;
        std::cout<<"Please input coordinates: ";
        std::cin >> n;
        std::cin >> m;
        //std::cout<<n<<std::endl;
        if(n=="end" || m=="end")
            break;
        p_num++;
        temp[i] = atoi(n.c_str());
        i++;
        temp[i] = atoi(m.c_str());

    }

    unsigned int arr[N];
    struct point{
        unsigned char x, y;
    };

    point p[p_num];
    for(int i=0, c=0 ; i<p_num ; i++, c++)
    {
        p[i].x = temp[c];
        c++;
        p[i].y = temp[c];
    }






    int i,j;

    for(i = 0; i < p_num; i++)
    {

        arr[p[i].x] = arr[p[i].x] | (0x01<<p[i].y);

        if(p[i].x > 0)
        {
            char offset = 0;
            for(j = p[i].x - 1; j >= 0; j--)
            {
                offset ++;
                // left bit <<(p.x - j) --> offset bit
                //right bit >>(p.x - j)
                if(p[i].y + offset < N)
                {
                    arr[j] = arr[j] | (0x01 << (p[i].y + offset));
                }
                if(p[i].y - offset >= 0)
                {
                    arr[j] = arr[j] | (0x01 << (p[i].y - offset));
                }


            }
        }

        if(p[i].x != N - 1) // check input data x > n-1
        {
            char offset = 0;
            for(j = p[i].x + 1; j < N; j++)
            {
                offset++;
                // left bit <<(p.x - j) --> offset bit
                //right bit >>(p.x - j)
                if(p[i].y + (p[i].x - j) < N && p[i].x+j<N-1)
                {
                    arr[j] = arr[j] | (0x01 << (p[i].y + offset));
                }
                if(p[i].y - (p[i].x - j) >= 0)
                {
                    arr[j] = arr[j] | (0x01 << (p[i].y - offset));
                }
            }
        }


    //std::cout << m <<"   " << n << std::endl;
//    p[0].x = 3;
//    p[0].y = 7;


    //makeCrossroads();
    for(int i=0 ; i<N ; i++)
        std::cout<<arr[i]<<std::endl;
    /*
    //int N;
    std::string cmd[N*N];
    std::cout<<"Please input size of the board: ";
    //std::cin>>N;
    for(int i=0 ; i<N*N ; i++)
    {
        std::cin<<cmd[i];
        if(cmd[i]=="end")
        {
            break;
        }
    }
    for(int i=0; i<N*N ; i++)
    {
        if(cmd[i]=="end")
        {
            break;
        }
        const char * c = str.c_str();
        for(int count=i;; count++)
        {
            if(c[count]==",")\
            {
                i++;

            }
        }
    }
    */
    }
    return 0;
}
/*
void makeCrossroads()
{
    int i,j;

    for(i = 0; i < p_num; i++)
    {

        arr[p[i].x] = arr[p[i].x] | (0x01<<p[i].y);

        if(p[i].x > 0)
        {
            char offset = 0;
            for(j = p[i].x - 1; j >= 0; j--)
            {
                offset ++;
                // left bit <<(p.x - j) --> offset bit
                //right bit >>(p.x - j)
                if(p[i].y + offset < N)
                {
                    arr[j] = arr[j] | (0x01 << (p[i].y + offset));
                }
                if(p[i].y - offset >= 0)
                {
                    arr[j] = arr[j] | (0x01 << (p[i].y - offset));
                }


            }
        }

        if(p[i].x != N - 1) // check input data x > n-1
        {
            char offset = 0;
            for(j = p[i].x + 1; j < N; j++)
            {
                offset++;
                // left bit <<(p.x - j) --> offset bit
                //right bit >>(p.x - j)
                if(p[i].y + (p[i].x - j) < N && p[i].x+j<N-1)
                {
                    arr[j] = arr[j] | (0x01 << (p[i].y + offset));
                }
                if(p[i].y - (p[i].x - j) >= 0)
                {
                    arr[j] = arr[j] | (0x01 << (p[i].y - offset));
                }
            }
        }


    }

   /* for(int i=0 ; i<N ; i++)
    {
        if(arr[i]!=0)
        {
            for(unsigned long check=pow(2, N) ; check>0 ; check = check >> 1 )
            {
                //check=check|(unsigned long)(pow(2, N));
                unsigned long tmp=check;
                bool a=((arr[i]&check)==check);
                if(a==1)
                {
                    for(int temp=i-1 ; temp>=0 && fl1!=1; temp--) //Up-right
                    {
                        arr[temp]=arr[temp]|(check=check>>1);
                        std::cout<<"Arr "<<temp<<" = "<<arr[temp]<<std::endl;
                        if(check<=0)
                        {
                            fl1=1;
                            break;
                        }
                    }
                    check=tmp;
                    for(int temp=i-1 ; temp>=0 && fl2!=1 ; temp--) //Up-left
                    {
                        arr[temp]=arr[temp]|(check=check<<1);
                        //std::cout<<check;
                        std::cout<<"Arr "<<temp<<" = "<<arr[temp]<<std::endl;
                        if(check>=(pow(2, N))|| temp>=0)
                        {
                            fl2=1;
                            break;
                        }
                    }
                    check=tmp;
                    for(int temp=i+1 ; temp<=32 && fl3!=1 ; temp++)
                    {
                        arr[temp]=arr[temp]|(check=check>>1);
                        std::cout<<"Arr "<<temp<<" = "<<arr[temp]<<std::endl;
                        if(check<=0)
                        {
                            fl3=1;
                            break;
                        }
                    }
                    check=tmp;
                    for(int temp=i+1 ; temp<=32 && fl4!=1 ; temp++)
                    {
                        arr[temp]=arr[temp]|(check=check<<1);
                        std::cout<<"Arr "<<temp<<" = "<<arr[temp]<<std::endl;
                        if(check>=(pow(2, N)))
                        {
                            fl4=1;
                            break;
                        }
                    }
                    check=tmp;
                }
            }
        }
    }
}
*/
