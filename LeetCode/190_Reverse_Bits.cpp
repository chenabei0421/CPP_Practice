class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t last_bit = 0;
        uint32_t result = 0;
        
        for (int i=0; i<sizeof(n)*8; ++i)
        {
            result = result << 1;
            last_bit = n & 1;
            n = n >> 1;
            result = result | last_bit;
            //cout << i << last_bit << endl;
        }
        return result;
    }
};