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

// Function: entry_001290cc
// Address: 0x1290cc - 0x1290dc
void entry_001290cc_0x1290cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001290cc_0x1290cc");
#endif

    ctx->pc = 0x1290ccu;

    // 0x1290cc: 0x1012  mflo        $v0
    ctx->pc = 0x1290ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1290d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1290d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1290d4: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1290d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x1290d8: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x1290d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    ctx->pc = 0x1290dcu;
}
