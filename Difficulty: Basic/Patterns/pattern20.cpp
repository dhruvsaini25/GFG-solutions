void symmetry(int n) {
    int s=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if (i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"* ";
        }
        for (int j=1;j<=s;j++){
            cout<<"  ";
        }
        for(int j=1;j<=stars;j++){
            cout<<"* ";
        }
        if (i<n) s-= 2;
        else s+=2;
        cout<<endl;
    }
}