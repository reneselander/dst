

#include <iostream>

#include <iomanip>

// function menu
void showMenu() {

    std::cout << "* * * * * CALCULATE * * * * *" << std::endl;

    std::cout << "" << std::endl;

    std::cout << "     1 >> Speed <<" << std::endl;

    std::cout << "" << std::endl;

    std::cout << "     2 >> Distance <<" << std::endl;

    std::cout << "" << std::endl;

    std::cout << "     3 >> Time <<" << std::endl;

    std::cout << "" << std::endl;

    std::cout << "     4 >> E X I T <<" << std::endl;

    std::cout << "" << std::endl;
}

int main() {

    int option;

    do

    {

        showMenu();

        std::cout << "Choose: ";

        std::cin >> option;

        // clear the screen
        system("cls");
        std::system("cls");

        switch (option)

        {

            // calculate the speed

        case 1: std::cout << "Distance: ";

            double distanceCaseSpeed;

            while (!(std::cin >> distanceCaseSpeed))

            {

                // Explain error
                std::cout << "ERROR! Only numbers accepted.\nEnter distance (in nautical miles): ";

                // Clear input stream                
                std::cin.clear();

                // Discard previous input
                std::cin.ignore(123, '\n');

            }


            /*cin >> distanceCaseSpeed;*/
            std::cin >> distanceCaseSpeed;

            std::cout << "Time (in minutes): ";

            double timeCaseSpeed;

            while (!(std::cin >> timeCaseSpeed))

            {

                // Explain error
                std::cout << "ERROR! Only numbers accepted.\nEnter time (in minutes): ";

                // Clear input stream                
                std::cin.clear();

                // Discard previous input
                std::cin.ignore(123, '\n');

            }

            /*cin >> timeCaseSpeed;*/

            std::cout << std::setprecision(3) << 60 * distanceCaseSpeed / timeCaseSpeed << " knots" << std::endl;

            std::cin >> timeCaseSpeed;


            std::cout << std::setprecision(3) << 60 * distanceCaseSpeed / timeCaseSpeed << " knots" << std::endl;

            std::cout << std::setprecision(3) << 60 * distanceCaseSpeed / timeCaseSpeed << " knop" << std::endl;


            std::cout << "" << std::endl;

            break;


            // calculate the distance

        case 2: std::cout << "Speed: ";

            double speedCaseDistance;

            std::cin >> speedCaseDistance;

            std::cout << "Time (in minutes): ";

            double timeCaseDistance;

            std::cin >> timeCaseDistance;


            std::cout << std::fixed << std::setprecision(2) << speedCaseDistance * timeCaseDistance / 60 << " nautical miles" << std::endl;

            std::cout << std::setprecision(3) << speedCaseDistance * timeCaseDistance / 60 << " nautical miles" << std::endl;


            std::cout << "" << std::endl;

            break;


            // calculate the time in minutes

        case 3: std::cout << "Distance (M): ";

            double distanceCaseTime;

            std::cin >> distanceCaseTime;

            std::cout << "Speed (Knots): ";

            double speedCaseTime;

            std::cin >> speedCaseTime;

            double ResultDistanceSpeed = 60 * distanceCaseTime / speedCaseTime;

            double MinToHour = ResultDistanceSpeed / 60;


            std::cout << std::setprecision(4) << 60 * distanceCaseTime / speedCaseTime << " minutes (" << MinToHour << " hours)" << std::endl;
            std::cout << 60 * distanceCaseTime / speedCaseTime << " minutes (" << MinToHour << " hours)" << std::endl;


            std::cout << "" << std::endl;

            break;

        }

    } while (option != 4);


    //system("pause>0");

    return 0;


    system("pause>0");

}