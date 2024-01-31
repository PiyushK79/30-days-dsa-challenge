// Two friends Anna and Brian, are deciding how to split the bill at a dinner. Each will only pay for the items they consume. Brian gets the check and calculates Anna's portion. You must determine if his calculation is correct.


void bonAppetit(vector<int> bill, int k, int b) {
    int sum=0;
    for(int i=0;i<bill.size();i++){
        sum += bill[i];
    }
    
    int actual = sum-bill[k];
    
    int breal = actual/2;
    int diff = abs(breal-b);
    
    if(diff==0){
        cout<<"Bon Appetit"<<endl;
    }
    else{
        cout<<diff<<endl;
    }
}
