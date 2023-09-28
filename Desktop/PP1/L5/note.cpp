1.for(int i = 0; i < last.size(); i++)
        cout << last[i] << " ";
2. cout << line[0] << " " << line[line.size() - 1] << endl;
    cout << line.front() << " " << line.back() << endl;

3.cout << *line.begin() << " " << *(line.end() - 1) << endl;
works with address
4. string line = "hello my name is kbtu";
    string target = "my";
    
    int found = line.find(target);
    if(found != -1)
        cout << "found: " << found << endl;
5.string line; // = "hello my kbtu name kbtu is kbtu";
    getline(cin, line);
6. string line = "hello my kbtu name kbtu is kbtu";
    // string line2 = line.substr(3);
    string line2 = line.substr(3, 10);
7.string line = "hello my kbtu name kbtu is kbtu";
    // line.erase(3);
    line.erase(3, 10);
8.   string line = "hello";
    line.append(" kbtu");
    line.insert(2, "hi");