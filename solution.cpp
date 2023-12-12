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
    int i, j;
    
    //Verificam randul in stanga
    for(i=0; i<coloana; i++)
    {
        if(Sah[rand][i])
        {
            return 0;
        }
    }

    //Verificam coloana de sus
    for(i=rand-1; i>=0; i--)
    {
        if(Sah[i][coloana])
        {
            return 0;
        }
    }

    //Verificam coloana de jos
    for(i=rand+1; i<n; i++)
    {
        if(Sah[i][coloana])
        {
            return 0;
        }
    }

    //Verificam diagonala de sus in stanga
    for(i=rand-1, j=coloana-1; i>=0 && j>=0; i--, j--)
    {
        if(Sah[i][j])
        {
            return 0;
        }
    }

    //Verificam diagonala de jos in stanga
    for(i=rand+1, j=coloana-1; i<n && j>=0; i++, j--)
    {
        if(Sah[i][j])
        {
            return 0;
        }
    }

    //Verificam diagonala de sus in dreapta
    for(i=rand-1, j=coloana+1; i>=0 && j<n; i--, j++)
    {
        if(Sah[i][j])
         return 0;
    }

    //Verificam diagonala de jos in dreapta
    for(i=rand+1, j=coloana+1; i<n && j<n; i++, j++)
    {
        if(Sah[i][j])
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
}

//Functia principala
int main()
{
    int n, Sah[100][100];
    cout<<"Introduceti numarul turnurilor pe care doriti sa le introduceti: ";
    cin>>n;
    return 0;
}