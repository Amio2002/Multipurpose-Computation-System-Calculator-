#include<stdio.h>
#include<math.h>
int main()
{
    int op;
//Main Menu
    menu:
        printf("--Multipurpose Computation System--\n\n");
        printf("Choose any option: \n\n");
        printf("1. Operations on real numbers.\n");
        printf("2. Operations on complex numbers.\n");
        printf("3. Operations on matrices.\n");
        printf("4. Operations on Series Summation.\n");
        printf("5. Quit!!\n");

        scanf("%d", &op);
//Operations on real numbers
    if(op == 1)
    {
        real:
        printf("--Operations on real numbers--\n\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Solution of Quadratic Equation\n");
        printf("6.Return to Front Page.\n");

        int op1;
        scanf("%d", &op1 );
    //Addition
        if(op1 == 1)
        {
            printf("--Additoin--\n\n");
            printf("Enter two real numbers: ");
            float a, b;
            scanf("%f %f", &a, &b);
            printf("Result is: %0.4f", a+b);
            printf("\n-----------------------");
            printf("\n\n");
            goto real;
        }
    //Subtraction
        if(op1 == 2)
        {
            printf("--Subtraction--\n\n");
            printf("Enter two real numbers: ");
            float a, b;
            scanf("%f %f", &a, &b);
            printf("Result is: %0.4f", a-b);
            printf("\n-----------------------");
            printf("\n\n");
            goto real;
        }
    //Multiplication
        if(op1 == 3)
        {
            printf("--Multiplication--\n\n");
            printf("Enter two real numbers: ");
            float a, b;
            scanf("%f %f", &a, &b);
            printf("Result is: %0.4f", a*b);
            printf("\n-----------------------");
            printf("\n\n");
            goto real;
        }
    //Division
        if(op1 == 4)
        {
            printf("--Division--\n\n");
            printf("Enter two real numbers: ");
            float a, b;
            scanf("%f %f", &a, &b);
            if(b!=0)
            {
                printf("Result is: %0.4f", a/b);
                printf("\n-----------------------");
                printf("\n\n");
                goto real;
            }
            else
            {
                printf("Result is: Undefined!!");
                printf("\n-----------------------");
                printf("\n\n");
                goto real;
            }
        }
    //Solution of Quadratic Equation
        if(op1 == 5)
        {
            printf("--Solution of a Quadratic Equation--");
            printf("\nEnter three co-efficient values of: \n");
            float a,b,c;
            printf("a: ");
            scanf("%f", &a);
            printf("b: ");
            scanf("%f", &b);
            printf("c: ");
            scanf("%f", &c);

            float discriminant = (b*b)-4*a*c, root1, root2;
            if (discriminant > 0)
            {
                root1 = (-b + sqrt(discriminant)) / (2 * a);
                root2 = (-b - sqrt(discriminant)) / (2 * a);
                printf("root1 = %.2f and root2 = %.2f", root1, root2);
                printf("\n-----------------------");
                printf("\n\n");
                goto real;
            }
            else if (discriminant == 0)
            {
                root1 = root2 = -b / (2 * a);
                printf("root1 = root2 = %.2lf;", root1);
                printf("\n-----------------------");
                printf("\n\n");
                goto real;
            }
            else
            {
                printf("This mode only work for real number roots");
                printf("\n\n");
                goto real;
            }
        }

        if(op1 == 6)
        {
            goto menu;
        }
    }
//Operations on complex numbers
    else if( op == 2)
    {
        complex:
        printf("--Operations on complex numbers--\n\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Complex Conjugate\n");
        printf("6.Solution of Quadratic Equation\n");
        printf("7.Return to Front Page.\n");
        int op2;
        scanf("%d", &op2);
    //Addition
        if(op2 == 1)
        {
            printf("--Addition--\n\n");
            float a, b, c, d;
            printf("Enter Real and Imaginary part of first number respectively: ");
            scanf("%f %f", &a, &b);
            printf("Enter Real and Imaginary part of second number respectively: ");
            scanf("%f %f", &c, &d);
            printf("First number: %0.2f + i %0.2f", a,b);

            printf("\nSecond number: %0.2f + i %0.2f", c,d);

            printf("\nResult is: %0.2f + i %0.2f", a+c, b+d);
            printf("\n-----------------------");
            printf("\n\n");
            goto complex;
        }
    //Subtraction
        if(op2 == 2)
        {
            printf("--Subtraction--\n\n");
            float a, b, c, d;
            printf("Enter Real and Imaginary part of first number respectively: ");
            scanf("%f %f", &a, &b);
            printf("Enter Real and Imaginary part of second number respectively: ");
            scanf("%f %f", &c, &d);
            printf("First number: %0.2f + i %0.2f", a,b);

            printf("\nSecond number: %0.2f + i %0.2f", c,d);

            printf("\nResult is: %0.2f + i %0.2f", a-c, b-d);
            printf("\n-----------------------");
            printf("\n\n");
            goto complex;
        }
    //Multiplication
        if(op2 == 3)
        {
            printf("--Multiplication--\n\n");
            float a, b, c, d;
            printf("Enter Real and Imaginary part of first number respectively: ");
            scanf("%f %f", &a, &b);
            printf("Enter Real and Imaginary part of second number respectively: ");
            scanf("%f %f", &c, &d);
            printf("First number: %0.2f + i %0.2f", a,b);

            printf("\nSecond number: %0.2f + i %0.2f", c,d);

            printf("\nResult is: %0.2f + i %0.2f", a*c - b*d, a*d + b*c);
            printf("\n-----------------------");
            printf("\n\n");
            goto complex;
        }
    //Division
        if(op2 == 4)
        {
            printf("--Division--\n\n");
            float a, b, c, d;
            printf("Enter Real and Imaginary part of first number respectively: ");
            scanf("%f %f", &a, &b);
            printf("Enter Real and Imaginary part of second number respectively: ");
            scanf("%f %f", &c, &d);
            printf("First number: %0.2f + i %0.2f", a,b);

            printf("\nSecond number: %0.2f + i %0.2f", c,d);

            printf("\nResult is: %0.2f + i %0.2f", ((a*c) + (b*d))/((c*c)+(d*d)), ((b*c)-(a*d))/((c*c)+(d*d)));
            printf("\n-----------------------");
            printf("\n\n");
            goto complex;
        }
    //Complex Conjugate
        if(op2 == 5)
        {
            printf("--Complex Conjugate--\n\n");
            float a, b;
            char sign, con_sign;
            printf("Enter Real and Imaginary part of first number respectively: ");
            scanf("%f %f", &a, &b);

            if(b<0)
            {
                sign = '-';
                con_sign = '+';
                b = b*-1;
            }
            else
            {
                sign = '+';
                con_sign = '-';
            }
            printf("Complex number: %0.2f %c i %0.2f", a,sign,b);
            printf("\nComplex conjugate: %0.2f %c i %0.2f", a,con_sign,b);
            printf("\n--------------------------------------");
            printf("\n\n");
            goto complex;

        }
    //Solution of a Complex Quadratic Equation
        if(op2 == 6)
        {
            printf("--Solution of a Quadratic Equation--\n\n");
            printf("Enter three co-efficient values of: \n");
            float a,b,c;
            printf("a: ");
            scanf("%f", &a);
            printf("b: ");
            scanf("%f", &b);
            printf("c: ");
            scanf("%f", &c);
            float discriminant = (b*b)-4*a*c, root1, root2;
            if(discriminant >= 0)
            {
                printf("This mode only work for complex number roots");
                goto complex;
            }
            else
            {
                float realPart, imagPart;
                realPart = -b / (2 * a);
                imagPart = sqrt(-discriminant) / (2 * a);
                printf("root1 = %.2f + %.2fi and root2 = %.2f - %.2fi", realPart, imagPart, realPart, imagPart);
                printf("\n------------------------------------------------");
                printf("\n\n");
                goto complex;
            }
        }
        if(op2 == 7)
        {
            goto menu;
        }

    }
//Operations on matrices
    else if( op == 3)
    {
       matrix:
            printf("--Operations on matrices--\n\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Multiplication by corresponding elements\n");
        printf("5.Transpose Matrix\n");
        printf("6.Return to Front Page\n");
        int op3;
        scanf("%d", &op3);
        //Addition
        if( op3 == 1)
        {
            printf("--Addition--\n\n");

            int i,j,r1,c1,r2,c2;
            int X[100][100],Y[100][100],R[100][100];
            printf("Enter the dimensions (rows and columns) of X matrix: ");
            scanf("%d %d", &r1, &c1);
            printf("Enter the dimensions (rows and columns) of Y matrix: ");
            scanf("%d %d", &r2, &c2);


    if(r1 == r2 && c1 == c2)
    {
            //Input X matrix
           printf("\nEnter elements for X matrix.\n");
           for(i=0; i<r1; i++)
           {
               for(j=0; j<c1; j++)
               {
                    printf("X(%d, %d)= ", i, j);
                    scanf("%d",&X[i][j]);
               }
                printf("\n");
           }
        //Input Y matrix
           printf("\nEnter elements for X matrix.\n");
           for(i=0; i<r2; i++)
           {
               for(j=0; j<c2; j++)
               {
                    printf("X(%d, %d)= ", i, j);
                    scanf("%d",&Y[i][j]);
               }
                printf("\n");
           }
        //Output X matrix
           printf("X matrix: ");
           printf("\n");
           for(i=0; i<r1; i++)
           {
               printf("\t");
               for(j=0; j<c1; j++)
               {
                    printf("%d ", X[i][j]);
               }
                printf("\n");
           }
        //Output Y matrix
           printf("Y matrix: ");
           printf("\n");
           for(i=0; i<r2; i++)
           {
               printf("\t");
               for(j=0; j<c2; j++)
               {
                    printf("%d ", Y[i][j]);
               }
                printf("\n");
           }
        //Adding X & Y matrix
           for(i = 0; i < r1; i++){
            for(j = 0; j < c1; j++){
                R[i][j] = X[i][j]+Y[i][j];
            }
            }
        //Output of R(result) matrix
            printf("\nThe Result is: ");
            printf("\n");
             for(i = 0; i < r1; i++)
            {
                printf("\t");
                for(j = 0; j < c1; j++)
                {
                    printf("%d ",R[i][j]);
                }
                printf("\n");

             }
             printf("\n");
             goto matrix;
    }
    else
    {
        printf("The dimensions of X and Y are not matched, addition is not possible\n\n");
        goto matrix;
    }
}

    //Subtraction
    if( op3 == 2)
        {
            printf("--Subtraction--\n\n");

            int i,j,r1,c1,r2,c2;
            int X[100][100],Y[100][100],R[100][100];
            printf("Enter the dimensions (rows and columns) of X matrix: ");
            scanf("%d %d", &r1, &c1);
            printf("Enter the dimensions (rows and columns) of Y matrix: ");
            scanf("%d %d", &r2, &c2);


    if(r1 == r2 && c1 == c2)
    {
            //Input X matrix
           printf("\nEnter elements for X matrix.\n");
           for(i=0; i<r1; i++)
           {
               for(j=0; j<c1; j++)
               {
                    printf("X(%d, %d)= ", i, j);
                    scanf("%d",&X[i][j]);
               }
                printf("\n");
           }
        //Input Y matrix
           printf("\nEnter elements for X matrix.\n");
           for(i=0; i<r2; i++)
           {
               for(j=0; j<c2; j++)
               {
                    printf("X(%d, %d)= ", i, j);
                    scanf("%d",&Y[i][j]);
               }
                printf("\n");
           }
        //Output X matrix
           printf("X matrix: ");
           printf("\n");
           for(i=0; i<r1; i++)
           {
               printf("\t");
               for(j=0; j<c1; j++)
               {
                    printf("%d ", X[i][j]);
               }
                printf("\n");
           }
        //Output Y matrix
           printf("Y matrix: ");
           printf("\n");
           for(i=0; i<r2; i++)
           {
               printf("\t");
               for(j=0; j<c2; j++)
               {
                    printf("%d ", Y[i][j]);
               }
                printf("\n");
           }
        //Subtracting X & Y matrix
           for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c1; j++)
                {
                    R[i][j] = X[i][j]-Y[i][j];
                }
            }
        //Output of R(result) matrix
            printf("\nThe Result is: ");
            printf("\n");
             for(i = 0; i < r1; i++)
             {
                printf("\t");
                for(j = 0; j < c1; j++)
                {
                    printf("%d ",R[i][j]);
                }
                printf("\n");
             }
             printf("\n\n");
            goto matrix;
    }
    else
    {
        printf("The dimensions of X and Y are not matched, Subtraction is not possible\n\n");
        goto matrix;
    }
    }//

