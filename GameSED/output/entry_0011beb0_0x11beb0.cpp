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

// Function: entry_0011beb0
// Address: 0x11beb0 - 0x11beb4
void entry_0011beb0_0x11beb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011beb0_0x11beb0");
#endif

    ctx->pc = 0x11beb0u;

    // 0x11beb0: 0x108300  sll         $s0, $s0, 12
    ctx->pc = 0x11beb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x11beb4u;
}
