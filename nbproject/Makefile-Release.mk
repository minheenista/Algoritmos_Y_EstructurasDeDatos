#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/8209c8dc/Ejercicio_1.o \
	${OBJECTDIR}/_ext/8209c8dc/Ejercicio_2.o \
	${OBJECTDIR}/_ext/8209c8dc/Ejercicio_3.o \
	${OBJECTDIR}/_ext/8209c8dc/ordenamiento.o \
	${OBJECTDIR}/ejemplo02.o \
	${OBJECTDIR}/ejercicio01.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algoritmosyestructuras.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algoritmosyestructuras.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/algoritmosyestructuras ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/8209c8dc/Ejercicio_1.o: ../../../Downloads/Ejercicio\ 1.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/8209c8dc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/8209c8dc/Ejercicio_1.o ../../../Downloads/Ejercicio\ 1.cpp

${OBJECTDIR}/_ext/8209c8dc/Ejercicio_2.o: ../../../Downloads/Ejercicio\ 2.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/8209c8dc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/8209c8dc/Ejercicio_2.o ../../../Downloads/Ejercicio\ 2.cpp

${OBJECTDIR}/_ext/8209c8dc/Ejercicio_3.o: ../../../Downloads/Ejercicio\ 3.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/8209c8dc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/8209c8dc/Ejercicio_3.o ../../../Downloads/Ejercicio\ 3.cpp

${OBJECTDIR}/_ext/8209c8dc/ordenamiento.o: ../../../Downloads/ordenamiento.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/8209c8dc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/8209c8dc/ordenamiento.o ../../../Downloads/ordenamiento.cpp

${OBJECTDIR}/ejemplo02.o: ejemplo02.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ejemplo02.o ejemplo02.cpp

${OBJECTDIR}/ejercicio01.o: ejercicio01.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ejercicio01.o ejercicio01.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
