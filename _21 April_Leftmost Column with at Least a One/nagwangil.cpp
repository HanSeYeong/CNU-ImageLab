class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> temp ;
        int width =binaryMatrix.dimensions()[1]-1;
        int height = binaryMatrix.dimensions()[0];
        int mid = width/2;
      
        
        while( temp.size() == 0)
        {
        
            for(int i = 0 ; i< height ; i++)
            {
              
                int element = binaryMatrix.get(i,mid);
                if(element)
                {
                    temp.push_back(i);
                }

            }
            
            if(temp.size() == 0)
            {
                if(mid==width)
                    return -1;
                mid+= (width-mid)/2;
                if((width-mid)==1)
                    mid++;
            }
            
            
        }
        

        
        for(int i = 0; i < temp.size(); i++)
        {
            bool most_Left =false;
         
            while(true)
            {
                if(binaryMatrix.get(temp[i], mid))
                {
                    most_Left=true;
                    if(mid == 0)
                        return mid;
                    mid--;
                }
                else
                {
                    if(most_Left)
                        mid++;
                  
                    break;
                }
            }
        }
        
      
        
        return mid;
        
    }
};
