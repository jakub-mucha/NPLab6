int dodajWektory(int x, int y)
{
	return x+y;
}

int dlugoscW2kwadrat(int x1, int x2, int y1, int y2)
{
	return (x1*x2 + y1*y2);
}

void wypiszDlugosc(int x1, int x2, int y1, int y2){
	printf("%d", dlugoscW2kwadrat(x1,x2,y1,y2));
}

void dodajWektory2Wymiarowe(int x1, int x2, int y1, int y2){
	printf("[%d,%d]", x1+x2, y1+y2);
}

void wypiszWektor1(int x, int y){
	printf("[%d]", dodajWektory(x,y));
}