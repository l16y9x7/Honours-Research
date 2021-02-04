def dataset_generation(n, k, f):
	""n: number of pair of subgraphs to be included
	  k: number of nodes in each subgraph
	  f: map <fname:domain>, for node features and their domain""

	eps = 0.1
	G = G' = empty
	for i from 1 to n:     
		generate a random connected subgraph g with k nodes
		randomly set node features for g
		g' = g.copy
		for node in g':
			for feature in node:
				the feature value changes with a probability eps;
			endfor
		endfor
		for any two nodes in g':
			an edge is added/deleted with a probability eps;
		endfor

		
		
				
	
