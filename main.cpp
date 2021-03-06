#include "t.h"
int main()
{
    listjalan j;
    listkota k;
    createlistkota(k);
    createlistjalan(j);
    cout<<"(a) Penambahan Data Kota"<<endl;
    insertkota("Jakarta",k);
    insertkota("Bandung",k);
    insertkota("Depok",k);
    insertkota("Solo",k);
    insertkota("Malang",k);
    showkota(k);
    cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    cout<<"(b) Penambahan Data Jalan"<<endl;
    insertjalan("JL.Dodo","Utama", j);
    insertjalan("JL.Aku","One Way", j);
    insertjalan("JL.Kamu","Toll", j);
    insertjalan("JL.Kami","Utama", j);
    insertjalan("JL.Kita","One Way", j);
    insertjalan("JL.Semua","Toll", j);
    insertjalan("JL.Ini","Utama", j);
    insertjalan("JL.Hidup","One Way", j);
    insertjalan("JL.Sekolah","Toll", j);
    insertjalan("JL.Depan","Utama", j);
    insertjalan("JL.Belakang","One Way", j);
    showjalan(j);
    cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    cout<<"(c) Penentuan Relasi Kota dan Jalan"<<endl;
    relasikotajalan(k,j,"Jakarta","JL.Dodo");
    relasikotajalan(k,j,"Jakarta","JL.Aku");
    relasikotajalan(k,j,"Bandung","JL.Kamu");
    relasikotajalan(k,j,"Bandung","JL.Depan");
    relasikotajalan(k,j,"Bandung","JL.Kami");
    relasikotajalan(k,j,"Depok","JL.Depan");
    relasikotajalan(k,j,"Depok","JL.Belakang");
    relasikotajalan(k,j,"Malang","JL.Sekolah");
    relasikotajalan(k,j,"Malang","JL.Hidup");
    relasikotajalan(k,j,"Malang","JL.Dodo");
    relasikotajalan(k,j,"Solo","JL.Sekolah"); //Solo Sudah Dihapus
    relasikotajalan(k,j,"Solo","JL.Hidup");
    cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    cout<<"(d) Menghapus Data Kota"<<endl;
    deletekota("Solo",k);
    showkota(k);
    cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    cout<<"(e) Menghapus Data Jalan"<<endl;
    deletejalan("JL.Ini",j);
    showjalan(j);
    cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    cout<<"(f) Menampilkan data keseluruhan kota beserta jalan di kota tersebut"<<endl;
    showall(k);
    cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    cout<<"(g) Menampilkan data kota yang punya jalan tertentu"<<endl;
    kotashowjalan(k,j,"JL.Dodo");
    cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    cout<<"(h) Menampilkan data jalan yang punya kota tertentu"<<endl;
    jalanshowkota(k,j,"Malang");
    cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    cout<<"(i) Menampilkan data kota yang punya tipe jalan tertentu"<<endl;
    tipeshowjalankota(k,j,"One Way");
    cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    return 0;
}
