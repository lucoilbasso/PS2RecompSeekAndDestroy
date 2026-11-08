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

// Function: entry_001d11a0
// Address: 0x1d11a0 - 0x1d11ac
void entry_001d11a0_0x1d11a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d11a0_0x1d11a0");
#endif

    ctx->pc = 0x1d11a0u;

    // 0x1d11a0: 0xffb00460  sd          $s0, 0x460($sp)
    ctx->pc = 0x1d11a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 16));
    // 0x1d11a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d11a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11a8: 0xffb10468  sd          $s1, 0x468($sp)
    ctx->pc = 0x1d11a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 17));
    ctx->pc = 0x1d11acu;
}
