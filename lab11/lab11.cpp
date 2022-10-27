// Lab11: Class in C++. 
#include <iostream>

class Music
{
	private:
		std::string title;
		std::string artist;
		std::string album;
		int year; // Release Year. 
		int duration; // Seconds. 
	public:
		// Constructor of Class. 
		Music(std::string title, std::string artist, std::string album, int year, int duration)
		{
			this->title = title;
			this->artist = artist;
			this->album = album;
			this->year = year;
			this->duration = duration;
		}

		// Getter Method. 
		std::string getTitle()
		{
			return this->title;
		}
		std::string getArtist()
		{
			return this->artist;
		}
		std::string getAlbum()
		{
			return this->album;
		}
		int getYear()
		{
			return this->year;
		}
		int getDuration()
		{
			return this->duration;
		}
};

int main()
{
	Music funx("All of us are fox.", "Jingyi", "Hongkong Romance", 2099, 14500);
	// funx.setTitle("All of us are fox.");
	std::cout << funx.getAlbum() << std::endl;
	return 0;
}