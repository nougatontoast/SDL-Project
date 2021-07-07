##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=2_GameBase
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL
ProjectPath            :=C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=clair
Date                   :=07/07/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="C:/Program Files/mingw-w64/mingw64/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files/mingw-w64/mingw64/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="2_GameBase.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files/mingw-w64/mingw64/bin/windres.exe"
LinkOptions            :=  -Bdynamic -lmingw32 -lSDL2main -lSDL2 -lSDL2_image
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)C:\Users\clair\Documents\_Libs\_CL\x86_64-w64-mingw32\include\SDL2 $(IncludeSwitch)C:\Users\clair\Documents\_Libs\_CL\_SDL2_image-2.0.5\x86_64-w64-mingw32\include\SDL2 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)SDL2 $(LibrarySwitch)SDL2.dll $(LibrarySwitch)SDL2main $(LibrarySwitch)SDL2_image $(LibrarySwitch)SDL2_image.dll 
ArLibs                 :=  "libSDL2.a" "libSDL2.dll.a" "libSDL2main.a" "libSDL2_image.a" "libSDL2_image.dll.a" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch). $(LibraryPathSwitch)C:\Users\clair\Documents\_Libs\_CL\x86_64-w64-mingw32\lib $(LibraryPathSwitch)C:\Users\clair\Documents\_Libs\_CL\_SDL2_image-2.0.5\x86_64-w64-mingw32\lib 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files/mingw-w64/mingw64/bin/ar.exe" rcu
CXX      := "C:/Program Files/mingw-w64/mingw64/bin/g++.exe"
CC       := "C:/Program Files/mingw-w64/mingw64/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files/mingw-w64/mingw64/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Game.cpp$(ObjectSuffix) $(IntermediateDirectory)/SpriteRenderer.cpp$(ObjectSuffix) $(IntermediateDirectory)/InputProcessor.cpp$(ObjectSuffix) $(IntermediateDirectory)/PhysicsBody2D.cpp$(ObjectSuffix) $(IntermediateDirectory)/Entity.cpp$(ObjectSuffix) $(IntermediateDirectory)/CommandQuit.cpp$(ObjectSuffix) $(IntermediateDirectory)/Observer_Quit.cpp$(ObjectSuffix) $(IntermediateDirectory)/Color.cpp$(ObjectSuffix) $(IntermediateDirectory)/main_SDLimage.cpp$(ObjectSuffix) $(IntermediateDirectory)/TxtParser.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/RenderingHandler.cpp$(ObjectSuffix) $(IntermediateDirectory)/CommandsKeeper.cpp$(ObjectSuffix) $(IntermediateDirectory)/Transform.cpp$(ObjectSuffix) $(IntermediateDirectory)/I_Update.cpp$(ObjectSuffix) $(IntermediateDirectory)/TxtParser_Input.cpp$(ObjectSuffix) $(IntermediateDirectory)/Command.cpp$(ObjectSuffix) $(IntermediateDirectory)/Notifier.cpp$(ObjectSuffix) $(IntermediateDirectory)/Observer.cpp$(ObjectSuffix) $(IntermediateDirectory)/Color8.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Game.cpp$(ObjectSuffix): Game.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Game.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Game.cpp$(DependSuffix) -MM Game.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/Game.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Game.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Game.cpp$(PreprocessSuffix): Game.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Game.cpp$(PreprocessSuffix) Game.cpp

$(IntermediateDirectory)/SpriteRenderer.cpp$(ObjectSuffix): SpriteRenderer.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SpriteRenderer.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SpriteRenderer.cpp$(DependSuffix) -MM SpriteRenderer.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/SpriteRenderer.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SpriteRenderer.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SpriteRenderer.cpp$(PreprocessSuffix): SpriteRenderer.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SpriteRenderer.cpp$(PreprocessSuffix) SpriteRenderer.cpp

$(IntermediateDirectory)/InputProcessor.cpp$(ObjectSuffix): InputProcessor.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/InputProcessor.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/InputProcessor.cpp$(DependSuffix) -MM InputProcessor.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/InputProcessor.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/InputProcessor.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/InputProcessor.cpp$(PreprocessSuffix): InputProcessor.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/InputProcessor.cpp$(PreprocessSuffix) InputProcessor.cpp

$(IntermediateDirectory)/PhysicsBody2D.cpp$(ObjectSuffix): PhysicsBody2D.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PhysicsBody2D.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PhysicsBody2D.cpp$(DependSuffix) -MM PhysicsBody2D.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/PhysicsBody2D.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PhysicsBody2D.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PhysicsBody2D.cpp$(PreprocessSuffix): PhysicsBody2D.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PhysicsBody2D.cpp$(PreprocessSuffix) PhysicsBody2D.cpp

$(IntermediateDirectory)/Entity.cpp$(ObjectSuffix): Entity.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Entity.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Entity.cpp$(DependSuffix) -MM Entity.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/Entity.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Entity.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Entity.cpp$(PreprocessSuffix): Entity.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Entity.cpp$(PreprocessSuffix) Entity.cpp

