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

// Function: entry_00187f60
// Address: 0x187f60 - 0x187ff8
void entry_00187f60_0x187f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187f60_0x187f60");
#endif

    switch (ctx->pc) {
        case 0x187f98u: goto label_187f98;
        case 0x187fb0u: goto label_187fb0;
        case 0x187fc8u: goto label_187fc8;
        case 0x187fd4u: goto label_187fd4;
        case 0x187ff4u: goto label_187ff4;
        default: break;
    }

    ctx->pc = 0x187f60u;

label_187f60:
    // 0x187f60: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x187f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_187f64:
    // 0x187f64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x187f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_187f68:
    // 0x187f68: 0x0  nop
    ctx->pc = 0x187f68u;
    // NOP
label_187f6c:
    // 0x187f6c: 0x0  nop
    ctx->pc = 0x187f6cu;
    // NOP
label_187f70:
    // 0x187f70: 0x0  nop
    ctx->pc = 0x187f70u;
    // NOP
label_187f74:
    // 0x187f74: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
label_187f78:
    if (ctx->pc == 0x187F78u) {
        ctx->pc = 0x187F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F74u;
        // 0x187f78: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F7Cu;
        goto label_187f7c;
    }
    ctx->pc = 0x187F74u;
    {
        const bool branch_taken_0x187f74 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x187F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F74u;
        // 0x187f78: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f74) {
            ctx->pc = 0x187F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187f60;
        }
    }
    ctx->pc = 0x187F7Cu;
label_187f7c:
    // 0x187f7c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x187f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_187f80:
    // 0x187f80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187f84:
    // 0x187f84: 0x244200b8  addiu       $v0, $v0, 0xB8
    ctx->pc = 0x187f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_187f88:
    // 0x187f88: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x187f88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_187f8c:
    // 0x187f8c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x187f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_187f90:
    // 0x187f90: 0x60f809  jalr        $v1
label_187f94:
    if (ctx->pc == 0x187F94u) {
        ctx->pc = 0x187F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F90u;
        // 0x187f94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F98u;
        goto label_187f98;
    }
    ctx->pc = 0x187F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x187F98u);
        ctx->pc = 0x187F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F90u;
        // 0x187f94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187F90u, 0x187F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187F98u;
label_187f98:
    // 0x187f98: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x187f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_187f9c:
    // 0x187f9c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x187f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_187fa0:
    // 0x187fa0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x187fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_187fa4:
    // 0x187fa4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x187fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_187fa8:
    // 0x187fa8: 0x60f809  jalr        $v1
label_187fac:
    if (ctx->pc == 0x187FACu) {
        ctx->pc = 0x187FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FA8u;
        // 0x187fac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FB0u;
        goto label_187fb0;
    }
    ctx->pc = 0x187FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x187FB0u);
        ctx->pc = 0x187FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FA8u;
        // 0x187fac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187FA8u, 0x187FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187FB0u;
label_187fb0:
    // 0x187fb0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x187fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_187fb4:
    // 0x187fb4: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x187fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
label_187fb8:
    // 0x187fb8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x187fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_187fbc:
    // 0x187fbc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x187fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_187fc0:
    // 0x187fc0: 0x60f809  jalr        $v1
label_187fc4:
    if (ctx->pc == 0x187FC4u) {
        ctx->pc = 0x187FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FC0u;
        // 0x187fc4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FC8u;
        goto label_187fc8;
    }
    ctx->pc = 0x187FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x187FC8u);
        ctx->pc = 0x187FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FC0u;
        // 0x187fc4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187FC0u, 0x187FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187FC8u;
label_187fc8:
    // 0x187fc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187fcc:
    // 0x187fcc: 0xc06ab98  jal         func_1AAE60
label_187fd0:
    if (ctx->pc == 0x187FD0u) {
        ctx->pc = 0x187FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FCCu;
        // 0x187fd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FD4u;
        goto label_187fd4;
    }
    ctx->pc = 0x187FCCu;
    SET_GPR_U32(ctx, 31, 0x187FD4u);
    ctx->pc = 0x187FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187FCCu;
    // 0x187fd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x187FCCu, 0x187FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FD4u;
label_187fd4:
    // 0x187fd4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x187fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_187fd8:
    // 0x187fd8: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x187fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_187fdc:
    // 0x187fdc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x187fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_187fe0:
    // 0x187fe0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_187fe4:
    if (ctx->pc == 0x187FE4u) {
        ctx->pc = 0x187FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FE0u;
        // 0x187fe4: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FE8u;
        goto label_187fe8;
    }
    ctx->pc = 0x187FE0u;
    {
        const bool branch_taken_0x187fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FE0u;
        // 0x187fe4: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fe0) {
            ctx->pc = 0x187FF8u;
            return;
        }
    }
    ctx->pc = 0x187FE8u;
label_187fe8:
    // 0x187fe8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x187fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_187fec:
    // 0x187fec: 0xc061c2c  jal         func_1870B0
label_187ff0:
    if (ctx->pc == 0x187FF0u) {
        ctx->pc = 0x187FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FECu;
        // 0x187ff0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FF4u;
        goto label_187ff4;
    }
    ctx->pc = 0x187FECu;
    SET_GPR_U32(ctx, 31, 0x187FF4u);
    ctx->pc = 0x187FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187FECu;
    // 0x187ff0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1870B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1870B0u, 0x187FECu, 0x187FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FF4u;
label_187ff4:
    // 0x187ff4: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x187ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x187ff8u;
}
