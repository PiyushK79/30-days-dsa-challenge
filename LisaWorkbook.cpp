// Lisa just got a new math workbook. A workbook contains exercise problems, grouped into chapters. Lisa believes a problem to be special if its index (within a chapter) is the same as the page number where it's located. The format of Lisa's book is as follows:

// There are  chapters in Lisa's workbook, numbered from  to .
// The  chapter has  problems, numbered from  to .
// Each page can hold up to  problems. Only a chapter's last page of exercises may contain fewer than  problems.
// Each new chapter starts on a new page, so a page will never contain problems from more than one chapter.
// The page number indexing starts at .
// Given the details for Lisa's workbook, can you count its number of special problems?


int workbook(int n, int k, vector<int> arr) {
    int pg_no = 1;      //given in ques page num starts from 1
    int count = 0;
    for(int i = 0;i<arr.size();++i)    //loop for arr.size()
    {  
       for(int j = 1;j<=arr[i];++j)   //j for number of problems
       {
           if(pg_no==j)    //agar page number or wo problem ki value same hai matlab wo special problwm hua so count++
           {
               count++;
           }
           if(j%k==0 || j==arr[i])    //agar problems sare khatam hogaye ya uske barabr hai to next page pe ayenge bakike so pg no++.
           {
               pg_no++;
           }
       } 
    }
return count;

}
