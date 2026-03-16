class Address{
	private:
		int houseno;
		char colony[100];
		char area[100];
		char city[35];
		int pincode;

	public:
		Address();
		Address(int hn,char* co,char* a, char* c,int p);
		void accept();
		void display();
		void comp(Address a1,Address a2);

		bool operator==(const Address &ad);
};
