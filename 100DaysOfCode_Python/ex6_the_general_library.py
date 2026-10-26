class Library:
    def __init__(self, books):
        self.books = books
        self.nbooks = len(books)

    def nBooks(self):
        self.nbooks = len(self.books)
        return self.nbooks

    def showBooks(self):
        for i in range(self.nBooks()):
            print(f"\t{i+1}.{self.books[i]}")

    def addBook(self):
        print("\n  Which book you want in our library")
        name = input("  enter the name of book: ")
        if name not in self.books:
            self.books.append(name)
        else:
            print("  This Book is already present")


Books = ["The Great Show", "The Squirrl", "An Amazing Creature"]
General = Library(Books)

while True:
    print("\n")
    print("The General Library".center(50, "="))
    print("\n\n1.Display The Books present in Library")
    print("2.Request a Book")
    print("3.Get the Number of Availible Books")
    print("4.Exit")

    ch = int(input("\nEnter a choice (1,2,3...): "))
    if ch == 1:
        print("\n")
        General.showBooks()
    elif ch == 2:
        General.addBook()
    elif ch == 3:
        n = General.nBooks()
        print(f"\n  Number of books availible are {n}")
    elif ch == 4:
        break
    else:
        print("  Please enter a valid option\n")