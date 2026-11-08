#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00149054
// Address: 0x149054 - 0x149058
void entry_00149054_0x149054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149054_0x149054");
#endif

    ctx->pc = 0x149054u;

    // 0x149054: 0x53a03  sra         $a3, $a1, 8
    ctx->pc = 0x149054u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 8));
    ctx->pc = 0x149058u;
}
