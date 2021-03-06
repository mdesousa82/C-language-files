int g = 7, e = 8, grau[8], i; 
	Graph gr, c_g, r_g, g_e, g_c, g_cy, g_twoxtwo;
	
	gr = GRAPHinit(g);
	GRAPHinsertA (gr, 4, 1);
	GRAPHinsertA (gr, 3, 2);
	GRAPHinsertA (gr, 1, 0);
	GRAPHinsertA (gr, 0, 1);
	GRAPHinsertA (gr, 3, 1);
	GRAPHinsertA (gr, 1, 3);
	GRAPHinsertA (gr, 4, 5);
	GRAPHshow(gr);
	printf("\n");
	GRAPHisSink(gr);
	printf("\n\n");
	printf (" Indeg = %d\n", GRAPHindeg(gr, 0));
	printf (" Outdeg = %d\n", GRAPHoutdeg(gr, 2));
	c_g = GRAPHcopy(gr);
	printf("\n");
	GRAPHshow(c_g);
	r_g = GRAPHreverse(gr);
	if (GRAPHisolated(gr, 6) == 0) printf("\nGrafo nao isolado\n");
	else printf ("\nGrafo isolado\n");
	printf("\n");
	GRAPHshow(r_g);
	printf("\n Graph equal = %d ", GRAPHequal(gr, c_g));
	printf("\n Consistent = %d ", GRAPHcheck(gr));
	printf("\n Is tournament = %d ", isTournament(gr));
	printf("\n Is Undirected = %d \n\n", GRAPHisUndirected(gr));
	
	printf("\n\n***** Graph Undirect *****\n\n");
	g_e = GRAPHinit(e);
	UGRAPHinsertE (g_e, 1, 0);
	UGRAPHinsertE (g_e, 2, 1);
	UGRAPHinsertE (g_e, 5, 2);
	GRAPHshow (g_e);
	UGRAPHdegress(g_e, grau);
	printf("\n Grau: ");
	for (i = 0; i < 8; i++) 
	    printf ("%d ", grau[i]);
	
	printf("\n\n Is Undirected = %d \n\n", GRAPHisUndirected(g_e));
	printf(" Aresta(s) = %d \n", g_e->A);
	UGRAPHremoveE(g_e, 1, 0);
	GRAPHshow (g_e);
	printf("\n Aresta(s) = %d \n\n", g_e->A);
	UGRAPHremoveE(g_e, 1, 0);
	g_c = GRAPHinit(g);
	GRAPHbuildPath(g_c);
	printf("*******************\n");
	printf("Build path:\n\n");
	GRAPHshow(g_c);
	g_cy = GRAPHinit(g);
	GRAPHbuildCycle (g_cy);
	printf("\nBuild cycle:\n\n");
	GRAPHshow(g_cy); 
	printf("\n");
	g_twoxtwo = GRAPHinit(g);
	GRAPHtwo_two (g_twoxtwo);
	printf("two in two:\n\n");
	GRAPHshow(g_twoxtwo); 

/* 
GRAPHinsertA(F, 0, 1);
	GRAPHinsertA(F, 0, 4);
	GRAPHinsertA(F, 1, 2);
	GRAPHinsertA(F, 1, 5);
	GRAPHinsertA(F, 2, 3);
	GRAPHinsertA(F, 3, 7);
	GRAPHinsertA(F, 4, 8);
	GRAPHinsertA(F, 5, 4);
	GRAPHinsertA(F, 6, 5);
	GRAPHinsertA(F, 6, 10);
	GRAPHinsertA(F, 6, 2);
	GRAPHinsertA(F, 7, 11);
	GRAPHinsertA(F, 7, 6);
	GRAPHinsertA(F, 8, 9);
	GRAPHinsertA(F, 9, 5);
	GRAPHinsertA(F, 9, 8);
	GRAPHinsertA(F, 10, 9);
	GRAPHinsertA(F, 11, 10); */
