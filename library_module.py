class Library():
	"""docstring for ClassName"""
	def __init__(self,books):
		self.books = books
	def Displaybooks(self):
		print()
		print("Avaliable books")
		for i in self.books:
			print(i)
	def lend(self,bookname):
		self.bookname=bookname
		self.books.remove(self.bookname)
	def add(self,bookname):
		self.bookname=bookname
		self.books.append(self.bookname)
class Customer():
	"""docstring for Customer"""
	def borrow(self):
		print("enter book name:\n")
		self.book=input()
		return self.book
	def returntolibrary(self):
		print("enter book name:\n")
		self.book=input()
		return self.book

books=['sumanth','santosh','sastry']
library=Library(books)
customer=Customer()
while True:
	print("press 1 to Display available books")
	print("press 2 to request book")
	print("press 3 to return book")
	print("press 4 to exit")
	ch=int(input())
	if ch is 1:
		library.Displaybooks()
	elif ch is 2:
		book=customer.borrow()
		library.lend(book)
	elif ch is 3:
		book=customer.returntolibrary()
		library.add(book)
	elif ch is 4:
		quit()


		
		
