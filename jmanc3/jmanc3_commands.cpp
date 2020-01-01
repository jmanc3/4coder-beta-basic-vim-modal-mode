
void 
set_mode(Application_Links *app, i64 target_mode) {
    // This sets the mode of every buffer rather than just the one we are on
    for (Buffer_ID buffer_it = get_buffer_next(app, 0, Access_Always);
         buffer_it != 0;
         buffer_it = get_buffer_next(app, buffer_it, Access_Always)) {
        Buffer_ID bufferID = buffer_it;
        Managed_Scope scope = buffer_get_managed_scope(app, bufferID);
        Command_Map_ID* map_id_ptr = scope_attachment(app, scope, buffer_map_id, Command_Map_ID);
        *map_id_ptr = target_mode;
    }
    
    auto_indent_line_at_cursor(app);
    set_mark(app);
}

CUSTOM_COMMAND_SIG(jmanc3_start_modal_mode) {
    set_mode(app, mapid_modal);
}

CUSTOM_COMMAND_SIG(jmanc3_start_insert_mode) {
    set_mode(app, mapid_insert);
}