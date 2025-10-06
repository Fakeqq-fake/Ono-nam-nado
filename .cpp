Skip to content
Navigation Menu
Fakeqq-fake
para-number-1

Type / to search
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
para-number-1
/
.cpp
in
main

Edit

Preview
Indent mode

Spaces
Indent size

2
Line wrap mode

No wrap
Editing .cpp file contents
160
161
162
163
164
165
166
167
168
169
170
171
172
173
174
175
176
177
178
179
180
181
182
183
184
185
186
187
188
189
190
191
192
193
194
195
196
197
198
199
200
201
202
203
204
205
206
207
208
209
210
211
212
213
214
215
216
217
218
219
220
221
222
223
224
225
226
227
228
229
230
231
232
233
234
235
236
void n_1() {

void n_6() {
    cout << "Task 6: Smart Home" << endl;
    bool isDoorOpen;
    int time;
    
    cout << "Is door open? (1 - yes, 0 - no): ";
    cin >> isDoorOpen;
    cout << "Enter time (0-23): ";
    cin >> time;
    
    if (time < 0 || time > 23) {
        cout << "Error: invalid time!" << endl;
    } else {
        if (isDoorOpen) {
            if (time > 22 || time < 6) {
                cout << "Alarm ON - alarm activated!" << endl;
            } else {
                cout << "Welcome!" << endl;
            }
        } else {
            cout << "Door closed, alarm deactivated" << endl;
        }
    }
    cout << endl;
}

void n_7() {
    cout << "Task 7: Rock, Paper, Scissors" << endl;
    
 
    srand(time(0));
    
    int computerChoice = rand() % 3; 
    int userChoice;
    
    cout << "Make your choice:" << endl;
    cout << "0 - Rock" << endl;
    cout << "1 - Scissors" << endl;
    cout << "2 - Paper" << endl;
    cout << "Your choice: ";
    cin >> userChoice;
    
    if (userChoice < 0 || userChoice > 2) {
        cout << "Error: invalid choice!" << endl;
        return;
    }
    
    string choices[3] = {"Rock", "Scissors", "Paper"};
    
    cout << "Your choice: " << choices[userChoice] << endl;
    cout << "Computer's choice: " << choices[computerChoice] << endl;
    
    if (userChoice == computerChoice) {
        cout << "Draw!" << endl;
    } else if ((userChoice == 0 && computerChoice == 1) || 
               (userChoice == 1 && computerChoice == 2) || 
               (userChoice == 2 && computerChoice == 0)) {
        cout << "You won!" << endl;
    } else {
        cout << "Computer won!" << endl;
    }
    cout << endl;
}

int main() {
   
    n_1();
    n_2();
    n_3();
    n_4();
    n_5();
    n_6();
    n_7();
    
    return 0;
}
Use Control + Shift + m to toggle the tab key moving focus. Alternatively, use esc then tab to move to the next interactive element on the page.
New File at / · Fakeqq-fake/para-number-1 
