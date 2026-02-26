#include "static_model_unified.h"

IedModel iedModel_Geral = {
    .name = "MoveUFF_Geral",
    .firstChild = &iedModel_B1EBK  /* Sem o cast! Isso mata o warning */
};