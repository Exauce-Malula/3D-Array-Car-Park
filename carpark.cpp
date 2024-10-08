#include <iostream>
#include <string>

std::string ThirdDArray[5][5][3]; //Global variable 3D array.

void carParkInitalisation() { // This function makes a 5x5x3 array. This is called to create a new car park/empty out the car park.
 for (int i = 0; i < 5; i++){ // X - Axis
        for(int j = 0; j < 5; j++){ // Y - Axis
            for (int k = 0; k < 3; k++){ // Z - Axis
                ThirdDArray[i][j][k] = "EMPTY"; // Not great way of doing this, time complexity O(n^3)
            }
        }
    }
}

void parkingCarSelection(){ // This function allows the user to select an area to park their cars.
    int floor;
    int x;
    int y;
    bool parkingCarSelectionLoop = true; // Allows the while loop to run.
    std::string licensePlate;
    std::cout << "\nPlease select which floor you want to park in (ground floor = 0, first floor = 1, second floor = 2): ";
    std::cin >> floor;
    switch (floor){ //Switch case which allows the user to pick between the ground floor, first floor and second floor.
        case 0:
            std::cout << "\nYou have selected the ground floor. On the grid, please select where you want to park: \n";
            for (int i = 0; i < 5; i++){
                for(int j = 0; j < 5; j++){
                    std::cout << "| " << ThirdDArray[i][j][floor] << " |    "; 
                }
                std::cout << "\n";
            }
            while (parkingCarSelectionLoop == true){
                std::cout << "Please input the row and columun you want to park in (order x, y)\n";
                std::cin >> x;
                std::cin >> y;
                if(x > 5 || x < 0){
                    std::cout << "\nINVALID ROW!\n";
                }
                if(y > 5 || y < 0){
                    std::cout << "\nINVALID COLUMUN!\n";
                }
                std::cin.clear();
                if(ThirdDArray[x][y][floor] == "EMPTY"){
                    std::cout << "\nPlease enter the license plate of your car: ";
                    std::cin.ignore();
                    std::getline(std::cin, licensePlate);
                    if(licensePlate == "EMPTY"){
                        std::cout << "\nThe license plate \"EMPTY\" is invalid.\n";
                        std::cin.clear();
                    }
                    else if(licensePlate.size() > 9){
                        std::cout << "\nLicense Plate size too large.\n";
                        std::cin.clear();
                    }
                    else{
                        ThirdDArray[x][y][floor] = licensePlate;
                        std::cout << "Your car \"" << licensePlate << "\" has successfully been parked on the ground floor, at " << x << ", " << y << ". Thank you for parking here.\n";
                        parkingCarSelectionLoop = false;
                    }
                }
                else{
                    std::cout << "\nYou cannot park here.\n";
                    std::cin.clear();
                }
            }
            break;

        case 1:
            std::cout << "\nYou have selected the first floor. On the grid, please select where you want to park: \n";
            for (int i = 0; i < 5; i++){
                for(int j = 0; j < 5; j++){
                    std::cout << "| " << ThirdDArray[i][j][floor] << " |    "; 
                }
                std::cout << "\n";
            }
            while (parkingCarSelectionLoop == true){
                std::cout << "Please input the row and columun you want to park in (order x, y)\n";
                std::cin >> x;
                std::cin >> y;
                if(x > 5 || x < 0){
                    std::cout << "\nINVALID ROW!\n";
                }
                if(y > 5 || y < 0){
                    std::cout << "\nINVALID COLUMUN!\n";
                }
                std::cin.clear();
                if(ThirdDArray[x][y][floor] == "EMPTY"){
                    std::cout << "\nPlease enter the license plate of your car: ";
                    std::cin.ignore();
                    std::getline(std::cin, licensePlate);
                    if(licensePlate == "EMPTY"){
                        std::cout << "\nThe license plate \"EMPTY\" is invalid.\n";
                        std::cin.clear();
                    }
                    else if(licensePlate.size() > 9){
                        std::cout << "\nLicense Plate size too large.\n";
                        std::cin.clear();
                    }
                    else{
                        ThirdDArray[x][y][floor] = licensePlate;
                        std::cout << "Your car \"" << licensePlate << "\" has successfully been parked on the first floor, at " << x << ", " << y << ". Thank you for parking here.\n";
                        parkingCarSelectionLoop = false;
                    }
                }
                else{
                    std::cout << "\nYou cannot park here.\n";
                    std::cin.clear();
                }
            }
            break;

        case 2:
            std::cout << "\nYou have selected the second floor. On the grid, please select where you want to park: \n";
            for (int i = 0; i < 5; i++){
                for(int j = 0; j < 5; j++){
                    std::cout << "| " << ThirdDArray[i][j][floor] << " |    "; 
                }
                std::cout << "\n";
            }
            while (parkingCarSelectionLoop == true){
                std::cout << "Please input the row and columun you want to park in (order x, y)\n";
                std::cin >> x;
                std::cin >> y;
                if(x > 5 || x < 0){
                    std::cout << "\nINVALID ROW!\n";
                }
                if(y > 5 || y < 0){
                    std::cout << "\nINVALID COLUMUN!\n";
                }
                std::cin.clear();
                if(ThirdDArray[x][y][floor] == "EMPTY"){
                    std::cout << "\nPlease enter the license plate of your car: ";
                    std::cin.ignore();
                    std::getline(std::cin, licensePlate);
                    if(licensePlate == "EMPTY"){
                        std::cout << "\nThe license plate \"EMPTY\" is invalid.\n";
                        std::cin.clear();
                    }
                    else if(licensePlate.size() > 9){
                        std::cout << "\nLicense Plate size too large.\n";
                        std::cin.clear();
                    }
                    else{
                        ThirdDArray[x][y][floor] = licensePlate;
                        std::cout << "Your car \"" << licensePlate << "\" has successfully been parked on the second floor, at " << x << ", " << y << ". Thank you for parking here.\n";
                        parkingCarSelectionLoop = false;
                    }
                }
                else{
                    std::cout << "\nYou cannot park here.\n";
                    std::cin.clear();
                }
            }
            break;
        default:
            std::cout << "\nINVALID floor. You are now returning to the main menu.\n";
            break;

    }
}

