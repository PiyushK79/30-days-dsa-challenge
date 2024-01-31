// Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  places after the decimal.

void plusMinus(vector<int> arr) {
    float countzero=0,countpos = 0,countneg=0;
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            countzero++;
        }
        else if(arr[i]>0){
            countpos++;
        }
        else if(arr[i]<0){
            countneg++;
        }
    }
    
    int n=arr.size();
    double ratiopos = countpos/n;
    double rationeg = countneg/n;
    double ratiozero = countzero/n;
    
    cout<<ratiopos<<endl;
    cout<<rationeg<<endl;
    cout<<ratiozero<<endl;
}
