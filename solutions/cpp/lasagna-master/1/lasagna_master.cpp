#include "lasagna_master.h"
#include <vector>
#include <string>


namespace lasagna_master {

// TODO: add your solution here
    int preparationTime (const std::vector<std::string>& a, int averageTime){
        return a.size() * averageTime;
    }

    amount quantities (const std::vector<std::string>& layers){
        amount needed{0, 0.0}; //initialise struct

        for(const std::string& layer : layers) {
            if (layer == "noodles") {
                needed.noodles += 50;
            } else if (layer == "sauce"){
                needed.sauce += 0.2;
            }
        }

        return needed;
    }

    void addSecretIngredient(std::vector<std::string>& myList, const std::vector<std::string>& friendsList){
        if (!friendsList.empty() && !myList.empty()) {
            myList.back() = friendsList.back();
        }
    }

    std::vector<double> scaleRecipe(const std::vector<double>& quantities, int portions){
        std::vector<double> scaledQuantities;

        double scaleFactor = portions / 2.0;

        for (double q : quantities) {
            scaledQuantities.push_back(q * scaleFactor);
        }

        return scaledQuantities;
    }

    void addSecretIngredient(std::vector<std::string>& myList, const std::string& secretIngredient){
        if (!myList.empty()) {
            myList.back() = secretIngredient;
        }
    }
}  // namespace lasagna_master
