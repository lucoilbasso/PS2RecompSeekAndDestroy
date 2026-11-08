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

// Function: ApVwEntInqTempAngleArray__Fi
// Address: 0x112860 - 0x1128ac
void ApVwEntInqTempAngleArray__Fi_0x112860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApVwEntInqTempAngleArray__Fi_0x112860");
#endif

    switch (ctx->pc) {
        case 0x11288cu: goto label_11288c;
        default: break;
    }

    ctx->pc = 0x112860u;

    // 0x112860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11286c: 0x2a020080  slti        $v0, $s0, 0x80
    ctx->pc = 0x11286cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x112870: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x112870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x112874: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112874u;
    {
        const bool branch_taken_0x112874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112874u;
        // 0x112878: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112874) {
            ctx->pc = 0x11288Cu;
            goto label_11288c;
        }
    }
    ctx->pc = 0x11287Cu;
    // 0x11287c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11287cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x112880: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x112880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x112884: 0xc068186  jal         func_1A0618
    ctx->pc = 0x112884u;
    SET_GPR_U32(ctx, 31, 0x11288Cu);
    ctx->pc = 0x112888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112884u;
    // 0x112888: 0x24a53e68  addiu       $a1, $a1, 0x3E68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x112884u, 0x11288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11288Cu;
label_11288c:
    // 0x11288c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x11288cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x112890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112894: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x112894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112898: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x112898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x11289c: 0x2421ff30  addiu       $at, $at, -0xD0
    ctx->pc = 0x11289cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294967088));
    // 0x1128a0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1128a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1128a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1128A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1128A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128A4u;
        // 0x1128a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1128A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1128ACu;
}
