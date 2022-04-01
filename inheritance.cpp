#include <iostream>
using namespace std;

class Celestial_Body {
	protected:
		string type;
		float radius;
		float mass;
	public:
		Celestial_Body(const string &t, const float &r, const float &m):type(t),radius(r),mass(m) {}
		void print(){
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
		void print(){
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

		void print(){
			cout<<"Type = "<<type<<endl;
			cout<<"Radius = "<<radius<<endl;
			cout<<"Mass = "<<mass<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"Brightness = "<<brightness<<endl;
			cout<<"Color = "<<color<<endl;
		}
};	

int main(){
	Planet mars("planet",5,10,"Mars");
	mars.print();
	cout<<"----"<<endl;
	cout<<mars.getType()<<endl;
	cout<<"----"<<endl;
	Star sun("star",4,12,"Sun",34.5,"Orange");
	sun.print();
	cout<<"----"<<endl;
	cout<<sun.getType()<<endl;
	cout<<"----"<<endl;

	return 0;
}
