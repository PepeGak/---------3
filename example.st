PROGRAM L1
    VAR
        a: INT := 5;
        b: INT := 10;
        c: INT := 1;
        d: INT;
    END_VAR

    FOR i TO 10 DO
        IF i = a THEN
            c := c + a;
            c := c * b;
        ELSIF i = b THEN
            c := a + b;
        END_IF
    END_FOR

    WHILE c <> 0 DO
        c := c - 1;
        a := a / 2;
    END_WHILE
END_PROGRAM