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

// Function: entry_001496a0
// Address: 0x1496a0 - 0x1496a4
void entry_001496a0_0x1496a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001496a0_0x1496a0");
#endif

    ctx->pc = 0x1496a0u;

    // 0x1496a0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1496a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    ctx->pc = 0x1496a4u;
}
