#include "Form2.h"
#include "Form1.h"

using namespace lab24Exception;

Form2::Form2(MyDelegate^ sender) {
	InitializeComponent();
	deleg = sender;
}

void Form2::button1_Click(Object^ sender, EventArgs^ e) {
	try {
		deleg(textBox1->Text);
	}
	catch (...) {
		textBox1->Text = "Непредвиденная ошибка.";
	}
}