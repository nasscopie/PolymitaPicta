#ifndef POLYMITAPICTAAPP_H
#define POLYMITAPICTAAPP_H

#include "MooseApp.h"

class PolymitapictaApp;

template<>
InputParameters validParams<PolymitapictaApp>();

class PolymitapictaApp : public MooseApp
{
public:
  PolymitapictaApp(InputParameters parameters);
  virtual ~PolymitapictaApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* POLYMITAPICTAAPP_H */
