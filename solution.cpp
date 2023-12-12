#include<iostream>

using namespace std;

void Initializare(int[][100], int);
void Afisare(int[][100], int);
int Validare(int[][100], int, int, int);
int Solutie(int[][100], int, int);

//Initializam pozitiile turnurilor de pe tabla de sah cu 0.
void Initializare(int Sah[][100], int n)
{
    int i, j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            Sah[i][j]=0;
        }
    }
}

//Afisam solutiile asezate pe tabla de sah.
void Afisare(int Sah[][100], int n)
{
    int i, j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<Sah[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

//Verificam daca putem plasa turnul pe tabla de sah.
int Validare(int Sah[][100], int n, int rand, int coloana)
{
    int i;

    for(i=0; i<n; i++)
    {
        if(Sah[i][coloana] && i!=rand)
        {
            return 0;
        }

        if(Sah[rand][i] && i!=coloana)
        {
            return 0;
        }
    }
    return 1;
}

int Solutie(int Sah[][100], int n, int coloana)
{
    int i;

    if(coloana>=n)
    {
        return 1;
    }

    for(i=0; i<n; i++)
    {
        if(Validare(Sah,n,i,coloana))
        {
            Sah[i][coloana]=1;

            if(Solutie(Sah,n,coloana+1))
            {
                return 1;
            }
            Sah[i][coloana]=0;
        }
    }
    return 0;
}

//Functia principala
int main()
{
    int n, Sah[100][100];
    cout<<"Introduceti numarul turnurilor pe care doriti sa le introduceti: ";
    cin>>n;

    if(Solutie(Sah,n,0)==0)
    {
        cout<<"Nu exista nicio solutie! "<<endl;
    }
    else
    {
        cout<<"Solutia este: "<<endl;
        Afisare(Sah,n);
    }
    return 0;
}