all: dics_service dics_client

clean:
	$(MAKE) -C service clean
	$(MAKE) -C client clean

cleanall:
	$(MAKE) -C service cleanall
	$(MAKE) -C client cleanall
	rm ./bin -rf

dics_service:
	$(MAKE) -C service

dics_client:    
	$(MAKE) -C client
