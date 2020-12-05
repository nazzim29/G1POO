#include "Listearticle.h"

System::Void Gestionpoo::Listearticle::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    for (int i = 0; i < dataGridView1->Rows->Count; i++) {
        if (dataGridView1->Rows[i]->Cells[1]->Value->ToString()->Contains(textBox1->Text)) {
            dataGridView1->Rows[i]->Visible = true;
        }
        else {
            dataGridView1->Rows[i]->Visible = false;
        }
    }
}
