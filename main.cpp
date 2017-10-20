#include <iostream>

using namespace std;

int main()

{
    int matr[4][4]= {0} , e[4]= {0} , y[4]= {0} , schet = 0 , a, b , array[100] , k , i , j , l1 , l2 , l3 , m1 , m2 , m3 , bob[4][4] , f , g;
    char operation;
    bool cond , res = false , res2 = false;

    for( i = 0; i <= 91; i++)

    {
        array[i] = 2;
    }
    for( i = 92; i <= 100; i++)

    {
        array[i] = 4;
    }

    srand( time( 0 ) ) ;

   do

    {
        l1 = 0 + rand() % 3;
        m1 = 0 + rand() % 3;
        matr[l1][m1] = 2;

        l2 = 0 + rand() % 3;
        m2 = 0 + rand() % 3;
        matr[l2][m2] = 2;

        l3 = 0 + rand() % 3;
        m3 = 0 + rand() % 3;
        matr[l3][m3] = 4;
    }
    while ( ( ( l1 == l2 ) && ( m1 == m2 ) ) || ( ( l1 == l3 ) && ( m1 == m3 ) ) || ( ( l2 == l3 ) && ( m2 == m3 ) ) ) ;

    for (i = 0 ; i < 4 ; i++)

    {
        for ( j = 0 ; j < 4 ; j++)

        {
            if ( ( ( i == l1 ) && ( j == m1 ) ) || ( ( i == l2 ) && ( j == m2 ) ) || ( ( i == l3 ) && ( j == m3 ) ) )

            {

            }
            else

            {
                matr[i][j] = 0;
            }
        }
    }

    for (i = 0 ; i < 4 ; i++)

    {
        for ( j = 0 ; j < 4 ; j++)

        {
            if (matr[i][j] == 0)
                cout  <<  "*"  <<  "    ";
            else
                cout  <<  matr[i][j]  <<  "    ";
        }
        cout  <<  endl << endl  ;
    }

    cout << endl;

    while ((res == false) && (res2 == false))
    {

        cin >> operation;

        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                bob[i][j] = matr[i][j];
            }
        }

        switch (operation)
        {
            case 'j':

                for (i = 0; i < 4; i++)
                {
                    for (j = 3; j >= 0; j--)
                    {
                        if (matr[j][i] == 0)
                        {
                            for (k = j - 1; k >= 0; k--)
                            {
                                if (matr[k][i] != 0)
                                {
                                    matr[j][i] = matr[k][i];
                                    matr[k][i] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }

                for (i = 0; i < 4; i++)
                {
                    for (j = 3; j > 0; j--)
                    {
                        if (matr[j][i] == matr[j - 1][i])
                        {
                            matr[j][i] = matr[j][i] + matr[j - 1][i];
                            matr[j - 1][i] = 0;
                            schet = schet + matr[j][i];
                        }
                    }
                }

                for (i = 0; i < 4; i++)
                {
                    for (j = 3; j >= 0; j--)
                    {
                        if (matr[j][i] == 0)
                        {
                            for (k = j - 1; k >= 0; k--)
                            {
                                if (matr[k][i] != 0)
                                {
                                    matr[j][i] = matr[k][i];
                                    matr[k][i] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }

                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        if (matr[i][j] == bob[i][j])
                        {
                            f = f + 1;
                        }
                        if (matr[i][j] == 0)
                        {
                            g = 1;
                        }
                    }
                }



                if ((g == 1) && (f != 16))
                {
                    while (cond != true)
                    {
                        srand(time(0));
                        a = e[rand() % 4];
                        b = y[rand() % 4];

                        if (matr[a][b] == 0)
                        {
                            matr[a][b] = array[rand() % 100];
                            cond = true;
                        }
                        else
                        {
                            cond = false;
                        }

                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 4; j++)
                            {
                                if (matr[i][j] == 0)
                                {
                                    e[i] = i;
                                    y[i] = j;
                                }
                            }
                        }
                    }
                }

                cond = false;
                g = 0;
                f = 0;

                break;


            case 'k':

                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        if (matr[j][i] == 0)
                        {
                            for (k = j + 1; k < 4; k++)
                            {
                                if (matr[k][i] != 0)
                                {
                                    matr[j][i] = matr[k][i];
                                    matr[k][i] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        if (matr[j][i] == matr[j + 1][i])
                        {
                            matr[j][i] = matr[j][i] + matr[j + 1][i];
                            matr[j + 1][i] = 0;
                            schet = schet + matr[j][i];
                        }
                    }
                }
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        if (matr[j][i] == 0)
                        {
                            for (k = j + 1; k < 4; k++)
                            {
                                if (matr[k][i] != 0)
                                {
                                    matr[j][i] = matr[k][i];
                                    matr[k][i] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }

                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        if (matr[i][j] == bob[i][j])
                        {
                            f = f + 1;
                        }
                        if (matr[i][j] == 0)
                        {
                            g = 1;
                        }
                    }
                }

                if ((g == 1) && (f != 16))
                {
                    while (cond != true)
                    {
                        srand(time(0));
                        a = rand() % 4;
                        b = rand() % 4;

                        if (matr[a][b] == 0)
                        {
                            matr[a][b] = array[rand() % 100];
                            cond = true;
                        }
                        else
                        {
                            cond = false;
                        }
                    }
                }

                cond = false;
                g = 0;
                f = 0;

                break;


            case 'h':

                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        if (matr[i][j] == 0)
                        {
                            for (k = j + 1; k < 4; k++)
                            {
                                if (matr[i][k] != 0)
                                {
                                    matr[i][j] = matr[i][k];
                                    matr[i][k] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }

                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        if (matr[i][j] == matr[i][j + 1])
                        {
                            matr[i][j] = matr[i][j] + matr[i][j + 1];
                            matr[i][j + 1] = 0;
                            schet = schet + matr[i][j];
                        }
                    }
                }
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        if (matr[i][j] == 0)
                        {
                            for (k = j + 1; k < 4; k++)
                            {
                                if (matr[i][k] != 0)
                                {
                                    matr[i][j] = matr[i][k];
                                    matr[i][k] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }

                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        if (matr[i][j] == bob[i][j])
                        {
                            f = f + 1;
                        }
                        if (matr[i][j] == 0)
                        {
                            g = 1;
                        }
                    }
                }

                if ((g == 1) && (f != 16))
                {
                    while (cond != true)
                    {
                        srand(time(0));
                        a = rand() % 4;
                        b = rand() % 4;

                        if (matr[a][b] == 0)
                        {
                            matr[a][b] = array[rand() % 100];
                            cond = true;
                        }
                        else
                        {
                            cond = false;
                        }
                    }
                }

                cond = false;
                g = 0;
                f = 0;

                break;

            case 'l':

                for (i = 0; i < 4; i++)
                {
                    for (j = 3; j >= 0; j--)
                    {
                        if (matr[i][j] == 0)
                        {
                            for (k = j - 1; k >= 0; k--)
                            {
                                if (matr[i][k] != 0)
                                {
                                    matr[i][j] = matr[i][k];
                                    matr[i][k] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for (i = 0; i < 4; i++)
                {
                    for (j = 3; j >= 0; j--)
                    {
                        if (matr[i][j] == matr[i][j - 1])
                        {
                            matr[i][j] = matr[i][j] + matr[i][j - 1];
                            matr[i][j - 1] = 0;
                            schet = schet + matr[i][j];
                        }
                    }
                }
                for (i = 0; i < 4; i++)
                {
                    for (j = 3; j >= 0; j--)
                    {
                        if (matr[i][j] == 0)
                        {
                            for (k = j - 1; k >= 0; k--)
                            {
                                if (matr[i][k] != 0)
                                {
                                    matr[i][j] = matr[i][k];
                                    matr[i][k] = 0;
                                    break;
                                }
                            }
                        }
                    }
                }

                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        if (matr[i][j] == bob[i][j])
                        {
                            f = f + 1;
                        }
                        if (matr[i][j] == 0)
                        {
                            g = 1;
                        }
                    }
                }

                if ((g == 1) && (f != 16))
                {
                    while (cond != true)
                    {
                        srand(time(0));
                        a = rand() % 4;
                        b = rand() % 4;

                        if (matr[a][b] == 0)
                        {
                            matr[a][b] = array[rand() % 100];
                            cond = true;
                        }
                        else
                        {
                            cond = false;
                        }
                    }
                }
                cond = false;
                g = 0;
                f = 0;

                break;

            case 'q':
                cout << "Exit" << endl;
                res = true;
                break;

        }

        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                if (matr[i][j] == 0)
                {
                    g = 1;
                }
            }
        }

        if ((f == 16) && (g == 0))
        {
            res2 = true;
            cout << "Game Over" << endl;
        }
        else
        {
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if (matr[i][j] == 0)
                    {
                        cout << "*" << "    ";
                    }
                    else
                    {
                        cout << matr[i][j] << "    ";
                    }
                }
                cout << endl << endl;
            }
            cout << "Score = " << schet << endl << endl;
        }



    }

    return 0;
}