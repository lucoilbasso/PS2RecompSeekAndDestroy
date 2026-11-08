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

// Function: entry_001bd480
// Address: 0x1bd480 - 0x1bd488
void entry_001bd480_0x1bd480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd480_0x1bd480");
#endif

    ctx->pc = 0x1bd480u;

    // 0x1bd480: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x1bd480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x1bd484: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    ctx->pc = 0x1bd488u;
}
