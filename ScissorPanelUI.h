// generated by Fast Light User Interface Designer (fluid) version 1.0011

#ifndef ScissorPanelUI_h
#define ScissorPanelUI_h
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include "imgflt.h"
#include <FL/Fl_Group.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Round_Button.H>
#include <FL/Fl_Counter.H>
#include <FL/Fl_Button.H>

class ScissorPanelUI {
public:
  ScissorPanelUI();
  Fl_Window *mainWindow;
private:
  inline void cb_Image_i(Fl_Round_Button*, void*);
  static void cb_Image(Fl_Round_Button*, void*);
public:
  Fl_Round_Button *contour;
private:
  inline void cb_contour_i(Fl_Round_Button*, void*);
  static void cb_contour(Fl_Round_Button*, void*);
  inline void cb_Pixel_i(Fl_Round_Button*, void*);
  static void cb_Pixel(Fl_Round_Button*, void*);
  inline void cb_Cost_i(Fl_Round_Button*, void*);
  static void cb_Cost(Fl_Round_Button*, void*);
  inline void cb_Path_i(Fl_Round_Button*, void*);
  static void cb_Path(Fl_Round_Button*, void*);
  inline void cb_Minimum_i(Fl_Round_Button*, void*);
  static void cb_Minimum(Fl_Round_Button*, void*);
public:
  Fl_Counter *expanded;
private:
  inline void cb_expanded_i(Fl_Counter*, void*);
  static void cb_expanded(Fl_Counter*, void*);
public:
  Fl_Round_Button *whole;
private:
  inline void cb_whole_i(Fl_Round_Button*, void*);
  static void cb_whole(Fl_Round_Button*, void*);
  inline void cb_Brush_i(Fl_Round_Button*, void*);
  static void cb_Brush(Fl_Round_Button*, void*);
  inline void cb_Close_i(Fl_Button*, void*);
  static void cb_Close(Fl_Button*, void*);
public:
  void show();
  void hide();
  ImgView *imgView;
};
#endif
