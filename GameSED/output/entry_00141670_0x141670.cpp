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

// Function: entry_00141670
// Address: 0x141670 - 0x141684
void entry_00141670_0x141670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141670_0x141670");
#endif

    ctx->pc = 0x141670u;

    // 0x141670: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x141670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x141674: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x141674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x141678: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x141678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14167c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x14167cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x141680: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x141680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->pc = 0x141684u;
}
