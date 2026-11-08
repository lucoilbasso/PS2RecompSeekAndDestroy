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

// Function: entry_0013c28c
// Address: 0x13c28c - 0x13c290
void entry_0013c28c_0x13c28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c28c_0x13c28c");
#endif

    ctx->pc = 0x13c28cu;

    // 0x13c28c: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x13c28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    ctx->pc = 0x13c290u;
}
