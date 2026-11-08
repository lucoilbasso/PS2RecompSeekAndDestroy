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

// Function: entry_0011d6a0
// Address: 0x11d6a0 - 0x11d6ac
void entry_0011d6a0_0x11d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d6a0_0x11d6a0");
#endif

    ctx->pc = 0x11d6a0u;

    // 0x11d6a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x11d6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11d6a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11d6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6a8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x11d6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    ctx->pc = 0x11d6acu;
}
