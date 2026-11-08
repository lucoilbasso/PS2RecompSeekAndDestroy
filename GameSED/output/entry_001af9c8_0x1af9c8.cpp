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

// Function: entry_001af9c8
// Address: 0x1af9c8 - 0x1af9d0
void entry_001af9c8_0x1af9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af9c8_0x1af9c8");
#endif

    ctx->pc = 0x1af9c8u;

    // 0x1af9c8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1af9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x1af9cc: 0x0  nop
    ctx->pc = 0x1af9ccu;
    // NOP
    ctx->pc = 0x1af9d0u;
}
