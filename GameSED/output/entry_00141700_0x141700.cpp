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

// Function: entry_00141700
// Address: 0x141700 - 0x141714
void entry_00141700_0x141700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141700_0x141700");
#endif

    ctx->pc = 0x141700u;

    // 0x141700: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x141700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x141704: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x141704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x141708: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x141708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14170c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x14170cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x141710: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x141710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->pc = 0x141714u;
}
