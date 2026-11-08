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

// Function: caseD_6
// Address: 0x14e710 - 0x14e77c
void caseD_6_0x14e710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x14e710");
#endif

    switch (ctx->pc) {
        case 0x14e718u: goto label_14e718;
        case 0x14e730u: goto label_14e730;
        case 0x14e748u: goto label_14e748;
        default: break;
    }

    ctx->pc = 0x14e710u;

    // 0x14e710: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14E710u;
    SET_GPR_U32(ctx, 31, 0x14E718u);
    ctx->pc = 0x14E714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E710u;
    // 0x14e714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14E710u, 0x14E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E718u;
label_14e718:
    // 0x14e718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e71c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14e71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e720: 0x8c530030  lw          $s3, 0x30($v0)
    ctx->pc = 0x14e720u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x14e724: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e728: 0xc0557d0  jal         func_155F40
    ctx->pc = 0x14E728u;
    SET_GPR_U32(ctx, 31, 0x14E730u);
    ctx->pc = 0x14E72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E728u;
    // 0x14e72c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F40u, 0x14E728u, 0x14E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E730u;
label_14e730:
    // 0x14e730: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14e730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e734: 0x8e260690  lw          $a2, 0x690($s1)
    ctx->pc = 0x14e734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14e738: 0x2d02825  or          $a1, $s6, $s0
    ctx->pc = 0x14e738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 16));
    // 0x14e73c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x14e73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e740: 0xc05ac44  jal         func_16B110
    ctx->pc = 0x14E740u;
    SET_GPR_U32(ctx, 31, 0x14E748u);
    ctx->pc = 0x14E744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E740u;
    // 0x14e744: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B110u, 0x14E740u, 0x14E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E748u;
label_14e748:
    // 0x14e748: 0x8e2301b0  lw          $v1, 0x1B0($s1)
    ctx->pc = 0x14e748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x14e74c: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x14E74Cu;
    {
        const bool branch_taken_0x14e74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E74Cu;
        // 0x14e750: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e74c) {
            ctx->pc = 0x14E8C0u;
            return;
        }
    }
    ctx->pc = 0x14E754u;
    // 0x14e754: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x14e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x14e758: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x14e758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x14e75c: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x14E75Cu;
    {
        const bool branch_taken_0x14e75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E75Cu;
        // 0x14e760: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e75c) {
            ctx->pc = 0x14E8C0u;
            return;
        }
    }
    ctx->pc = 0x14E764u;
    // 0x14e764: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e768: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E768u;
    {
        const bool branch_taken_0x14e768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E768u;
        // 0x14e76c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e768) {
            ctx->pc = 0x14E77Cu;
            return;
        }
    }
    ctx->pc = 0x14E770u;
    // 0x14e770: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14e770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14e774: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14E774u;
    {
        const bool branch_taken_0x14e774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e774) {
            ctx->pc = 0x14E780u;
            return;
        }
    }
    ctx->pc = 0x14E77Cu;
}
