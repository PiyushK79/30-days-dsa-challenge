// When a contiguous block of text is selected in a PDF viewer, the selection is highlighted with a blue rectangle. In this PDF viewer, each word is highlighted independently. For example:

// There is a list of  character heights aligned by index to their letters. For example, 'a' is at index 1 and 'z' is at index 25. There will also be a string. Using the letter heights given, determine the area of the rectangle highlight in mm2 assuming all letters are 1unit wide.


int designerPdfViewer(vector<int> h, string word) {
    int len = word.size();
    int maximum =0,height;
    
    
    for(int i=0;i<len;i++){
      //position nikalne ke liye, -'a' kiya to number mil jayega
        int ch = word[i]-'a';
        
        height = h[ch];
        
        maximum = max(maximum,height);
        
    }
    return  maximum*len ;
}
