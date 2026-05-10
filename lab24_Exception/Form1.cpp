#include "Form1.h"
#include "Form2.h"

using namespace lab24Exception;

void Form1::button1_Click(Object^ sender, EventArgs^ e) {
	Form2^ f = gcnew Form2(gcnew MyDelegate(this, &Form1::GetData));
	f->ShowDialog();
}