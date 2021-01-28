class ParkingSystem {
public:
    
    public: vector<int> v;
    ParkingSystem(int big, int medium, int small) {
        v = {big, medium, small};
    }
    bool addCar(int carType) {
        
        if(carType == 1 && v[0] == 0 || carType == 2 && v[1] == 0 || carType == 3 && v[2] == 0)
            return false; 
        else if(carType==1)
            v[0]--;
        else if(carType==2)
            v[1]--;
        else if(carType==3)
            v[2]--;
        return true;
    }
    
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
