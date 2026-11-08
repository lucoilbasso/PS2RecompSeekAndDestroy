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

// Function: entry_00145acc
// Address: 0x145acc - 0x145ad0
void entry_00145acc_0x145acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145acc_0x145acc");
#endif

    ctx->pc = 0x145accu;

    // 0x145acc: 0x34424d4d  ori         $v0, $v0, 0x4D4D
    ctx->pc = 0x145accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19789);
    ctx->pc = 0x145ad0u;
}
