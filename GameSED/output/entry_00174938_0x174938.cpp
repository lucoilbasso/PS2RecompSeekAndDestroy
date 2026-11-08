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

// Function: entry_00174938
// Address: 0x174938 - 0x17495c
void entry_00174938_0x174938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174938_0x174938");
#endif

    ctx->pc = 0x174938u;

    // 0x174938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17493c: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x17493cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x174940: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x174940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x174944: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x174944u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x174948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17494c: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x17494cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x174950: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x174950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x174954: 0x805d118  j           func_174460
    ctx->pc = 0x174954u;
    ctx->pc = 0x174958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174954u;
    // 0x174958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x17495Cu;
}
