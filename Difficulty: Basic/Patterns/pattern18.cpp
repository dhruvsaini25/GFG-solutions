void alphaTriangle(int n) {
    for (int i=1;i<=n;i++){
        char ch='A';
        ch+=n-1;
        for(int j=0;j<i;j++){
            cout<<ch<<" ";
            ch-=1;
        }
        cout<<endl;

    }
}