//Multiplication
    if( op3 == 3)
        {
            printf("--Multiplication--\n\n");

            int i,j,r1,c1,r2,c2,k;
            int X[100][100],Y[100][100],R[100][100], sum=0;
            printf("Enter the dimensions (rows and columns) of X matrix: ");
            scanf("%d %d", &r1, &c1);
            printf("Enter the dimensions (rows and columns) of Y matrix: ");
            scanf("%d %d", &r2, &c2);


    if(c1 == r2)
    {
            //Input X matrix
           printf("\nEnter elements for X matrix.\n");
           for(i=0; i<r1; i++)
           {
               for(j=0; j<c1; j++)
               {
                    printf("X(%d, %d)= ", i, j);
                    scanf("%d",&X[i][j]);
               }
                printf("\n");
           }
        //Input Y matrix
           printf("\nEnter elements for X matrix.\n");
           for(i=0; i<r2; i++)
           {
               for(j=0; j<c2; j++)
               {
                    printf("X(%d, %d)= ", i, j);
                    scanf("%d",&Y[i][j]);
               }
                printf("\n");
           }
        //Output X matrix
           printf("X matrix: ");
           printf("\n");
           for(i=0; i<r1; i++)
           {
               printf("\t");
               for(j=0; j<c1; j++)
               {
                    printf("%d ", X[i][j]);
               }
                printf("\n");
           }
        //Output Y matrix
           printf("Y matrix: ");
           printf("\n");
           for(i=0; i<r2; i++)
           {
               printf("\t");
               for(j=0; j<c2; j++)
               {
                    printf("%d ", Y[i][j]);
               }
                printf("\n");
           }
        //Multiplying X & Y matrix
           for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c2; j++)
                {
                    for(k = 0; k < c1; k++)
                    {
                        sum += X[i][k]*Y[k][j];
                    }

                    R[i][j] = sum;
                    sum = 0;
                }

            }
            //Output of R(result) matrix
            printf("\nThe Result is: ");
            printf("\n");
             for(i = 0; i < r1; i++)
             {
                 printf("\t");
                for(j = 0; j < c2; j++)
                {
                    printf("%d ",R[i][j]);
                }
                printf("\n");

             }
             printf("\n\n");
             goto matrix;
    }
    else
    {
        printf("The dimensions of X and Y are not matched, Multiplication is not possible\n\n");
        goto matrix;
    }
    }//

    //Multiplication by corresponding elements
    if( op3 == 4)
        {
            printf("--Multiplication by corresponding elements--\n\n");

            int i,j,r1,c1,r2,c2,k;
            int X[100][100],Y[100][100],R[100][100], sum=0;
            printf("Enter the dimensions (rows and columns) of X matrix: ");
            scanf("%d %d", &r1, &c1);
            printf("Enter the dimensions (rows and columns) of Y matrix: ");
            scanf("%d %d", &r2, &c2);


    if(r1 == r2 && c1 == c2)
    {
            //Input X matrix
           printf("\nEnter elements for X matrix.\n");
           for(i=0; i<r1; i++)
           {
               for(j=0; j<c1; j++)
               {
                    printf("X(%d, %d)= ", i, j);
                    scanf("%d",&X[i][j]);
               }
                printf("\n");
           }
        //Input Y matrix
           printf("\nEnter elements for X matrix.\n");
           for(i=0; i<r2; i++)
           {
               for(j=0; j<c2; j++)
               {
                    printf("X(%d, %d)= ", i, j);
                    scanf("%d",&Y[i][j]);
               }
                printf("\n");
           }
        //Output X matrix
           printf("X matrix: ");
           printf("\n");
           for(i=0; i<r1; i++)
           {
               printf("\t");
               for(j=0; j<c1; j++)
               {
                    printf("%d ", X[i][j]);
               }
                printf("\n");
           }
        //Output Y matrix
           printf("Y matrix: ");
           printf("\n");
           for(i=0; i<r2; i++)
           {
               printf("\t");
               for(j=0; j<c2; j++)
               {
                    printf("%d ", Y[i][j]);
               }
                printf("\n");
           }
        //Multiplying X & Y matrix
           for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c1; j++)
                {
                    R[i][j] = X[i][j]*Y[i][j];
                }

            }
            //Output of R(result) matrix
            printf("\nThe Result is: ");
            printf("\n");
             for(i = 0; i < r1; i++)
             {
                 printf("\t");
                for(j = 0; j < c1; j++)
                {
                    printf("%d ",R[i][j]);
                }
                printf("\n");
             }
             printf("\n\n");
             goto matrix;
    }
    else
    {
        printf("The dimensions of X and Y are not matched, Multiplication is not possible\n\n");
        goto matrix;
    }
    }

    //Transpose Matrix
    if( op3 == 5)
        {
            printf("--Transpose Matrix--\n\n");

            int i,j,r1,c1;
            int X[100][100],T[100][100];
            printf("Enter the dimensions (rows and columns) of X matrix: ");
            scanf("%d %d", &r1, &c1);

        //Input X matrix
           printf("\nEnter elements for X matrix.\n");
           for(i=0; i<r1; i++)
           {
               for(j=0; j<c1; j++)
               {
                    printf("X(%d, %d)= ", i, j);
                    scanf("%d",&X[i][j]);
               }
                printf("\n");
           }
        //Output X matrix
           printf("X matrix: ");
           printf("\n");
           for(i=0; i<r1; i++)
           {
               printf("\t");
               for(j=0; j<c1; j++)
               {
                    printf("%d ", X[i][j]);
               }
                printf("\n");
           }
        //Transpose of X matrix
           for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c1; j++)
                {
                    T[j][i] = X[i][j];
                }

            }
        //Output of R(result) matrix
            printf("\nThe Result is: ");
            printf("\n");
             for(i = 0; i < c1; i++)
             {
                 printf("\t");
                for(j = 0; j < r1; j++)
                {
                    printf("%d ",T[i][j]);
                }
                printf("\n");
             }
             printf("\n");

             goto matrix;

    }//

    if(op3 == 6 )
        goto menu;
    }
