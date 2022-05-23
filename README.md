# enjoy-kit

一个c++工具类库....

> FileUtil

- `bool exist(string path);`
- `bool exist(const char *path);`
- `bool del(string path);`
- `bool del(const char *path);`
- `bool copy(const char *src, const char *dest, bool isOverride = false);`
- `bool copy(string src, string dest, bool isOverride = false);`
- `bool mkdir(string path);`
- `bool mkdir(const char *path);`
- `vector<string> ls(string dir);`
- `vector<string> ls(const char *dir);`
- `vector<File> ls_file(string dir, bool onlyFile = true);`
- `vector<File> ls_file(const char *dir, bool onlyFile = true);`