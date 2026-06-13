A:libmain.o addbook.o updatebook.o removebook.o searchbook.o viewbook.o issuebook.o returnbook.o listbooks.o savebooks.o
	cc libmain.c addbook.c updatebook.c removebook.c searchbook.c viewbook.c issuebook.c returnbook.c listbooks.c savebooks.c -o A
libmain.o:libmain.c
	cc -c libmain.c
addbook.o:addbook.c
	cc -c addbook.c
updatebook.o:updatebook.c
	cc -c updatebook.c
removebook.o:removebook.c
	cc -c removebook.c
searchbook.o:searchbook.c
	cc -c searchbook.c
viewbook.o:viewbook.c
	cc -c viewbook.c
issuebook.o:issuebook.c
	cc -c issuebook.c
returnbook.o:returnbook.c
	cc -c returnbook.c
listbooks.o:listbooks.c
	cc -c listbooks.c
savebooks.o:savebooks.c
	cc -c savebooks.c

