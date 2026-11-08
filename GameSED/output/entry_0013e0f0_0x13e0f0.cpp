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

// Function: entry_0013e0f0
// Address: 0x13e0f0 - 0x13e0f8
void entry_0013e0f0_0x13e0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e0f0_0x13e0f0");
#endif

    ctx->pc = 0x13e0f0u;

    // 0x13e0f0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13e0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x13e0f4: 0x0  nop
    ctx->pc = 0x13e0f4u;
    // NOP
    ctx->pc = 0x13e0f8u;
}
