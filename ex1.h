class time
{
private:
	int hour,minute,secound;
public:
	void sethour(int);
	void setminute(int);
	void setsecound(int);
	int gethour();
	int getminute();
	int getsecound();
	void fixtime();
};

void spacprintTime(time);
void printtime(time);