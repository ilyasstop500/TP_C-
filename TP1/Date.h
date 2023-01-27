
class Date{
    private :
        int _month, _year, _day ; 
        bool isDate(int day, int month, int year); 
    public :
       Date(); 
       Date(int day, int month, int year); 
       int getday();
       int getmonth(); 
       int getyear(); 
       void setDate(int month, int day, int year); 
};
