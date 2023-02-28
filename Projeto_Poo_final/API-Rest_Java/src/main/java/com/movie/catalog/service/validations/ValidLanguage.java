package com.movie.catalog.service.validations;

import javax.validation.Constraint;
import javax.validation.Payload;
import java.lang.annotation.Documented;
import java.lang.annotation.Retention;
import java.lang.annotation.Target;

import static java.lang.annotation.ElementType.FIELD;
import static java.lang.annotation.ElementType.PARAMETER;
import static java.lang.annotation.RetentionPolicy.RUNTIME;

@Documented
@Retention(RUNTIME)
@Target({FIELD, PARAMETER})
@Constraint(validatedBy = LanguageValidator.class)
public @interface ValidLanguage {

    String message() default "O idioma é inválido.";

    Class<?>[] groups() default {};

    Class<? extends Payload>[] payload() default {};
}