void carRemoval(){ // This function allows the user to remove their car from the car park.
    char choices;
    int x;
    int y;
    int floor;
    bool carRemovalLoop = true;
    std::string licensePlate;
    while(carRemovalLoop == true){
        std::cout << "\nDo you want to manually find your car or to automatically find it? Type M for manual, A for automatic (If you have put in the wrong input, this statement will repeat.): ";
        std::cin >> choices;
        std::cin.ignore();
        std::cin.clear();
        switch (choices){ //Really lengthy switch cases, could've done better if I used multiple functions to solve the problem of REPEATING CODE.
            case 'A': //This uses a linear search to find the license plate of the car, this is for user convenience, however, not the most effienct at O(n).
                std::cout << "\nPlease enter your license plate: ";
                std::getline (std::cin, licensePlate);
                // std::cin.ignore();
                std::cin.clear();
                if(licensePlate.size() > 8 || licensePlate.size() < 0){
                    std::cout << "\nINVALID license plate size.";
                }
                else if(licensePlate == "EMPTY"){
                    std::cout << "\nLicense plate \"EMPTY\" is INVALID.";
                }
                else{
                    for (int i = 0; i < 5; i++){
                        for (int j = 0; j < 5; j++){
                            for (int k = 0; k < 3; k++){
                                if(ThirdDArray[i][j][k] == licensePlate){
                                    ThirdDArray[i][j][k] = "EMPTY";
                                    std::cout << "\nYour car \"" << licensePlate << "\" has been removed from the car park on floor " << k << ", row " << i << ", column " << j << ".\n";
                                    carRemovalLoop = false;
                                    break;
                                }
                            }
                        }
                    }
                    if(carRemovalLoop == true){
                        std::cout << "\nIf you have recieved this message, your car has not been found. Please try again.\n";
                        carRemovalLoop = false;
                    }

                }
                break;

            case 'M': //The user manually searches for their car. Way better time complexity of O(1).
                std::cout << "\nPlease enter which floor you parked in: ";
                std::cin >> floor;
                switch (floor){
                    case 0:
                        std::cout << "\nPlease enter the row and column you parked in (order x, y): ";
                        std::cin >> x;
                        std::cin >> y;
                        if(x > 5 || x < 0){
                            std::cout << "\nINVALID ROW!\n";
                        }
                        if(y > 5 || y < 0){
                            std::cout << "\nINVALID COLUMUN!\n";
                        }
                        std::cout << "\nPlease enter the license plate of your car: ";
                        std::cin.ignore();
                        std::getline(std::cin, licensePlate);
                        if(licensePlate == "EMPTY"){
                            std::cout << "\nThe license plate \"EMPTY\" is invalid.\n";
                            std::cin.clear();
                        }
                        else if(licensePlate.size() > 9){
                            std::cout << "\nLicense Plate size too large.\n";
                            std::cin.clear();
                        }
                        else if (ThirdDArray[x][y][floor] == licensePlate){
                            ThirdDArray[x][y][floor] = "EMPTY";
                            std::cout << "\nYou have successfully unparked the car \"" << licensePlate << "\" on the ground floor, row " << x << ", column " << y << ".\n";
                            carRemovalLoop = false;
                            break;
                        }
                        else{
                            std::cout << "\nIf you have recieved this message, your car has not been found. Please try again.\n";
                            carRemovalLoop = false;
                            break;
                        }

                    case 1:
                        std::cout << "\nPlease enter the row and column you parked in (order x, y): ";
                        std::cin >> x;
                        std::cin >> y;
                        if(x > 5 || x < 0){
                            std::cout << "\nINVALID ROW!\n";
                        }
                        if(y > 5 || y < 0){
                            std::cout << "\nINVALID COLUMUN!\n";
                        }
                        std::cout << "\nPlease enter the license plate of your car: ";
                        std::cin.ignore();
                        std::getline(std::cin, licensePlate);
                        if(licensePlate == "EMPTY"){
                            std::cout << "\nThe license plate \"EMPTY\" is invalid.\n";
                            std::cin.clear();
                        }
                        else if(licensePlate.size() > 9){
                            std::cout << "\nLicense Plate size too large.\n";
                            std::cin.clear();
                        }
                        else if (ThirdDArray[x][y][floor] == licensePlate){
                            ThirdDArray[x][y][floor] = "EMPTY";
                            std::cout << "\nYou have successfully unparked the car \"" << licensePlate << "\" on the first floor, row " << x << ", column " << y << ".\n";
                            carRemovalLoop = false;
                            break;
                        }
                        else{
                            std::cout << "\nIf you have recieved this message, your car has not been found. Please try again.\n";
                            carRemovalLoop = false;
                            break;
                        }

                        case 2:
                            std::cout << "\nPlease enter the row and column you parked in (order x, y): ";
                            std::cin >> x;
                            std::cin >> y;
                            if(x > 5 || x < 0){
                                std::cout << "\nINVALID ROW!\n";
                            }
                            if(y > 5 || y < 0){
                                std::cout << "\nINVALID COLUMUN!\n";
                            }
                            std::cout << "\nPlease enter the license plate of your car: ";
                            std::cin.ignore();
                            std::getline(std::cin, licensePlate);
                            if(licensePlate == "EMPTY"){
                                std::cout << "\nThe license plate \"EMPTY\" is invalid.\n";
                                std::cin.clear();
                            }
                            else if(licensePlate.size() > 9){
                                std::cout << "\nLicense Plate size too large.\n";
                                std::cin.clear();
                            }
                            else if (ThirdDArray[x][y][floor] == licensePlate){
                                ThirdDArray[x][y][floor] = "EMPTY";
                                std::cout << "\nYou have successfully unparked the car \"" << licensePlate << "\" on the second floor, row " << x << ", column " << y << ".\n";
                                carRemovalLoop = false;
                                break;
                            }
                            else{
                                std::cout << "\nIf you have recieved this message, your car has not been found. Please try again.\n";
                                carRemovalLoop = false;
                                break;
                            }
                        
                        default:
                            std::cout << "\nYou have put in the wrong input. Try again.\n";
                            break;
                }

            default:
                std::cout << "\nWrong input, try again.\n";

        }
    }
    

}