$(IntermediateDirectory)/CommandQuit.cpp$(ObjectSuffix): CommandQuit.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CommandQuit.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CommandQuit.cpp$(DependSuffix) -MM CommandQuit.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/CommandQuit.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CommandQuit.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CommandQuit.cpp$(PreprocessSuffix): CommandQuit.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CommandQuit.cpp$(PreprocessSuffix) CommandQuit.cpp

$(IntermediateDirectory)/Observer_Quit.cpp$(ObjectSuffix): Observer_Quit.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Observer_Quit.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Observer_Quit.cpp$(DependSuffix) -MM Observer_Quit.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/Observer_Quit.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Observer_Quit.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Observer_Quit.cpp$(PreprocessSuffix): Observer_Quit.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Observer_Quit.cpp$(PreprocessSuffix) Observer_Quit.cpp

$(IntermediateDirectory)/Color.cpp$(ObjectSuffix): Color.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Color.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Color.cpp$(DependSuffix) -MM Color.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/Color.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Color.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Color.cpp$(PreprocessSuffix): Color.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Color.cpp$(PreprocessSuffix) Color.cpp

$(IntermediateDirectory)/main_SDLimage.cpp$(ObjectSuffix): main_SDLimage.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main_SDLimage.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main_SDLimage.cpp$(DependSuffix) -MM main_SDLimage.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/main_SDLimage.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main_SDLimage.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main_SDLimage.cpp$(PreprocessSuffix): main_SDLimage.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main_SDLimage.cpp$(PreprocessSuffix) main_SDLimage.cpp

$(IntermediateDirectory)/TxtParser.cpp$(ObjectSuffix): TxtParser.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TxtParser.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TxtParser.cpp$(DependSuffix) -MM TxtParser.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/TxtParser.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TxtParser.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TxtParser.cpp$(PreprocessSuffix): TxtParser.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TxtParser.cpp$(PreprocessSuffix) TxtParser.cpp

$(IntermediateDirectory)/RenderingHandler.cpp$(ObjectSuffix): RenderingHandler.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/RenderingHandler.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/RenderingHandler.cpp$(DependSuffix) -MM RenderingHandler.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/RenderingHandler.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/RenderingHandler.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/RenderingHandler.cpp$(PreprocessSuffix): RenderingHandler.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/RenderingHandler.cpp$(PreprocessSuffix) RenderingHandler.cpp

$(IntermediateDirectory)/CommandsKeeper.cpp$(ObjectSuffix): CommandsKeeper.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CommandsKeeper.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CommandsKeeper.cpp$(DependSuffix) -MM CommandsKeeper.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/CommandsKeeper.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CommandsKeeper.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CommandsKeeper.cpp$(PreprocessSuffix): CommandsKeeper.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CommandsKeeper.cpp$(PreprocessSuffix) CommandsKeeper.cpp

$(IntermediateDirectory)/Transform.cpp$(ObjectSuffix): Transform.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Transform.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Transform.cpp$(DependSuffix) -MM Transform.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/Transform.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Transform.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Transform.cpp$(PreprocessSuffix): Transform.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Transform.cpp$(PreprocessSuffix) Transform.cpp

$(IntermediateDirectory)/I_Update.cpp$(ObjectSuffix): I_Update.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/I_Update.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/I_Update.cpp$(DependSuffix) -MM I_Update.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/I_Update.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/I_Update.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/I_Update.cpp$(PreprocessSuffix): I_Update.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/I_Update.cpp$(PreprocessSuffix) I_Update.cpp

$(IntermediateDirectory)/TxtParser_Input.cpp$(ObjectSuffix): TxtParser_Input.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TxtParser_Input.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TxtParser_Input.cpp$(DependSuffix) -MM TxtParser_Input.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/TxtParser_Input.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TxtParser_Input.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TxtParser_Input.cpp$(PreprocessSuffix): TxtParser_Input.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TxtParser_Input.cpp$(PreprocessSuffix) TxtParser_Input.cpp

$(IntermediateDirectory)/Command.cpp$(ObjectSuffix): Command.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Command.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Command.cpp$(DependSuffix) -MM Command.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/Command.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Command.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Command.cpp$(PreprocessSuffix): Command.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Command.cpp$(PreprocessSuffix) Command.cpp

$(IntermediateDirectory)/Notifier.cpp$(ObjectSuffix): Notifier.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Notifier.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Notifier.cpp$(DependSuffix) -MM Notifier.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/Notifier.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Notifier.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Notifier.cpp$(PreprocessSuffix): Notifier.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Notifier.cpp$(PreprocessSuffix) Notifier.cpp

$(IntermediateDirectory)/Observer.cpp$(ObjectSuffix): Observer.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Observer.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Observer.cpp$(DependSuffix) -MM Observer.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/Observer.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Observer.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Observer.cpp$(PreprocessSuffix): Observer.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Observer.cpp$(PreprocessSuffix) Observer.cpp

$(IntermediateDirectory)/Color8.cpp$(ObjectSuffix): Color8.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Color8.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Color8.cpp$(DependSuffix) -MM Color8.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/clair/Documents/Computer_Science_Notes/CPP/CL_SDL/SDL-Project/2_GameBase/Color8.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Color8.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Color8.cpp$(PreprocessSuffix): Color8.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Color8.cpp$(PreprocessSuffix) Color8.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


