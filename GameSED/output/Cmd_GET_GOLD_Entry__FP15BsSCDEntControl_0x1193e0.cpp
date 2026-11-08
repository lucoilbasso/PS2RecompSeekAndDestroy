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

// Function: Cmd_GET_GOLD_Entry__FP15BsSCDEntControl
// Address: 0x1193e0 - 0x119450
void Cmd_GET_GOLD_Entry__FP15BsSCDEntControl_0x1193e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_GOLD_Entry__FP15BsSCDEntControl_0x1193e0");
#endif

    switch (ctx->pc) {
        case 0x1193f8u: goto label_1193f8;
        case 0x119414u: goto label_119414;
        default: break;
    }

    ctx->pc = 0x1193e0u;

    // 0x1193e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1193e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1193e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1193e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1193e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1193e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1193ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1193ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1193f0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1193F0u;
    SET_GPR_U32(ctx, 31, 0x1193F8u);
    ctx->pc = 0x1193F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1193F0u;
    // 0x1193f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1193F0u, 0x1193F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193F8u;
label_1193f8:
    // 0x1193f8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1193f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1193fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1193fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119400: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x119400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x119404: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x119404u;
    {
        const bool branch_taken_0x119404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x119408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119404u;
        // 0x119408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119404) {
            ctx->pc = 0x119420u;
            goto label_119420;
        }
    }
    ctx->pc = 0x11940Cu;
    // 0x11940c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11940Cu;
    SET_GPR_U32(ctx, 31, 0x119414u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11940Cu, 0x119414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119414u;
label_119414:
    // 0x119414: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x119414u;
    {
        const bool branch_taken_0x119414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119414) {
            ctx->pc = 0x119418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119414u;
            // 0x119418: 0x2228818  mult        $s1, $s1, $v0 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x119420u;
            goto label_119420;
        }
    }
    ctx->pc = 0x11941Cu;
    // 0x11941c: 0xaf91896c  sw          $s1, -0x7694($gp)
    ctx->pc = 0x11941cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 17));
label_119420:
    // 0x119420: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x119420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x119424: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x119424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x119428: 0x3463869f  ori         $v1, $v1, 0x869F
    ctx->pc = 0x119428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34463);
    // 0x11942c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11942cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119430: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x119434: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119438: 0x62202a  slt         $a0, $v1, $v0
    ctx->pc = 0x119438u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11943c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11943cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119440: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x119440u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x119444: 0xaf82896c  sw          $v0, -0x7694($gp)
    ctx->pc = 0x119444u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 2));
    // 0x119448: 0x3e00008  jr          $ra
    ctx->pc = 0x119448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119448u;
        // 0x11944c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119450u;
}
