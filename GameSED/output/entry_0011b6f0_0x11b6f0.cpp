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

// Function: entry_0011b6f0
// Address: 0x11b6f0 - 0x11b700
void entry_0011b6f0_0x11b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b6f0_0x11b6f0");
#endif

    ctx->pc = 0x11b6f0u;

    // 0x11b6f0: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x11b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11b6f4: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x11b6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x11b6f8: 0xae0040a0  sw          $zero, 0x40A0($s0)
    ctx->pc = 0x11b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16544), GPR_U32(ctx, 0));
    // 0x11b6fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11b700u;
}
