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

// Function: CreateTankPropellerEffect__Fi
// Address: 0x132820 - 0x13285c
void CreateTankPropellerEffect__Fi_0x132820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateTankPropellerEffect__Fi_0x132820");
#endif

    switch (ctx->pc) {
        case 0x132850u: goto label_132850;
        default: break;
    }

    ctx->pc = 0x132820u;

    // 0x132820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132824: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x132824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x132828: 0x2c84000c  sltiu       $a0, $a0, 0xC
    ctx->pc = 0x132828u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x13282c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13282Cu;
    {
        const bool branch_taken_0x13282c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13282Cu;
        // 0x132830: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13282c) {
            ctx->pc = 0x132850u;
            goto label_132850;
        }
    }
    ctx->pc = 0x132834u;
    // 0x132834: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x132834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x132838: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x132838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13283c: 0x8c84a2e8  lw          $a0, -0x5D18($a0)
    ctx->pc = 0x13283cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943464)));
    // 0x132840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x132844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132848: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x132848u;
    SET_GPR_U32(ctx, 31, 0x132850u);
    ctx->pc = 0x13284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132848u;
    // 0x13284c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x132848u, 0x132850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132850u;
label_132850:
    // 0x132850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132854: 0x3e00008  jr          $ra
    ctx->pc = 0x132854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132854u;
        // 0x132858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13285Cu;
}
