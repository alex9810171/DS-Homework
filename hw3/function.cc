double getAverage(const Bag& aBag){
	int elements = aBag.getCurrentsize();
	vector<int> bagItems = aBag.toVector();
	int i = 0, total = 0;
	double average = 0;

	for(i = 0;i < elements;i ++){
		total += bagItems[i];
	}
	average = total / elements;
	return average;
}
