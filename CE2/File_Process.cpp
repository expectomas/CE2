#include "File_Process.h"

File_Process::File_Process(string i_filename)
{
	filename=i_filename;
}

queue<item> File_Process::readFile()
{
	ifstream data_File;

	queue<item> i_Queue;

	string tempItemNameHolder = "";
	double tempPriceHolder = 0;
	unsigned int tempSat = 0;
	unsigned int numberOfItem=0;

	try
	{
		data_File.open(filename);

		if(data_File.is_open())
		{
			data_File >> numberOfItem;

			for(int i=0; i<numberOfItem; i++)
			{
				item tempItem;

				data_File >> tempItemNameHolder >> tempPriceHolder >> tempSat;

				tempItem.name = tempItemNameHolder;
				tempItem.price = tempPriceHolder;
				tempItem.satisfaction =tempSat;

				i_Queue.push(tempItem);
			}
		}
	}
	catch(exception ex)
	{
		cout << "Error Reading File\n";
	}

	data_File.close();

	return i_Queue;
}

