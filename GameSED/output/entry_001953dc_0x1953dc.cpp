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

// Function: entry_001953dc
// Address: 0x1953dc - 0x1953e8
void entry_001953dc_0x1953dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001953dc_0x1953dc");
#endif

    ctx->pc = 0x1953dcu;

    // 0x1953dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1953dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1953e0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1953e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1953e4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1953e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1953e8u;
}
