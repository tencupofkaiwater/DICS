all: dics_body dics_brain dics_limbs dics_person dics_main

clean:
	$(MAKE) -C body clean
	$(MAKE) -C brain clean
	$(MAKE) -C limbs clean
	$(MAKE) -C person clean
	$(MAKE) -C main clean

cleanall:
	$(MAKE) -C body cleanall
	$(MAKE) -C brain cleanall
	$(MAKE) -C limbs cleanall
	$(MAKE) -C person cleanall
	$(MAKE) -C main cleanall
	rm ./lib -rf
	rm ./bin -rf

dics_body:    
	$(MAKE) -C body

dics_brain:    
	$(MAKE) -C brain

dics_limbs:    
	$(MAKE) -C limbs 

dics_person:    
	$(MAKE) -C person 

dics_main:    
	$(MAKE) -C main 
