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

// Function: sceSifQueryTotalFreeMemSize
// Address: 0x1b5a20 - 0x1b5a90
void sceSifQueryTotalFreeMemSize_0x1b5a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifQueryTotalFreeMemSize_0x1b5a20");
#endif

    switch (ctx->pc) {
        case 0x1b5a70u: goto label_1b5a70;
        default: break;
    }

    ctx->pc = 0x1b5a20u;

    // 0x1b5a20: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b5a24: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5a24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b5a28: 0x8c43aa1c  lw          $v1, -0x55E4($v0)
    ctx->pc = 0x1b5a28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24AA1Cu));
    // 0x1b5a2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b5a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b5a30: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5A30u;
    {
        const bool branch_taken_0x1b5a30 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A30u;
        // 0x1b5a34: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a30) {
            ctx->pc = 0x1B5A40u;
            goto label_1b5a40;
        }
    }
    ctx->pc = 0x1B5A38u;
    // 0x1b5a38: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B5A38u;
    {
        const bool branch_taken_0x1b5a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A38u;
        // 0x1b5a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a38) {
            ctx->pc = 0x1B5A80u;
            goto label_1b5a80;
        }
    }
    ctx->pc = 0x1B5A40u;
label_1b5a40:
    // 0x1b5a40: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b5a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b5a44: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b5a44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b5a48: 0x2484b240  addiu       $a0, $a0, -0x4DC0
    ctx->pc = 0x1b5a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947392));
    // 0x1b5a4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b5a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b5a50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5a54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b5a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b5a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a60: 0x2609b280  addiu       $t1, $s0, -0x4D80
    ctx->pc = 0x1b5a60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947456));
    // 0x1b5a64: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b5a64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5a68: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B5A68u;
    SET_GPR_U32(ctx, 31, 0x1B5A70u);
    ctx->pc = 0x1B5A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A68u;
    // 0x1b5a6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B5A68u, 0x1B5A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A70u;
label_1b5a70:
    // 0x1b5a70: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5A70u;
    {
        const bool branch_taken_0x1b5a70 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b5a70) {
            ctx->pc = 0x1B5A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5A70u;
            // 0x1b5a74: 0x8e02b280  lw          $v0, -0x4D80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5A80u;
            goto label_1b5a80;
        }
    }
    ctx->pc = 0x1B5A78u;
    // 0x1b5a78: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b5a7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b5a80:
    // 0x1b5a80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b5a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5a84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b5a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5a88: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A88u;
        // 0x1b5a8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5A90u;
}
