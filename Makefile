.PHONY: clean All

All:
	@echo "----------Building project:[ 2_GameBase - Debug ]----------"
	@cd "SDL-Project\2_GameBase" && "$(MAKE)" -f  "2_GameBase.mk"
clean:
	@echo "----------Cleaning project:[ 2_GameBase - Debug ]----------"
	@cd "SDL-Project\2_GameBase" && "$(MAKE)" -f  "2_GameBase.mk" clean
