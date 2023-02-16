.PHONY: clean All

All:
	@echo "----------Building project:[ ReversingArrays - Debug ]----------"
	@cd "ReversingArrays" && "$(MAKE)" -f  "ReversingArrays.mk"
clean:
	@echo "----------Cleaning project:[ ReversingArrays - Debug ]----------"
	@cd "ReversingArrays" && "$(MAKE)" -f  "ReversingArrays.mk" clean
