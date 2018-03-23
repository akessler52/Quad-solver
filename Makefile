DIRS: foutput qsolve rline validate wline

deploy:
	cd src; make; cp qsolver ../qsolver

export:
	cp -r ./src ./quadSolver; cd quadSolver
	for dir in ${DIRS}; do cd $$dir; rm -rf ./test; cd ..; done
	zip -r quadSolver.zip quadSolver; rm -r quadSolver

clean:
	rm quadSolver.zip
