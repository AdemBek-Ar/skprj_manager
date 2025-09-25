#include <Python.h>
extern "C" PyObject* PyInit_main(void);

int main(int argc, char** argv) {
	PyImport_AppendInittab("main", &PyInit_main);
	Py_Initialize();
	PyImport_ImportModule("main");
	PyRun_SimpleString("import main; main.pymain()");
	Py_Finalize();
	return 0;
}
