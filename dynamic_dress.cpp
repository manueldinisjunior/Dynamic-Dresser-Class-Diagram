// dynamic_dresser.h

#ifndef DYNAMIC_DRESSER_H
#define DYNAMIC_DRESSER_H

#include <string>
#include <vector>

class Outfit {
private:
    std::string name;
    std::vector<ClothingItem> clothingItems;

public:
    // Constructor
    Outfit(std::string name);

    // Methods
    void addClothingItem(const ClothingItem& item);
    void removeClothingItem(const ClothingItem& item);
    // Additional methods as needed
};

class DynamicDresser {
private:
    std::vector<std::string> outfitCategories;

public:
    // Constructor
    DynamicDresser();

    // Methods
    void addOutfitCategory(const std::string& category);
    void removeOutfitCategory(const std::string& category);
    void selectOutfit(const std::string& category, const Outfit& outfit);
    void autonomouslyChooseOutfit();
    // Additional methods as needed
};

class ClothingItem {
private:
    std::string type;
    std::string style;
    std::string color;

public:
    // Constructor
    ClothingItem(std::string type, std::string style, std::string color);

    // Getter methods
    std::string getType() const;
    std::string getStyle() const;
    std::string getColor() const;
    // Additional methods as needed
};

class Sim {
private:
    Outfit currentOutfit;
    Mood mood;

public:
    // Constructor
    Sim();

    // Methods
    void changeOutfit(const Outfit& outfit);
    void updateMood();
    // Additional methods as needed
};

class Mood {
private:
    std::string moodName;
    std::string description;

public:
    // Constructor
    Mood(std::string moodName, std::string description);

    // Getter methods
    std::string getMoodName() const;
    std::string getDescription() const;
    // Additional methods as needed
};

#endif // DYNAMIC_DRESSER_H
