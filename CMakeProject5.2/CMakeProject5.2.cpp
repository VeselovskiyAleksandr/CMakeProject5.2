// CMakeProject5.2.cpp: определяет точку входа для приложения.
//Урок 32. Задача 2.  Анализ данных о фильмах.

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include "nlohmann/json.hpp"
#include "CMakeProject5.2.h"
using namespace std;

template <typename T>
  struct Counter {
	 Counter() {
		++counter;
	}
	 static int getCounter() {
		 return counter;
	 }
  private:
	static int counter;
};
  template <typename T> int Counter<T>::counter(0);

	struct FilmInfo {
		string country;
		string dateCreation;
		string filmDirector;
		string scriptwriter;
		string filmStudio;
		string annotation;
		map<string, string> filmArtist;
	};

struct Movie:Counter<Movie>{
	string nameMovie;
	FilmInfo filmInfo;
    };

int main()
{
	Movie movie1;	
	Movie movie2;
	Movie movie3;
	Movie movie4;
	Movie movie5;
	ofstream file("movie.json");
	if (file.is_open()) {
		cout << "\n" << "The file is open for the record" << "\n";
	}
	else {
		cout << "\n" << "The file not found";
		return 1;
	}
	nlohmann::json film1 = "{\"nameMovie\":\"Ivan Vasilievich Changes Profession\",\"country\":\"USSR\", \"dateCreation\":\"1973\", \"filmDirector\":\"Leonid Gaidai\", \"scriptwriter\":\"Leonid Gaidai, Vladlen Bakhnov\", \"filmStudio\":\"Mosfilm\", \"annotation\":\"The film tells the story of an inventor(Alexandr Demyanenko) who creates a time machine that opens a portal to the 16th century. He then accidentally swaps his apartment building manger, Ivan Vasilyevich Bunsha (Yuriy Yakovlev), with his namesake and doppelganger, Tsar Ivan (Yuriy Yakovlev) the Terrible. Laugh follows laugh, as a bumbling Soviet building manager and the angry Tsar swap roles.\", \"Aleksandr Demyanenko\":\"Aleksandr 'Shurik' Timofeyev, inventor\", \"Yury Yakovlev \":\"Ivan the Terrible/Ivan Vasilievich Bunsha\", \"Leonid Kuravlyov\":\"George Miloslavsky, burglar\", \"Natalia Selezneva\":\"Zinaida, Shurik's wife\", \"Natalia Krachkovskaya\":\"Uliana Andreevna Bunsha\",\"Saveliy Kramarov\":\"Feofan the clerk\", \"Natalia Kustinskaya\":\"Yakin's mistress\", \"Mikhail Pugovkin\":\"film director Yakin\", \"Sergei Filippov\":\"Swedish ambassador\", \"Vladimir Etush\":\"Anton Semyonovich Shpak, dentist\"}"_json;
    movie1.nameMovie = film1["nameMovie"];
	movie1.filmInfo.country = film1["country"];
	movie1.filmInfo.dateCreation = film1["dateCreation"];
	movie1.filmInfo.filmDirector = film1["filmDirector"];
	movie1.filmInfo.scriptwriter = film1["scriptwriter"];
	movie1.filmInfo.filmStudio = film1["filmStudio"];
	movie1.filmInfo.annotation = film1["annotation"];
	movie1.filmInfo.filmArtist["Aleksandr Demyanenko"] = "Aleksandr 'Shurik' Timofeyev, inventor";
	movie1.filmInfo.filmArtist["Yury Yakovlev"] = "Ivan the Terrible/Ivan Vasilievich Bunsha";
	movie1.filmInfo.filmArtist["Leonid Kuravlyov"] = "George Miloslavsky, burglar";
	movie1.filmInfo.filmArtist["Natalia Selezneva"] = "Zinaida, Shurik's wife";
	movie1.filmInfo.filmArtist["Natalia Krachkovskaya"] = "Uliana Andreevna Bunsha";
	movie1.filmInfo.filmArtist["Saveliy Kramarov"] = "Feofan the clerk";
	movie1.filmInfo.filmArtist["Natalia Kustinskaya"] = "Yakin's mistress";
	movie1.filmInfo.filmArtist["Mikhail Pugovkin"] = "film director Yakin";
	movie1.filmInfo.filmArtist["Sergei Filippov"] = "Swedish ambassador";
	movie1.filmInfo.filmArtist["Vladimir Etush"] = "Anton Semyonovich Shpak, dentist";
	file << film1;
	nlohmann::json film2 = "{\"nameMovie\":\"Seventeen Moments of Spring\", \"country\":\"USSR\",\"dateCreation\":\"1973\", \"filmDirector\":\"Tatyana Lioznova\",\"scriptwriter\":\" Yulian Semyonov\",\"filmStudio\":\"Gorkiy Film Studio\", \"annotation\":\"February 1945, Germany. Max Otto von Stierlitz, a respected SS-Standartenführer in the Ausland-SD, is in fact Soviet spy Maxim Isaev (Vyacheslav Tikhonov), who has infiltrated the German establishment many years ago.Stierlitz is ordered by Moscow to ascertain whether the Americans and the Germans have a backdoor channel and, if so, to foil any possible agreement. After realizing Himmler and Schellenberg have sent Karl Wolff (Vasily Lanovoy) to negotiate with Allen Dulles (Vyacheslav Shalevich) in neutral Switzerland.\", \"Vyacheslav Tikhonov\":\"Soviet spy Maxim Isaev, Max Otto von Stierlitz\", \"Yevgeniy Yevstigneyev\":\"Professor Pleischner\", \"Lev Durov\": \"Klaus\", \"Oleg Tabakov\": \"Walter Schellenberg\", \"Rostislav Plyatt\": \"Pastor Fritz Schlag\", \"Yuri Vizbor\": \"Martin Bormann\", \"Leonid Kuravlyov\": \"Kurt Eismann\", \"Yekaterina Gradova\": \"Katherin Kinn\", \"Svetlana Svetlichnaya\": \"Gabi Nabel\"}"_json;
    movie2.nameMovie = film2["nameMovie"];
	movie2.filmInfo.country = film2["country"];
	movie2.filmInfo.dateCreation = film2["dateCreation"];
	movie2.filmInfo.filmDirector = film2["filmDirector"];
	movie2.filmInfo.scriptwriter = film2["scriptwriter"];
	movie2.filmInfo.filmStudio = film2["filmStudio"];
	movie2.filmInfo.annotation = film2["annotation"];
	movie2.filmInfo.filmArtist["Vyacheslav Tikhonov"] = "Soviet spy Maxim Isaev, Max Otto von Stierlitz";
	movie2.filmInfo.filmArtist["Yevgeniy Yevstigneyev"] = "Professor Pleischner";
	movie2.filmInfo.filmArtist["Lev Durov"] = "Klaus";
	movie2.filmInfo.filmArtist["Oleg Tabakov"] = "Walter Schellenberg";
	movie2.filmInfo.filmArtist["Rostislav Plyatt"] = "Pastor Fritz Schlag";
	movie2.filmInfo.filmArtist["Yuri Vizbor"] = "Martin Bormann";
	movie2.filmInfo.filmArtist["Leonid Kuravlyov"] = "Kurt Eismann";
	movie2.filmInfo.filmArtist["Yekaterina Gradova"] = "Katherin Kinn";
	movie2.filmInfo.filmArtist["Svetlana Svetlichnaya"] = "Gabi Nabel";
	file << film2;
	nlohmann::json film3 = "{\"nameMovie\":\"The Place of meeting can not be changed\", \"country\":\"USSR\",\"dateCreation\":\"1979\",\"filmDirector\":\"Stanislav Govorukhin\",\"scriptwriter\":\"Vayner brothers\",\"filmStudio\":\"Odessa Film Studio\",\"annotation\":\"The film is set in post-war Moscow. Lieutenant Vladimir Sharapov (Vladimir Konkin) is a young reconnaissance officer who has just returned from the war and is assigned to peacetime service with the famous MUR. There he becomes part of an elite detective team led by Captain Gleb Zheglov (Vladimir Vysotsky). The duo becomes embroiled in two seemingly unrelated investigations: that of the murder of young aspiring actress Larisa Gruzdeva, and the hunt for a brazen, vicious gang of armed robbers that calls itself The Black Cat and constantly manages to evade capture.While suspicion in Gruzdeva's murder initially falls on her estranged husband Dr. Gruzdev (Sergey Yursky), it gradually becomes obvious that the two cases are connected, as a Black Cat mobster Fox (Aleksandr Belyavsky) is implicated in the murder. As a result of Zheglov's successful high - stakes operation to capture Fox, Sharapov inadvertently finds himself undercover at the Black Cat hideout, sparring with the gang's menacing leader, the Hunchback (Armen Dzhigarkhanyan).\", \"Vladimir Vysotsky\":\"Gleb Zheglov\", \"Vladimir Konkin\":\"Vladimir Sharapov\", \"Zinovy Gerdt\": \"Mikhail Bomze, Sharapov's neighbour\", \"Armen Dzhigarkhanyan\":\"The Hunchback (Gorbatyiy), leader of the Black Cat gang\", \"Sergei Yursky\":\"Dr. Ivan Gruzdev\", \"Viktor Pavlov\":\"Sergey Levchenko\", \"Aleksandr Belyavsky\": \"Fox\", \"Evgeniy Evstigneyev\":\"Petr Ruchnikov (Pet'ka Ruchechnik), fur coat thief\"}"_json;
    movie3.nameMovie = film3["nameMovie"];
	movie3.filmInfo.country = film3["country"];
	movie3.filmInfo.dateCreation = film3["dateCreation"];
	movie3.filmInfo.filmDirector = film3["filmDirector"];
	movie3.filmInfo.scriptwriter = film3["scriptwriter"];
	movie3.filmInfo.filmStudio = film3["filmStudio"];
	movie3.filmInfo.annotation = film3["annotation"];
	movie3.filmInfo.filmArtist["Vladimir Vysotsky"] = "Gleb Zheglov";
	movie3.filmInfo.filmArtist["Vladimir Konkin"] = "Vladimir Sharapov";
	movie3.filmInfo.filmArtist["Zinovy Gerdt"] = "Mikhail Bomze, Sharapov's neighbour";
	movie3.filmInfo.filmArtist["Armen Dzhigarkhanyan"] = "The Hunchback (Gorbatyiy), leader of the Black Cat gang";
	movie3.filmInfo.filmArtist["Sergei Yursky"] = "Dr. Ivan Gruzdev";
	movie3.filmInfo.filmArtist["Viktor Pavlov"] = "Sergey Levchenko";
	movie3.filmInfo.filmArtist["Aleksandr Belyavsky"] = "Fox";
	movie3.filmInfo.filmArtist["Evgeniy Evstigneyev"]="Petr Ruchnikov (Pet'ka Ruchechnik), fur coat thief";
	file << film3;
	nlohmann::json film4 = "{\"nameMovie\":\"Ruslan and Ludmila\", \"country\":\"USSR\",\"dateCreation\":\"1972\",\"filmDirector\":\"Aleksandr Ptushko\",\"scriptwriter\":\"Aleksandr Ptushko\",\"filmStudio\":\"Mosfilm\",\"annotation\":\"The hero of the movie is the bogatyr Ruslan who sets off in search of his kidnapped bride, Ludmila. To rescue his beloved, he will have to overcome many obstacles, and battle the sorcerers Chernomor and Naina.\", \"Valeri Kozinets\":\"Ruslan\", \"Natalya Petrova\":\"Lyudmila\", \"Vladimir Fyodorov\":\"Chernomor\",\"Maria Kapnist\":\"Naina\", \"Andrei Abrikosov\":\" Vladimir\", \"Vyacheslav Nevinny\":\"Farlaf\", \"Oleg Mokshantsev\":\"Rogdai\", \"Ruslan Akhmetov\":\"Ratmir\"}"_json;
    movie4.nameMovie = film4["nameMovie"];
	movie4.filmInfo.country = film4["country"];
	movie4.filmInfo.dateCreation = film4["dateCreation"];
	movie4.filmInfo.filmDirector = film4["filmDirector"];
	movie4.filmInfo.scriptwriter = film4["scriptwriter"];
	movie4.filmInfo.filmStudio = film4["filmStudio"];
	movie4.filmInfo.annotation = film4["annotation"];
	movie4.filmInfo.filmArtist["Valeri Kozinets"] = "Ruslan";
	movie4.filmInfo.filmArtist["Natalya Petrova"] = "Lyudmila";
	movie4.filmInfo.filmArtist["Vladimir Fyodorov"] = "Chernomor";
	movie4.filmInfo.filmArtist["Maria Kapnist"] = "Naina";
	movie4.filmInfo.filmArtist["Andrei Abrikosov"] = "Vladimir";
	movie4.filmInfo.filmArtist["Vyacheslav Nevinny"] = "Farlaf";
	movie4.filmInfo.filmArtist["Oleg Mokshantsev"] = "Rogdai";
	movie4.filmInfo.filmArtist["Ruslan Akhmetov"] = "Ratmir";
	file << film4;
	nlohmann::json film5 = "{\"nameMovie\":\"Salyut 7\", \"country\":\"Russia\",\"dateCreation\":\"2017\",\"filmDirector\":\"Klim Shipenko\",\"scriptwriter\":\"Aleksey Samolyotov, Klim Shipenko, Aleksey Chupov, Natalya Merkulova, Bakur Bakuradze\",\"filmStudio\":\"Russia-1, STV Film Company, Lemon Films Studio, Vita Aktiva, Globus - film, Mosfilm Studios, Lenfilm\",\"annotation\":\"The Soviet Union, June 1985. After contact with the Salyut 7 space station is lost, cosmonauts Vladimir Fyodorov (Vladimir Vdovichenkov)  and Viktor Alyokhin (Pavel Derevyanko) attempt to dock with the empty, frozen craft to bring it back to life.\", \"Vladimir Vdovichenkov\":\"Vladimir Fyodorov\", \"Pavel Derevyanko\":\"Viktor Alyokhin\", \"Aleksandr Samoylenko\":\"Valeriy Shubin\",  \"Vitaliy Khaev\":\"Yuriy Shumakov\",\"Oksana Fandera\":\"Svetlana Lazareva\", \"Mariya Mironova\":\"Nina Fyodorova\", \"Polina Rudenko\":\"Olya Fyodorova\", \"Lyubov Aksyonova\":\"Liliya Alyokhina\"}"_json;
    movie5.nameMovie = film5["nameMovie"];
	movie5.filmInfo.country = film5["country"];
	movie5.filmInfo.dateCreation = film5["dateCreation"];
	movie5.filmInfo.filmDirector = film5["filmDirector"];
	movie5.filmInfo.scriptwriter = film5["scriptwriter"];
	movie5.filmInfo.filmStudio = film5["filmStudio"];
	movie5.filmInfo.annotation = film5["annotation"];
	movie5.filmInfo.filmArtist["Vladimir Vdovichenkov"] = "Vladimir Fyodorov";
	movie5.filmInfo.filmArtist["Pavel Derevyanko"] = "Viktor Alyokhin";
	movie5.filmInfo.filmArtist["Aleksandr Samoylenko"] = "Valeriy Shubin";
	movie5.filmInfo.filmArtist["Vitaliy Khaev"] = "Yuriy Shumakov";
	movie5.filmInfo.filmArtist["Oksana Fandera"] = "Svetlana Lazareva";
	movie5.filmInfo.filmArtist["Mariya Mironova"] = "Nina Fyodorova";
	movie5.filmInfo.filmArtist["Polina Rudenko"] = "Olya Fyodorova";
	movie5.filmInfo.filmArtist["Lyubov Aksyonova"] = "Liliya Alyokhina";
	file << film5;
	file.close();
	nlohmann::json film;
	ifstream movie_file("movie.json");
	if (movie_file.is_open()) {
		cout  << "The file is open for reading" << "\n\n";
	}
	else {
		cout << "\n" << "The file not found";
		return 1;
	}
	for (int i = 0; i < Counter<Movie>::getCounter(); i++) {
		movie_file >> film;
		cout << film["nameMovie"] << "\n";
		for (const auto& item : film.items())
		{
			if (item.key() != "nameMovie") {
				std::cout << item.key();// << "\n";
				for (const auto& val : item.value().items())
				{
					cout << "  " << val.key() << ": " << val.value() << "\n";
				}
			}
		}
			cout << "\n";
	}
	movie_file.seekg(0);
	nlohmann::json filmFind;
	string filmName = "The Place of meeting can not be changed";
	for (int i = 0; i < Counter<Movie>::getCounter(); i++) {
		movie_file >> filmFind;
		for (const auto& item : filmFind.items())
		{
			if (item.key() == "nameMovie" && filmFind["nameMovie"] == filmName) {
				cout << "  " <<"Movie" << ": " << filmFind["nameMovie"] << "\n";
				for (const auto& item : filmFind.items()) {
					cout << item.key();
					for (const auto& val : item.value().items())
					{
						if (val.key() != "nameMovie") {
							cout << "  " << val.key() << ": " << val.value() << "\n";
						}
					}
				}
			}
		}
	}
	movie_file.seekg(0);
	string filmActorName = "Leonid Kuravlyov";
    cout<<"\n"<< filmActorName << "  "<<"starred in films: ";
	for (int i = 0; i < Counter<Movie>::getCounter(); i++) {
		movie_file >> filmFind;
		for (const auto& item : filmFind.items())
		{
			if (item.key() == filmActorName) {
					for (const auto& val : item.value().items())
					{
							cout << filmFind["nameMovie"] <<": " << val.value()<< "  " ;
						}
					}
				}
			}
	cout << "\n";
	movie_file.close();
	return 0;
}
