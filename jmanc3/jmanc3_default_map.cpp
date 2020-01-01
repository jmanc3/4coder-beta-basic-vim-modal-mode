/*
4coder_default_map.cpp - Instantiate default bindings.
*/

// TOP

function void
setup_default_mapping(Mapping *mapping, i64 global_id, i64 modal_id, i64 insert_id){
    MappingScope();
    SelectMapping(mapping);
    
    // THESE ARE SHARED BETWEEN MODAL AND INSERT MODE
    SelectMap(global_id);
    BindCore(default_startup, CoreCode_Startup);
    BindCore(default_try_exit, CoreCode_TryExit);
    Bind(keyboard_macro_start_recording , KeyCode_U, KeyCode_Control);
    Bind(keyboard_macro_finish_recording, KeyCode_U, KeyCode_Control, KeyCode_Shift);
    Bind(keyboard_macro_replay,           KeyCode_U, KeyCode_Alt);
    Bind(change_active_panel,           KeyCode_Comma, KeyCode_Control);
    Bind(change_active_panel_backwards, KeyCode_Comma, KeyCode_Control, KeyCode_Shift);
    Bind(interactive_new,               KeyCode_N, KeyCode_Control);
    Bind(interactive_open_or_new,       KeyCode_O, KeyCode_Control);
    Bind(open_in_other,                 KeyCode_O, KeyCode_Alt);
    Bind(interactive_kill_buffer,       KeyCode_K, KeyCode_Control);
    Bind(interactive_switch_buffer,     KeyCode_I, KeyCode_Control);
    Bind(project_go_to_root_directory,  KeyCode_H, KeyCode_Control);
    Bind(save_all_dirty_buffers,        KeyCode_S, KeyCode_Control, KeyCode_Shift);
    Bind(change_to_build_panel,         KeyCode_Period, KeyCode_Alt);
    Bind(close_build_panel,             KeyCode_Comma, KeyCode_Alt);
    Bind(goto_next_jump,                KeyCode_N, KeyCode_Alt);
    Bind(goto_prev_jump,                KeyCode_N, KeyCode_Alt, KeyCode_Shift);
    Bind(build_in_build_panel,          KeyCode_M, KeyCode_Alt);
    Bind(goto_first_jump,               KeyCode_M, KeyCode_Alt, KeyCode_Shift);
    Bind(toggle_filebar,                KeyCode_B, KeyCode_Alt);
    Bind(execute_any_cli,               KeyCode_Z, KeyCode_Alt);
    Bind(execute_previous_cli,          KeyCode_Z, KeyCode_Alt, KeyCode_Shift);
    Bind(command_lister,                KeyCode_X, KeyCode_Alt);
    Bind(project_command_lister,        KeyCode_X, KeyCode_Alt, KeyCode_Shift);
    Bind(list_all_functions_current_buffer, KeyCode_I, KeyCode_Control, KeyCode_Shift);
    Bind(project_fkey_command, KeyCode_F1);
    Bind(project_fkey_command, KeyCode_F2);
    Bind(project_fkey_command, KeyCode_F3);
    Bind(project_fkey_command, KeyCode_F4);
    Bind(project_fkey_command, KeyCode_F5);
    Bind(project_fkey_command, KeyCode_F6);
    Bind(project_fkey_command, KeyCode_F7);
    Bind(project_fkey_command, KeyCode_F8);
    Bind(project_fkey_command, KeyCode_F9);
    Bind(project_fkey_command, KeyCode_F10);
    Bind(project_fkey_command, KeyCode_F11);
    Bind(project_fkey_command, KeyCode_F12);
    Bind(project_fkey_command, KeyCode_F13);
    Bind(project_fkey_command, KeyCode_F14);
    Bind(project_fkey_command, KeyCode_F15);
    Bind(project_fkey_command, KeyCode_F16);
    Bind(exit_4coder,          KeyCode_F4, KeyCode_Alt);
    Bind(undo,                 KeyCode_Z, KeyCode_Control);
    BindMouseWheel(mouse_wheel_scroll);
    BindMouseWheel(mouse_wheel_change_face_size, KeyCode_Control);
    
    // INSERT MODE BINDINGS
    SelectMap(insert_id);
    ParentMap(global_id);
    Bind(jmanc3_start_modal_mode,    KeyCode_Escape);
    Bind(auto_indent_line_at_cursor, KeyCode_Tab);
    Bind(backspace_char,             KeyCode_Backspace);
    Bind(delete_char,                KeyCode_Delete);
    BindTextInput(write_text_and_auto_indent);
    
    // NORMAL MODE BINDINGS
    SelectMap(modal_id);
    ParentMap(global_id);
    Bind(jmanc3_start_insert_mode, KeyCode_I);
    Bind(move_left,  KeyCode_H);
    Bind(move_down,  KeyCode_J);
    Bind(move_up,    KeyCode_K);
    Bind(move_right, KeyCode_L);
    Bind(interactive_switch_buffer,     KeyCode_I, KeyCode_Control);

}

// BOTTOM

