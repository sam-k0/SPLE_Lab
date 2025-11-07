# Run in local Linux-Console!!!

build:
	docker build -f ./dockerfile -t "gcc" .

# Run command in the folder containing mkdocs.yml and mkdocs-local.yml
# Local directory will be mounted into container
console: build
	docker run --rm -v "`pwd`:`pwd`" -w "`pwd`" -it gcc bash

clean:
	docker image rm gcc