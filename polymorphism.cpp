#include <iostream>
using namespace std;

class Celestial_Body {
	protected:
		string type;
		float radius;
		float mass;
	public:
		Celestial_Body(){
			type="body";
			radius = 10;
			mass = 10;
		}
		Celestial_Body(const string &t, const float &r, const float &m):type(t),radius(r),mass(m) {}
		virtual const void print() const{
			cout<<"Type = "<<type<<endl;
			cout<<"Radius = "<<radius<<endl;
			cout<<"Mass = "<<mass<<endl;
		}
		const string &getType() const {return type;}
		const float &getRadius() const {return radius;}
		const float &getMass() const {return mass;}

};

class Planet : public Celestial_Body {
	private:
		string name;
	public:
		Planet(const string t,const float r,const float m,
			const string n):Celestial_Body(t,r,m),name(n){}
		const void print() const{
			cout<<"Type = "<<type<<endl;
			cout<<"Radius = "<<radius<<endl;
			cout<<"Mass = "<<mass<<endl;
			cout<<"Name = "<<name<<endl;
		}


};

class Star : public Celestial_Body {
	private:
		string name;
		float brightness;
		string color;
	public:
		Star(const string t,const float r,const float m,const string n,float b, string c):Celestial_Body(t,r,m),name(n){
			brightness = b;
			color = c;
		}

		const void print() const {
			cout<<"Type = "<<type<<endl;
			cout<<"Radius = "<<radius<<endl;
			cout<<"Mass = "<<mass<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"Brightness = "<<brightness<<endl;
			cout<<"Color = "<<color<<endl;
		}
};	

int main(){
	Planet mars("planet",10,20,"Mars");
	mars.print();
	Star sun("star",33,34,"Sun",12.3,"Orange");
	sun.print();

	Celestial_Body *b = &mars;
	Celestial_Body *c = &sun;

	b->print();
	c->print();
	


	return 0;
}
