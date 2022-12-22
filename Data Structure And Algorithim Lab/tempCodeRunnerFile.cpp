
    cout << "enter the number index " << endl;
    cin >> index;
    cout << "enter the number value  you want to insert" << endl;
    int value;
    int temp;
    cin >> value;

    temp = num[index];
    num[index] = value;
    for (int i = 10; i > index - 1; i--)
    {

        num[i + 1] = num[i];
    }

    num[index + 1] = temp;