void admin(){ //This is the admin main menu. To anyone using this code, the Password is "admin".
    std::string passwordAttempt;
    bool adminPasswordLoop = true;
    char choice;
    while (adminPasswordLoop == true){
        std::cout << "\nPlease enter the password to login as admin. If you have accidently ended up here, please type in \"EXIT\" in all capitals to exit.\n";
        //std::cin.clear();
        std::cin.ignore();
        std::getline(std::cin, passwordAttempt);
        
        if (passwordAttempt == "EXIT"){
            std::cout << "Exiting admin menu.\n";
            adminPasswordLoop = false;
            break;
        }
        else if (passwordAttempt == "admin"){
            std::cout << "\nThe only admin option is to clear the car park. Do you want to do this? Type Y for yes, type N for no. (You will make people mad if cars are parked here.)\n";
            while (true){
                std::cin >> choice;
                if (choice == 'Y'){
                    carParkInitalisation();
                    std::cout << "\nYou have cleared the car park.\n";
                    adminPasswordLoop = false;
                    break;
                }
                else if (choice == 'N'){
                    std::cout << "\nReturning to main menu.\n";
                    adminPasswordLoop = false;
                    break;
                }
                else{
                    std::cout << "\nWrong input. Try again.\n";
                }
            }
        }
    }
}

void MainMenu(){ //The main menu. Nothing more, nothing less.
    bool mainMenuLoop = true;
    char option;
    while(mainMenuLoop == true){ 
        std::cout <<"Welcome to the Car Park!\n\nPlease select an option:\n- Type P to park a car\n- Type R to remove your car\n- Type A to login as admin \n- Type E to exit.\n";
        std::cin >> option;
        switch (option){ // Uses characters to select options to park your car. Then in each case a function is called.
            case 'P':
                parkingCarSelection();
                break;
            case 'R':
                carRemoval();
                break;
            case 'A':
                admin();
                break;
            case 'E':
                mainMenuLoop = false;
                break;
            default:
                std::cout << "\nWrong option. Try again.";
                break;
        }
    }
    
}

int main() { // The actual main function, just calls functions. Would be better if I used header files to seperate every function into seperate .cpp files.
    carParkInitalisation();
    MainMenu();
    return 0;
}