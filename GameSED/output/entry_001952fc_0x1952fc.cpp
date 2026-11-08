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

// Function: entry_001952fc
// Address: 0x1952fc - 0x195308
void entry_001952fc_0x1952fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001952fc_0x1952fc");
#endif

    ctx->pc = 0x1952fcu;

    // 0x1952fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1952fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x195300: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x195300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x195304: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x195304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x195308u;
}
