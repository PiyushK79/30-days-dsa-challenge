//An English text needs to be encrypted using the following encryption scheme.
// First, the spaces are removed from the text. Let  be the length of this text.
// Then, characters are written into a grid, whose rows and columns have the following constraints:

// Example


// After removing spaces, the string is  characters long.  is between  and , so it is written in the form of a grid with 7 rows and 8 columns.

// ifmanwas  
// meanttos          
// tayonthe  
// groundgo  
// dwouldha  
// vegivenu  
// sroots
// Ensure that 
// If multiple grids satisfy the above conditions, choose the one with the minimum area, i.e. .




string encryption(string s) {
    if (0 == s.size())
        return "";

    auto it = find(s.begin(), s.end(), ' ');

    while (it != s.end())
    {
        s.erase(it);
        it = std::find(s.begin(), s.end(), ' ');
    }

    auto ceil{std::ceil(std::sqrt(s.size()))};
    auto floor{std::floor(std::sqrt(s.size()))};

    if (ceil * floor < s.size())
    {
        floor++;
    }

    string output{};

    for (auto i{0}; i < ceil; i++)
    {
        for (auto j{0}; j < floor; j++)
        {
            auto index{i + j * ceil};
            if (index >= s.size())
            {
                break;
            }
            output += string(1, s[index]);
        }

        output += string(1, ' ');
    }

    output.resize(output.size() - 1);

    return output;

}
