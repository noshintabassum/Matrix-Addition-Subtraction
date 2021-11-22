#include<iostream>
#include<conio.h>
using namespace std;

int main(){


int r, c;


cout<<"enter the row and col size : "<<endl;

cin>>r>>c;


int x[r][c],y[r][c],sum[r][c],sub[r][c];



//input for x matrix -----------------



cout<<"enter  the elements for x matrix : "<<endl<<endl;


for(int row=0; row<r; row++){


    for(int col=0; col<c; col++){


        cout<<"x["<<row<<"]"<<"["<<col<<"] : ";

        cin>>x[row][col];
    }
}

cout<<endl<<endl;



//input for y matrix -----------------

cout<<"enter the elements for y matrix : "<<endl<<endl;


for(int row=0; row<r; row++){


    for(int col=0; col<c; col++){


        cout<<"y["<<row<<"]"<<"["<<col<<"] : ";

        cin>>y[row][col];


    }

}






//output for x matrix -------------------





cout<<"x matrix output : "<<endl<<endl;


for(int row=0; row<r; row++){


    for(int col=0; col<c; col++){


       cout<<x[row][col]<<" ";


    }


    cout<<endl;

}




//output for y matrix -------------------





cout<<"y matrix output : "<<endl<<endl;


for(int row=0; row<r; row++){


    for(int col=0; col<c; col++){


       cout<<y[row][col]<<" ";


    }


    cout<<endl;

}





//x+y matrix-----------------




cout<<"sum matrix output : "<<endl<<endl;


for(int row=0; row<r; row++){


    for(int col=0; col<c; col++){



       sum[row][col] = x[row][col]+y[row][col];

       cout<<sum[row][col]<<" ";


    }


    cout<<endl;

}







//x-y matrix-----------------




cout<<"sub matrix output : "<<endl<<endl;


for(int row=0; row<r; row++){


    for(int col=0; col<c; col++){



       sub[row][col] = x[row][col]-y[row][col];

       cout<<sub[row][col]<<" ";


    }


    cout<<endl;

}












getch();

}
