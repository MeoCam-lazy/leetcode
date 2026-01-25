class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> res = new ArrayList<>();
        //Declare a two-dimension List, which is array in c++
        res.add(List.of(1));
        //[[1]]
        for(int i = 0; i < numRows - 1; i++){
            List<Integer> dummyRow = new ArrayList<>();
            dummyRow.add(0);
            dummyRow.addAll(res.get(res.size()-1));
            dummyRow.add(0);
            List<Integer> row = new ArrayList<>();
            for(int j = 0; j < dummyRow.size()-1; j++){
                row.add(dummyRow.get(j) + dummyRow.get(j+1));
            }
            res.add(row);
/*
Create a new fake list from before index list,
and then add 0 .... 0 at begin & end. 
For example the last list is [1,2,1] -> after insert [0,1,2,1,0]. 
From this fake list, we create a new real row, each index[i] list is 
equal to fake list[i] + fl[i+1]. [0+1,1+2,2+1,1+0]
= [1,3,3,1] that's it
*/
        }
        return res;
    }
}