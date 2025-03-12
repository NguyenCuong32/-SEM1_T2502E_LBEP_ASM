#include<stdio.h>
    //void cetence1()
    // {
    //     int y(x);
    //     int g =9.8;
    //     y(x) = -1/2*g*x*
    // }
    void cetence2()
    {   
        int arry[6]={7,6,3,34,10,710};
        for (int i = 0; i < 6; i++)
        {
            printf("phần tử %d của mảng là %d \r\n",i,arry[i]);
        }
        int i = 0;
        
        while (i<6)
        {
            printf(" phần tử %d của mảng là %d \r\n",i,arry[i]);
            i++;
        }
    }

        void cetence22()
        {
            int arry[6]={7,6,3,34,10,710};
            int i;
            do
            {
               printf("phần tử %d của mảng là %d \r\n",i,arry[i]);
               i++;
            } while (i<6);
            
        }
        void cetence3()
        {
            int n;      
            int max;
                printf("nhập 1 số vào trong mảng: \r\n ");
                scanf("%d",&n);
            int arry[n];;
            for (int i = 0; i < n; i++)
            {
                printf("số thứ %d\r\n",i +1);
                scanf("%d",&arry[i]);
            }
            max = arry[0];
            for (int i = 0; i < n; i++)
            {
                if (max < arry[i])
                {
                    max=arry[i];
                }
                
            }
            printf("số lớn nharat trong mảng là %d\r\n",max);  
        }
        // void cetence33()
        // {
        //         int x = 5; 
        //          int total = x * 2;      
        //         int sum;
        //         sum = total(x);
        //         printf(" x = %d là: %d\n", x, sum); 
                
            
        // }
    int main()
    {
        cetence2();
        cetence22();
        cetence3();
        cetence33();
        return 0;
    }