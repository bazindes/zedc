/*
    db.h
    Created by: baz
    Date: 2019-03-08 20:32
*/

#ifndef _db_h
#define _db_h

#define DB_FILE "/Users/baz/.devpkg/db"
#define DB_DIR "/Users/baz/.devpkg"

int DB_init();
int DB_list();
int DB_update(const char *url);
int DB_find(const char *url);

#endif