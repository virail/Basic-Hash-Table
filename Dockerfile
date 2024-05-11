FROM ubuntu:latest
WORKDIR /app
COPY . .
RUN apt-get update && apt-get install build-essential -y
RUN gcc main.c hash_table.c prime.c -lm
CMD ["./a.out"]
