class MyHashMap {
public:
  int map[1000001];
    MyHashMap() {
        
      for(int i = 0; i < 1000001; i++){
       map[i] = -1;
      }
    }
    
    void put(int key, int value) {
        map[key] = value;
    }
    
    int get(int key) {
        return map[key];
    }
    
    void remove(int key) {
        map[key] = -1;
    }
};

