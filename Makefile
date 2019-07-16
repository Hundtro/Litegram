#
# Litegram Makefile
#

#Header and Libraries
INCLUDE=-I/usr/include/qt -I/usr/include/qt/QtWidgets -I/usr/include/qt/QtCore -I/usr/include/qt/QtGui -Imodules/ -Iutils/ -Iviews/ -Ibin/
LIBS=-L/usr/lib -lQt5Widgets -lQt5Gui -lQt5Core

#Files
BIN=bin
TARGET=$(BIN)/Litegram
OBJECTS=$(BIN)/main.o $(BIN)/main_module.o $(BIN)/moc_main_module.o $(BIN)/dictionary.o $(BIN)/message.o $(BIN)/file.o $(BIN)/main_view.o $(BIN)/moc_main_view.o

#Compiler
CXX=g++
CFLAGS=-c -o $(BIN)/$@ -fPIC -Wall -std=c++11
LFLAGS=-o

#MOC
MOC_DEFINES=-DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB
MOC=/usr/bin/moc $(MOC_DEFINES) --include $(BIN)/moc_predefs.h $(INCLUDE) $< -o $(BIN)/$@

#UIC
UIC=/usr/bin/uic $< -o $(BIN)/$@

#Commands
BUILD_RULES=mkbin cppos moc_predefs.h main.o main_module.o moc_main_module.o dictionary.o message.o file.o main_view.o moc_main_view.o
COMPILE=$(CXX) $(CFLAGS) $(INCLUDE)
BUILD=$(CXX) $(LFLAGS) $(TARGET) $(OBJECTS) $(LIBS)

litegram: $(BUILD_RULES)
	$(BUILD)

main.o: main.cpp
	$(COMPILE) main.cpp

main_module.o: modules/main_module.cpp
	$(COMPILE) modules/main_module.cpp

moc_main_module.o: moc_main_module.cpp
	$(COMPILE) $(BIN)/moc_main_module.cpp

moc_main_module.cpp: modules/main_module.h
	$(MOC)

dictionary.o: utils/dictionary.cpp
	$(COMPILE) utils/dictionary.cpp

message.o: utils/message.cpp
	$(COMPILE) utils/message.cpp

file.o: utils/file.cpp
	$(COMPILE) utils/file.cpp

main_view.o: views/main_view.cpp ui_main_view.h
	$(COMPILE) views/main_view.cpp

moc_main_view.o: moc_main_view.cpp
	$(COMPILE) $(BIN)/moc_main_view.cpp

moc_main_view.cpp: views/main_view.h
	$(MOC)

ui_main_view.h: views/main_view.ui
	$(UIC)	

moc_predefs.h: /usr/lib/qt/mkspecs/features/data/dummy.cpp
	$(CXX) -pipe -g -std=gnu++11 -Wall -W -dM -E -o $(BIN)/$@ $< 

mkbin:
	mkdir -p $(BIN)

cppos: data/pos.db
	cp $< $(BIN)

clean:
	rm -r -f $(BIN)
