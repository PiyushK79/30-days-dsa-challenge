// This is a staircase of size : 4

//    #
//   ##
//  ###
// ####
// Its base and height are both equal to . It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

// Write a program that prints a staircase of size .


void staircase(int n) {
    
    for(int i=n;i>0;i--){
        for(int j=1;j<=n;j++){
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<"#";
            }
        }
        cout<<endl;
    }
    
}

