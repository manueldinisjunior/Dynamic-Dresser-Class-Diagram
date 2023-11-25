void remove_item(int item_index) {
    int input_quantity;
    Item *item = items[item_index];
    std::cout << "\nEnter number of items to sell: ";
    std::cin >> input_quantity;

    int quantity = item->get_quantity();
    if (input_quantity <= quantity) {
        float price = item->get_price();
        float money_earned = price * input_quantity;
        item->set_quantity(quantity - input_quantity);
        
        // If the quantity becomes zero, remove the item completely
        if (item->get_quantity() == 0) {
            delete items[item_index];  // Release memory
            for (int i = item_index; i < item_count - 1; ++i) {
                items[i] = items[i + 1];  // Shift elements to close the gap
            }
            --item_count;  // Decrement the item count
        }

        std::cout << "\nItems sold";
        std::cout << "\nMoney received: " << money_earned;
        total_money += money_earned;
    } else {
        std::cout << "\nCannot sell more items than you have.";
    }
}
