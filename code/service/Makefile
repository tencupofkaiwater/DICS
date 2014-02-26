all: tag_brain tag_limbs tag_main

clean:
	$(MAKE) -C brain clean
	$(MAKE) -C limbs clean
	$(MAKE) -C main clean

cleanall:
	$(MAKE) -C brain cleanall
	$(MAKE) -C limbs cleanall
	$(MAKE) -C main cleanall
	rm ./lib -rf
	rm ./bin -rf

tag_brain:    
	$(MAKE) -C brain

tag_limbs:    
	$(MAKE) -C limbs 

tag_main:    
	$(MAKE) -C main 
