#pragma once
#include "CropInfo.h"

class CropDB {
    public:
        CropDB();
        ~CropDB();
        void reload();
        void printToFile();
        void insert();
        void add();
        void remove();
        void search();
        void print();
        void dbMenu();
    private:
        void shrink();
        void expand();
        int getValidIndex();
        void readFile(const char fileName[]);
        void print(bool searchRange, double min, double max);

        
        CropInfo *crops;
        int numCrops;
};
