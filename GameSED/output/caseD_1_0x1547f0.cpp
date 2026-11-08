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

// Function: caseD_1
// Address: 0x1547f0 - 0x154810
void caseD_1_0x1547f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1547f0");
#endif

    ctx->pc = 0x1547f0u;

    // 0x1547f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1547f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1547f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1547f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1547f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1547f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1547fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1547fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154800: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x154800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x154804: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154808: 0x8053a86  j           func_14EA18
    ctx->pc = 0x154808u;
    ctx->pc = 0x15480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154808u;
    // 0x15480c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EA18u;
    ApTankBoneMarker__FP7ApcTank_0x14ea18(rdram, ctx, runtime); return;
    ctx->pc = 0x154810u;
}
