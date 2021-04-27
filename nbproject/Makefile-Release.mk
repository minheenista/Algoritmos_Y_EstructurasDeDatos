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
	${OBJECTDIR}/BusquedaBinaria.o \
	${OBJECTDIR}/BusquedaSecuencial.o \
	${OBJECTDIR}/Factorial.o \
	${OBJECTDIR}/Fibonacci.o \
	${OBJECTDIR}/NumeroPrimoRecursividad.o \
	${OBJECTDIR}/TareaOrdenamiento.o \
	${OBJECTDIR}/busqueda.o \
	${OBJECTDIR}/busqueda2.o \
	${OBJECTDIR}/ejemplo02.o \
	${OBJECTDIR}/ejercicio01.o \
	${OBJECTDIR}/tarea_ejercicio01.o \
	${OBJECTDIR}/tarea_ejercicio02.o \
	${OBJECTDIR}/tarea_ejercicio03.o


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

${OBJECTDIR}/BusquedaBinaria.o: BusquedaBinaria.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/BusquedaBinaria.o BusquedaBinaria.cpp

${OBJECTDIR}/BusquedaSecuencial.o: BusquedaSecuencial.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/BusquedaSecuencial.o BusquedaSecuencial.cpp

${OBJECTDIR}/Factorial.o: Factorial.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Factorial.o Factorial.cpp

${OBJECTDIR}/Fibonacci.o: Fibonacci.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Fibonacci.o Fibonacci.cpp

${OBJECTDIR}/NumeroPrimoRecursividad.o: NumeroPrimoRecursividad.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/NumeroPrimoRecursividad.o NumeroPrimoRecursividad.cpp

${OBJECTDIR}/TareaOrdenamiento.o: TareaOrdenamiento.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TareaOrdenamiento.o TareaOrdenamiento.cpp

${OBJECTDIR}/busqueda.o: busqueda.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/busqueda.o busqueda.cpp

${OBJECTDIR}/busqueda2.o: busqueda2.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/busqueda2.o busqueda2.cpp

${OBJECTDIR}/ejemplo02.o: ejemplo02.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ejemplo02.o ejemplo02.cpp

${OBJECTDIR}/ejercicio01.o: ejercicio01.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ejercicio01.o ejercicio01.cpp

${OBJECTDIR}/tarea_ejercicio01.o: tarea_ejercicio01.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tarea_ejercicio01.o tarea_ejercicio01.cpp

${OBJECTDIR}/tarea_ejercicio02.o: tarea_ejercicio02.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tarea_ejercicio02.o tarea_ejercicio02.cpp

${OBJECTDIR}/tarea_ejercicio03.o: tarea_ejercicio03.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tarea_ejercicio03.o tarea_ejercicio03.cpp

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
