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

// Function: _decodeOrSkip
// Address: 0x1bde70 - 0x1bdeb4
void _decodeOrSkip_0x1bde70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decodeOrSkip_0x1bde70");
#endif

    switch (ctx->pc) {
        case 0x1bde98u: goto label_1bde98;
        case 0x1bdea8u: goto label_1bdea8;
        default: break;
    }

    ctx->pc = 0x1bde70u;

    // 0x1bde70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bde70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bde74: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1bde74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bde78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bde7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bde7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bde80: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x1bde80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1bde84: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x1bde84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x1bde88: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDE88u;
    {
        const bool branch_taken_0x1bde88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bde88) {
            ctx->pc = 0x1BDEA0u;
            goto label_1bdea0;
        }
    }
    ctx->pc = 0x1BDE90u;
    // 0x1bde90: 0xc06f7ae  jal         func_1BDEB8
    ctx->pc = 0x1BDE90u;
    SET_GPR_U32(ctx, 31, 0x1BDE98u);
    ctx->pc = 0x1BDE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE90u;
    // 0x1bde94: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDEB8u, 0x1BDE90u, 0x1BDE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE98u;
label_1bde98:
    // 0x1bde98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDE98u;
    {
        const bool branch_taken_0x1bde98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE98u;
        // 0x1bde9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde98) {
            ctx->pc = 0x1BDEACu;
            goto label_1bdeac;
        }
    }
    ctx->pc = 0x1BDEA0u;
label_1bdea0:
    // 0x1bdea0: 0xc06f756  jal         func_1BDD58
    ctx->pc = 0x1BDEA0u;
    SET_GPR_U32(ctx, 31, 0x1BDEA8u);
    ctx->pc = 0x1BDEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDEA0u;
    // 0x1bdea4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD58u, 0x1BDEA0u, 0x1BDEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEA8u;
label_1bdea8:
    // 0x1bdea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bdeac:
    // 0x1bdeac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEACu;
        // 0x1bdeb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDEB4u;
}
