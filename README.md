# FILE-MANAGEMENT-TOOL-CODTECH_IT
*COMPANY *: CODTECH IT SOLUTIONS

*NAME*: DHATSHINI A

*INTERN ID*: CTIS2275

*DOMAIN*: C++ PROGRAMMING

*DURATION*: 4 WEEEKS

*MENTOR*: NEELA SANTHOSH

# DESCRIPTION 
The File Management Tool is a menu-driven C++ console application developed to demonstrate fundamental file handling operations using standard input and output streams. This project focuses on managing text-based data by allowing users to write, append, and read content from a file in an efficient and user-friendly manner. It serves as a practical implementation of core C++ concepts related to file operations and persistent data storage.

The program utilizes the <fstream> header, which provides built-in classes such as ofstream and ifstream for handling file input and output. All data is stored in a text file named data.txt, ensuring that user input remains available even after the program has terminated. This persistence makes the tool useful for applications that require saving and retrieving information across multiple program executions.

The application is designed using a modular approach, with separate functions dedicated to each file operation. The writeFile() function allows users to enter text and store it in the file. When this function is executed, the file is opened in write mode, meaning any existing content is overwritten. This is useful when users need to replace old data with new information. The program captures full-line input using getline(), ensuring that spaces and complete sentences are handled correctly. After writing the content, the file is properly closed to maintain data integrity.

The appendFile() function provides the ability to add new data to the existing file without deleting previously stored content. By opening the file in append mode (ios::app), the program ensures that additional entries are placed at the end of the file. This feature is particularly useful for maintaining logs, records, or continuous notes where historical data must be preserved.

The readFile() function is responsible for displaying the contents of the file. It reads the file line by line using an input file stream and outputs each line to the console. This allows users to easily review all stored information in a clear and readable format. Proper file closure is maintained after the reading operation to ensure efficient resource usage.

The main() function controls the overall execution of the program. It presents a menu-driven interface that allows users to select from different file operations. A do-while loop ensures that the menu is displayed repeatedly until the user chooses to exit. The program uses a switch statement to process user input and call the corresponding function. Basic input validation is included to handle invalid menu selections gracefully.

Overall, the File Management Tool effectively demonstrates essential programming concepts such as file handling, functions, loops, conditional statements, and user interaction. It provides a strong foundation for understanding how C++ programs can interact with external files and manage data efficiently.


# OUTPUT

<img width="510" height="638" alt="Image" src="https://github.com/user-attachments/assets/2378ad63-4b51-4904-9df5-4eae47b99644" />

