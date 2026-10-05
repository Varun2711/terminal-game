class Terminal {

	private:
		// field variables and internal methods
		
	public:
		// create a terminal instance of size game_witdh and
		// game_height
		void initialize();

		// clear all output from the terminal
		void clear();
		
		// move the cursor position
		// both x and y must be greater than or equal to 0
		// and less than the bounds of the terminal dimensions
		void moveCursor(int x, int y);
		
		// hide the cursor when it is in the terminal focus
		void hideCursor();
		
		// toggle cursor back on (when in the terminal focus)
		void showCursor();
};


