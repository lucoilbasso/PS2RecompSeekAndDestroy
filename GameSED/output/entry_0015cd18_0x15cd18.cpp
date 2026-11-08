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

// Function: entry_0015cd18
// Address: 0x15cd18 - 0x15cd64
void entry_0015cd18_0x15cd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cd18_0x15cd18");
#endif

    switch (ctx->pc) {
        case 0x15cd40u: goto label_15cd40;
        default: break;
    }

    ctx->pc = 0x15cd18u;

label_15cd18:
    // 0x15cd18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15cd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15cd1c:
    // 0x15cd1c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15cd20:
    if (ctx->pc == 0x15CD20u) {
        ctx->pc = 0x15CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD1Cu;
        // 0x15cd20: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD24u;
        goto label_15cd24;
    }
    ctx->pc = 0x15CD1Cu;
    {
        const bool branch_taken_0x15cd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cd1c) {
            ctx->pc = 0x15CD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CD1Cu;
            // 0x15cd20: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CD68u;
            return;
        }
    }
    ctx->pc = 0x15CD24u;
label_15cd24:
    // 0x15cd24: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cd28:
    // 0x15cd28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cd2c:
    // 0x15cd2c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cd30:
    // 0x15cd30: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cd30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cd34:
    // 0x15cd34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cd38:
    // 0x15cd38: 0x60f809  jalr        $v1
label_15cd3c:
    if (ctx->pc == 0x15CD3Cu) {
        ctx->pc = 0x15CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD38u;
        // 0x15cd3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD40u;
        goto label_15cd40;
    }
    ctx->pc = 0x15CD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CD40u);
        ctx->pc = 0x15CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD38u;
        // 0x15cd3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CD38u, 0x15CD40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CD40u;
label_15cd40:
    // 0x15cd40: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15cd40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15cd44:
    // 0x15cd44: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cd48:
    if (ctx->pc == 0x15CD48u) {
        ctx->pc = 0x15CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD44u;
        // 0x15cd48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD4Cu;
        goto label_15cd4c;
    }
    ctx->pc = 0x15CD44u;
    {
        const bool branch_taken_0x15cd44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD44u;
        // 0x15cd48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd44) {
            ctx->pc = 0x15CD64u;
            return;
        }
    }
    ctx->pc = 0x15CD4Cu;
label_15cd4c:
    // 0x15cd4c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cd50:
    // 0x15cd50: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cd54:
    // 0x15cd54: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cd54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cd58:
    // 0x15cd58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cd5c:
    // 0x15cd5c: 0x60f809  jalr        $v1
label_15cd60:
    if (ctx->pc == 0x15CD60u) {
        ctx->pc = 0x15CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD5Cu;
        // 0x15cd60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD64u;
        goto label_fallthrough_0x15cd5c;
    }
    ctx->pc = 0x15CD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CD64u);
        ctx->pc = 0x15CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD5Cu;
        // 0x15cd60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CD5Cu, 0x15CD64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15cd5c:
    ctx->pc = 0x15CD64u;
}
