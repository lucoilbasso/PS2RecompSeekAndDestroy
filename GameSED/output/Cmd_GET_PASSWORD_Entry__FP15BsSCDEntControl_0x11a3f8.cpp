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

// Function: Cmd_GET_PASSWORD_Entry__FP15BsSCDEntControl
// Address: 0x11a3f8 - 0x11a49c
void Cmd_GET_PASSWORD_Entry__FP15BsSCDEntControl_0x11a3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_PASSWORD_Entry__FP15BsSCDEntControl_0x11a3f8");
#endif

    switch (ctx->pc) {
        case 0x11a410u: goto label_11a410;
        case 0x11a420u: goto label_11a420;
        case 0x11a448u: goto label_11a448;
        default: break;
    }

    ctx->pc = 0x11a3f8u;

    // 0x11a3f8: 0x8f828968  lw          $v0, -0x7698($gp)
    ctx->pc = 0x11a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
    // 0x11a3fc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a3fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a400: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A400u;
    {
        const bool branch_taken_0x11a400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A400u;
        // 0x11a404: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a400) {
            ctx->pc = 0x11A418u;
            goto label_11a418;
        }
    }
    ctx->pc = 0x11A408u;
    // 0x11a408: 0xc045e58  jal         func_117960
    ctx->pc = 0x11A408u;
    SET_GPR_U32(ctx, 31, 0x11A410u);
    ctx->pc = 0x11A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A408u;
    // 0x11a40c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117960u, 0x11A408u, 0x11A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A410u;
label_11a410:
    // 0x11a410: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11A410u;
    {
        const bool branch_taken_0x11a410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A410u;
        // 0x11a414: 0x8f838968  lw          $v1, -0x7698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a410) {
            ctx->pc = 0x11A424u;
            goto label_11a424;
        }
    }
    ctx->pc = 0x11A418u;
label_11a418:
    // 0x11a418: 0xc045ef0  jal         func_117BC0
    ctx->pc = 0x11A418u;
    SET_GPR_U32(ctx, 31, 0x11A420u);
    ctx->pc = 0x11A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A418u;
    // 0x11a41c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BC0u, 0x11A418u, 0x11A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A420u;
label_11a420:
    // 0x11a420: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x11a420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_11a424:
    // 0x11a424: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11a424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11a428: 0x24483608  addiu       $t0, $v0, 0x3608
    ctx->pc = 0x11a428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 13832));
    // 0x11a42c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x11a42cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a430: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x11a430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x11a434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a438: 0xaf838968  sw          $v1, -0x7698($gp)
    ctx->pc = 0x11a438u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936936), GPR_U32(ctx, 3));
    // 0x11a43c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11a43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a440: 0x3409fffa  ori         $t1, $zero, 0xFFFA
    ctx->pc = 0x11a440u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x11a444: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x11a444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_11a448:
    // 0x11a448: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x11a448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x11a44c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A44Cu;
    {
        const bool branch_taken_0x11a44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A44Cu;
        // 0x11a450: 0x30a2003f  andi        $v0, $a1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a44c) {
            ctx->pc = 0x11A474u;
            goto label_11a474;
        }
    }
    ctx->pc = 0x11A454u;
    // 0x11a454: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x11a454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11a458: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11a458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x11a45c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x11a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x11a460: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x11a460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x11a464: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x11a464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11a468: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x11a468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x11a46c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x11a46cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x11a470: 0x30a2003f  andi        $v0, $a1, 0x3F
    ctx->pc = 0x11a470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_11a474:
    // 0x11a474: 0x52982  srl         $a1, $a1, 6
    ctx->pc = 0x11a474u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x11a478: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x11a478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x11a47c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11a47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11a480: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x11a480u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a484: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11a484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11a488: 0x4c1ffef  bgez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11A488u;
    {
        const bool branch_taken_0x11a488 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A488u;
        // 0x11a48c: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a488) {
            ctx->pc = 0x11A448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a448;
        }
    }
    ctx->pc = 0x11A490u;
    // 0x11a490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a494: 0x3e00008  jr          $ra
    ctx->pc = 0x11A494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A494u;
        // 0x11a498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A49Cu;
}
