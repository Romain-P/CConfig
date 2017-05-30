# Ghoulc  
Simple config parser. Follows Epitech Norm (except the main example).

**config.conf**

    properties.database.name: data
    properties.database.user: root
    properties.database.pass: 
    properties.database.host: localhost

    objects.a.name: test
    objects.a.valid: true
    objects.a.age: 10
    
    objects.b.name: test2
    objects.b.valid: yes
    objects.b.age: -1
    
    lists.int: 1,3,4,5
    lists.string: foo,bar,hello word

**main.c**  

    t_config *config = config_load("config.conf");
    
    char *database = get_string(config, "properties.database.name");
    char *user = get_string(config, "properties.database.user");
    //...
    
    t_key *objects = get_key(config, "objects");
    t_array *array = (t_array *) objects->value;
    for (int i = 0; i < array->length; i++)
      {
        t_key *key = (t_key *key) array->values[i];
        
        char *name = keyget_integer(key, "name");
        bool valid = keyget_boolean(key, "valid");
        int age = keyget_integer(key, "age");
        //...
      }
    
    config_destroy(config);
