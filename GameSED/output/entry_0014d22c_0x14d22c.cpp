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

// Function: entry_0014d22c
// Address: 0x14d22c - 0x14d230
void entry_0014d22c_0x14d22c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d22c_0x14d22c");
#endif

    ctx->pc = 0x14d22cu;

    // 0x14d22c: 0x34630a00  ori         $v1, $v1, 0xA00
    ctx->pc = 0x14d22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2560);
    ctx->pc = 0x14d230u;
}
