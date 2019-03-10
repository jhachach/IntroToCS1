/* Lab23
* 1.
 	a. false
 	b. true
	c. false
	d. true
	e. false
	f. true
	g. false
	h. false
	i. true
	j. false
	k. true
	l. true
	m. false
	n. true

* 2.
	1. 78 78
	2. 4 4 5 7 10 14 19 25 32 40 
	3. Array p: 5 7 11 17 25
	   Array q: 25 17 11 7 5
	   
* 4. partsType inventory[100]
	
* 5.void input(partsType * inv[], string name, int num, double price, int numStock, int i)
	  {
			strcpy(inv[i].partName, name);
			inv[i].partNUm =num;
			inv[i].price = price;
			inv[i].quantitiesInStock = numStock;
	  }
	  
	  for(int i =0; i < 100; i++)
	  {
	  	cout << "Enter the name of the part: ";
	  	cin >> partName;
	  	cot << "How many do you have? ";
	  	cin >> numPart;
	  	cout << "What is the Price? "
	  	cin >> price;
	  	cout << "how much is in stock? "
	  	cin >> numSock;
	  	
	  	input(inventory, partName, numPart, price, numStock, i);