//Operations on Series Summation
    else if( op == 4)
    {
        series:
            printf("--Operations on Series Summation--\n\n");
            printf("1. SinX Series.\n");
            printf("2. CosX Series.\n");
            printf("3. Exponetial Series.\n");
            printf("4. Return to the Front Page.\n");

            int op4;
            scanf("%d", &op4);

            //SinX Series
            if( op4 == 1)
            {
                int  n, sign = 1;
                double x,fact=1;;
                printf("Enter the value of x: ");
                scanf("%lf", &x);
                float term = 0;
                printf("Enter the N: ");
                scanf("%d", &n);
                for(int i=1;i<=n;i++)
                {
                    fact *=i;
                    if(i%2!=0)
                    {
                    term += sign * pow(x, i)/fact;
                    sign *= -1;
                    }
                }
                printf("The Result is: %f", term);
                printf("\n------------------------");
                printf("\n\n");
                goto series;
            }

            //CosX Series
            if( op4 == 2)
            {
                int  n, sign = -1;
                double x, fact = 1;
                printf("Enter the value of x: ");
                scanf("%lf", &x);
                float term = 1;
                printf("Enter the N: ");
                scanf("%d", &n);
                for(int i=2;i<=n;i++)
                {
                    fact *= i;
                    if(i%2==0)
                    {
                    term += sign * pow(x, i)/fact;
                    sign *= -1;
                    }
                }
                printf("The Result is: %f", term);
                printf("\n------------------------");
                printf("\n\n");
                goto series;
            }

            //Exponential
            if( op4 == 3)
            {
                int i, n;
                double x, sum=1, t=1;
                double accuracy;
                range:
                printf("Enter the value for x in the range of 0 < x < 1 : ");
                scanf("%lf", &x);
                if(x<0 || x>1)
                {
                    printf("Out of range!!\n");
                    goto range;
                }
                printf("Enter accuracy: ");
                scanf("%lf", &accuracy);

                /* Loop to calculate the value of Exponential */
                for(i=1;i<=100;i++)
                {
                    t=t*x/i;
                    sum=sum+t;
                    if(t <= accuracy)
                    {
                        goto output;
                    }

                }
                output:
                printf("\nThe Exponential Value of %0.4lf with %0.4lf is: %.4lf", x, accuracy, sum);
                printf("\n------------------------------------------------------");
                printf("\n\n");
                goto series;
            }
            if(op4 == 4 )
            {
                goto menu;
            }

    }
//Quit
    else if(op == 5)
        return 0;
    }



