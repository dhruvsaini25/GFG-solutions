void symmetry(int n) {
    int space = 0;
    
    // Top half
    for (int i = 0; i < n; i++) {
        int stars = n - i;
        
        // Left stars
        for (int j = 0; j < stars; j++) {
            cout << "* ";
        }
        
        // Middle spaces
        for (int j = 0; j < space; j++) {
            cout << "  ";  // <-- DOUBLE space
        }
        
        // Right stars
        for (int j = 0; j < stars; j++) {
            cout << "* ";
        }
        
        cout << endl;
        space += 2;
    }

    // Bottom half
    space -= 2; // Important! Adjust back
    for (int i = 0; i < n; i++) {
        int stars = i + 1;
        
        // Left stars
        for (int j = 0; j < stars; j++) {
            cout << "* ";
        }
        
        // Middle spaces
        for (int j = 0; j < space; j++) {
            cout << "  ";  // <-- DOUBLE space
        }
        
        // Right stars
        for (int j = 0; j < stars; j++) {
            cout << "* ";
        }
        
        cout << endl;
        space -= 2;
    }
}
