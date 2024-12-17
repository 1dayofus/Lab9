void printO(int row, int column) {
    if(row < 1 or column < 1) cout << "Invalid input";
    else {
        for(int i=0 ; i<row*column ; i++) {
            if(i % column == 0 and i != 0) cout << endl;
            cout << 'O';
        }
    }
 }