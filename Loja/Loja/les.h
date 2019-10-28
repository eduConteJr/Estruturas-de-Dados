#ifndef LES_H
#define LES_H


template<int MAX>
class Les{
    private:
        int v[MAX];
        int n;
    public:

        Les():n(0){}

        bool insert(int num){
            if(n == MAX)
                return false;
            int i, j;
            for (i = 0; i < n && v[i] <= num; i++);
            for(j = n - 1; j >= i; j--){
                v[j+1] = v[j];
            }
            v[i] = num;
            n++;
            return true;
        }

        int search(int proc){
            int r;
            for(r = 0; r < n && v[r] != proc; r++);
            return r;
        }

        bool remove(int r){
            int l;
            for(l = r + 1; l < n; l++){
                v[l-1] = v[1];
            }
            if(r >= n){
                return false;
            }
            n--;
            return true;
        }
        int getMax(){
            return MAX;
        }
        int getN(){
            return n;
        }

};

#endif // LES_H
