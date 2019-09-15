##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=ex57
ConfigurationName      :=Debug
WorkspacePath          :="F:/Files/C++/C++ Workspace"
ProjectPath            :="F:/Files/C++/C++ Workspace/ex57"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Home
Date                   :=28/06/2019
CodeLitePath           :=E:/CodeLite
LinkerName             :=E:/CodeBlocks/MinGW/bin/g++.exe
SharedObjectLinkerName :=E:/CodeBlocks/MinGW/bin/g++.exe -shared -fPIC
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
ObjectsFileList        :="ex57.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=E:/CodeBlocks/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := E:/CodeBlocks/MinGW/bin/ar.exe rcu
CXX      := E:/CodeBlocks/MinGW/bin/g++.exe
CC       := E:/CodeBlocks/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := E:/CodeBlocks/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=E:\CodeLite
Objects0=$(IntermediateDirectory)/510.cpp$(ObjectSuffix) 



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
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/510.cpp$(ObjectSuffix): 510.cpp $(IntermediateDirectory)/510.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "F:/Files/C++/C++ Workspace/ex57/510.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/510.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/510.cpp$(DependSuffix): 510.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/510.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/510.cpp$(DependSuffix) -MM 510.cpp

$(IntermediateDirectory)/510.cpp$(PreprocessSuffix): 510.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/510.cpp$(PreprocessSuffix) 510.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


