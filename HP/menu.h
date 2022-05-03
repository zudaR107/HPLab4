#ifndef MYMENU_MENU_H
#define MYMENU_MENU_H
#include "menu_item.h"

namespace ZDV {
	class Menu {
	public:
		int getSelect() const;
		char* getTitle() const;
		size_t getCount() const;
		bool getRunning() const;
		Item* getItems();
		void setSelect();
		void setRunning(bool);
		void print();
		void runCommand();
		Menu(char*, Item*, size_t);
		Menu();

	private:
		int m_select{ -1 };
		size_t m_count{};
		bool m_running{ true };
		char* m_title{};
		Item* m_items{};
	};
}
#endif // !MYMENU_MENU_H