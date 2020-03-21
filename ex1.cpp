#include <iostream>

using namespace std;


int main()
{ int m,n,i,j;
cout<<"Introdu nr de linii"<<endl;
  cin>>m;
  cout<<"Introdu nr de coloane"<<endl;
  cin>>n;
int matrix[n][n];
  if (m==n)
    {cout<<"Introdu elementele maricei"<<endl;
     for(  i=1;i<=m;i++)
        for( j=1;j<=n;j++)
         cin>>matrix[i][j];

        int test=0;

     for( int i=1;i<=m;i++)
        if(matrix[i][i]!=0)
            test=1;

      if (test==0){
    for(i=1;i<=m;i++)
       for( j=1;j<=i;j++)
         if(matrix[i][j] == matrix[j][i])
            test=1;
    }

  if (test==0)
        cout<<"matricea poate fi matrice de adiacenta";
     else
        cout<<"matricea nu poate fi de adiacenta";}

    else
        cout<<"matricea nu poate fi de adiacenta";
return 0;}
