    #include<stdlib.h>
    #include<stdio.h>
    #include<conio.h>



        void print_mult(int n,int a)
    {
        if(n%a==0)
            printf("%d ",a);
    }
    void Problem_6_1()
    {
        int a,n;
        scanf("%d",&n);
        for(a=1;a<=n;a++)
            print_mult(n,a);


    }
        int n;
    int comp(int g)
    {
        if (n==g)
            return 1;
        else
        {
            if(g>n)
                printf("%d>\n",g);
            else
                printf("%d<\n",g);
                return 0;
        }
    }
   void Problem_6_2()
    {
        int t=0,g;
        scanf(" %d",&n);
        while(1)
        {
            scanf(" %d",&g);
            t++;
            if(comp(g))
                break;
        }
        printf("%d",t);
        return 0;
    }

    int sum1(int n,int s1)
    {
        return s1+n;
    }

    void Problem_6_3()
    {
        int n,s=0;
        do{
            scanf(" %d",&n);
            s=sum1(s,n);
        }
        while(n);
        printf("%d",s);

    }
        void print1(int i)
    {
        for(int j=1;j<i;j++)
        {
            printf("%d*", j);
        }
    }
    void print2(int i)
    {
        int fact=1;
        for(int j=1;j<=i;j++)
            fact*=j;

        printf("%d=%d\n", i, fact);
    }

    void Problem_6_4()
    {
       for(int i=2;i<=10;i++)
        {
            printf("%d!=", i);
            print1(i);
            print2(i);
        }

        return 0;
    }
        int getsmall(int a,int b)
    {
        return a<=b?a:b;
    }
    int getdenom(int a,int b)
    {
        for(int i=getsmall(a,b);i>=1;i--)
            if(a%i==0 && b%i==0)
        {
            return i;
        }
            return 1;
    }
    void Problem_6_5()
    {
        int a,b,i;
        scanf("%d %d",&a,&b);
        printf("%d",getdenom(a,b));
    }





    int add(int a, int b)
    {
        return a + b;
    }

    void Problem_7_1()
    {
        int n;
        int sum = 0;

        scanf("%d", &n);

        for (int i = 0; i <= n; i++)
            sum = add(sum, i);

        printf("%d\n", sum);
    }

    int sum(int n)
            {
                return n*(n+1)/2;
            }
    void Problem_7_2()

            {
                int n,m;
                scanf("%d %d",&n,&m);
                printf("%d\n",sum(m)-sum(n-1));

            }
    int cum(int x)
    {
        return x*(x+1)/2;
    }

    void Problem_7_3()
    {
        int a,m,s=0;
        scanf("%d",&a);
        for(m=1;m<=a;m++)

            s+=cum(m);

        printf("%d\n",s);


    }
    int n;
    int print_row1 ()
        {
          for (int i = 0; i < n; i++)
            printf ("%d", n);

          printf ("\n");
        }

     int print_row2 ()
        {
          printf ("%d", n);

          for (int i = 0; i < n - 2; i++)
            printf (" ");

          printf ("%d\n", n);
        }
    void Problem_7_4()
    {


         scanf("%d",&n);
          print_row1();

         for(int i=0;i<n-2;i++)
         print_row2();

         print_row1();
    }
    int print_star(int n)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
                printf("*");

            printf("\n");
        }
    }
    void Problem_7_5()
    {
        int n;
        while(1)
        {
            scanf("%d", &n);

            if(n>0)
                print_star(n);
            else
                break;
        }

    }
    int func(int x)
    {
        return (2*x*x - 5*x + 1);
    }
    void Problem_7_6()
    {
        int x;
        scanf("%d", &x);
        printf("%d\n", func(x));
    }
    int func1(int x,int a,int b,int c)
    {
        return a*x*x+b*x+c;
    }

    void Problem_7_7()
    {
        int x,a,b,c,f;
        scanf("%d %d %d %d",&x,&a,&b,&c);
        f=func1(x,a,b,c);
        printf("%d\n",f);

    }

    int func2(int x,int a,int b,int c)
    {
        return a*x*x+b*x+c;
    }

    void Problem_7_8()
    {
        int x,a,b,c,f,a1,b1,c1,s;
        scanf("%d",&x);
        scanf("%d %d %d",&a,&b,&c);
        scanf("%d %d %d",&a1,&b1,&c1);
        s=func2(x,a,b,c);
        f=func2(s,a1,b1,c1);
        printf("%d\n",f);

    }
    int max1,max2;
    void update(int n)
    {
        max2 = n > max2 ? n :max2;
        max2 = n > max1 ? max1:max2;
        max1 = n> max1 ? n: max1;

    }
    void Problem_7_9()
    {
        int n;
        scanf("%d",&n);
        max1=max2=n;
        while(1)
            {
                scanf("%d",&n);
                if(n)
                    update(n);
                else break;
            }
        printf("%d %d\n",max1,max2);

    }
     void chapter_6()
    {
        do
        {
            char q;
            int ch;
            scanf("%c",&q);
            if(q=='e')
                break;
            scanf("%d", &ch);
            if(ch>0 && ch<=10 && q=='p')
            {
                switch(ch)
            {

                case 1:
                    Problem_6_1();
                    break;
                case 2:
                    Problem_6_2();
                    break;
                case 3:
                    Problem_6_3();
                    break;
                case 4:
                    Problem_6_4();
                    break;
                case 5:
                    Problem_6_5();
                    break;

                    }
                }
            }
            while(1);
}



    void chapter_7()
    {
        do
        {
            char q;
            int ch;
            scanf("%c",&q);
            if(q=='e')
                break;
            scanf("%d", &ch);
            if(ch>0 && ch<=10 && q=='p')
            {
                switch(ch)
            {

                case 1:
                    Problem_7_1();
                    break;
                case 2:
                    Problem_7_2();
                    break;
                case 3:
                    Problem_7_3();
                    break;
                case 4:
                    Problem_7_4();
                    break;
                case 5:
                    Problem_7_5();
                    break;
                case 6:
                    Problem_7_6();
                    break;
                case 7:
                    Problem_7_7();
                    break;
                case 8:
                    Problem_7_8();
                    break;
                case 9:
                    Problem_7_9();
                    break;



                    }
                }
            }
            while(1);
}


    int main()
    {
        char ch;
        int n;  // to read the problem number each time;

            scanf("%c %d", &ch,&n);
              if ((ch=='c'|| ch=='C')&& (n==7))
        {
            chapter_7();

        }
        else if((ch=='c' || ch=='C')&&(n==6))
        {
            chapter_6();
        }

    }

