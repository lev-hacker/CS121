#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

class Race{
	private:	
		const static int NUM_HORSES;
		const int TRACK_LENGTH;
		int horses[];
	public:
		Race();
		int start();
};

#endif
