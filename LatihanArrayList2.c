using sytem;
using sytem.Colections;

namespace LatihanArrayList
{
	
}

public class Dosen
{
	public string Nik { get; set}
	public string NamaDosen {get; set}
}

public class Mahasiswa
{
	public string Nim { get; set}
	public string NamaMahasiswa {get; set}
}

static Void Main(string[] args)
{
	Mahasiswa mhs1 = new Mahasiswa();
	mhs1.Nim = "1234";
	mhs1.NamaMahasiswa = "Erik";
	
	Mahasiswa mhs2 = new Mahasiswa();
	mhs2.Nim = "1235";
	mhs2.NamaMahasiswa = "Wely";
	
	Dosen dosen = new Dosen();
	dosen.Nik = "0043";
	dosen.NamaDosen = "Jhono";
	
	Dosen dosen = new Dosen();
	dosen.Nik = "0045";
	dosen.NamaDosen = "Jhoni";
	
	ArrayList list = new ArrayList();
	
	List.Add(mhs1);
	List.Add(mhs2);
	List.Add(dosen1);
	List.Add(dosen2);
	
	Mahasiswa mhs = list[1];
	Console.Writeline("{0},{1}", mhs.Nim, mhs,NamaMahasiswa);
	
	Mahasiswa mhs = list[2];
	Console.Writeline("{0},{1}", mhs.Nim, mhs,NamaMahasiswa);
	
	Dosen dosen = (Dosen)list[3];
	Console.Writeline("{}, {}",dosen.Nik, dosen.NamaDosen);
	
	Dosen dosen = (Dosen)list[4];
	Console.Writeline("{}, {}",dosen.Nik, dosen.NamaDosen);
	
	Console.Readkey();
}