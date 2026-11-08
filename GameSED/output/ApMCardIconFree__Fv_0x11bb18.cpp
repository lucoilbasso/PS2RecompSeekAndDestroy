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

// Function: ApMCardIconFree__Fv
// Address: 0x11bb18 - 0x11bbb4
void ApMCardIconFree__Fv_0x11bb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMCardIconFree__Fv_0x11bb18");
#endif

    switch (ctx->pc) {
        case 0x11bb18u: goto label_11bb18;
        case 0x11bb1cu: goto label_11bb1c;
        case 0x11bb20u: goto label_11bb20;
        case 0x11bb24u: goto label_11bb24;
        case 0x11bb28u: goto label_11bb28;
        case 0x11bb2cu: goto label_11bb2c;
        case 0x11bb30u: goto label_11bb30;
        case 0x11bb34u: goto label_11bb34;
        case 0x11bb38u: goto label_11bb38;
        case 0x11bb3cu: goto label_11bb3c;
        case 0x11bb40u: goto label_11bb40;
        case 0x11bb44u: goto label_11bb44;
        case 0x11bb48u: goto label_11bb48;
        case 0x11bb4cu: goto label_11bb4c;
        case 0x11bb50u: goto label_11bb50;
        case 0x11bb54u: goto label_11bb54;
        case 0x11bb58u: goto label_11bb58;
        case 0x11bb5cu: goto label_11bb5c;
        case 0x11bb60u: goto label_11bb60;
        case 0x11bb64u: goto label_11bb64;
        case 0x11bb68u: goto label_11bb68;
        case 0x11bb6cu: goto label_11bb6c;
        case 0x11bb70u: goto label_11bb70;
        case 0x11bb74u: goto label_11bb74;
        case 0x11bb78u: goto label_11bb78;
        case 0x11bb7cu: goto label_11bb7c;
        case 0x11bb80u: goto label_11bb80;
        case 0x11bb84u: goto label_11bb84;
        case 0x11bb88u: goto label_11bb88;
        case 0x11bb8cu: goto label_11bb8c;
        case 0x11bb90u: goto label_11bb90;
        case 0x11bb94u: goto label_11bb94;
        case 0x11bb98u: goto label_11bb98;
        case 0x11bb9cu: goto label_11bb9c;
        case 0x11bba0u: goto label_11bba0;
        case 0x11bba4u: goto label_11bba4;
        case 0x11bba8u: goto label_11bba8;
        case 0x11bbacu: goto label_11bbac;
        case 0x11bbb0u: goto label_11bbb0;
        default: break;
    }

    ctx->pc = 0x11bb18u;

label_11bb18:
    // 0x11bb18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11bb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11bb1c:
    // 0x11bb1c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_11bb20:
    // 0x11bb20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11bb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11bb24:
    // 0x11bb24: 0x245036d0  addiu       $s0, $v0, 0x36D0
    ctx->pc = 0x11bb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14032));
label_11bb28:
    // 0x11bb28: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x11bb28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11bb2c:
    // 0x11bb2c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_11bb30:
    if (ctx->pc == 0x11BB30u) {
        ctx->pc = 0x11BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB2Cu;
        // 0x11bb30: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB34u;
        goto label_11bb34;
    }
    ctx->pc = 0x11BB2Cu;
    {
        const bool branch_taken_0x11bb2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB2Cu;
        // 0x11bb30: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb2c) {
            ctx->pc = 0x11BB54u;
            goto label_11bb54;
        }
    }
    ctx->pc = 0x11BB34u;
label_11bb34:
    // 0x11bb34: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11bb38:
    // 0x11bb38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11bb3c:
    // 0x11bb3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11bb40:
    // 0x11bb40: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11bb40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11bb44:
    // 0x11bb44: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11bb48:
    // 0x11bb48: 0x60f809  jalr        $v1
label_11bb4c:
    if (ctx->pc == 0x11BB4Cu) {
        ctx->pc = 0x11BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB48u;
        // 0x11bb4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB50u;
        goto label_11bb50;
    }
    ctx->pc = 0x11BB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BB50u);
        ctx->pc = 0x11BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB48u;
        // 0x11bb4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BB48u, 0x11BB50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BB50u;
label_11bb50:
    // 0x11bb50: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x11bb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_11bb54:
    // 0x11bb54: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x11bb54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11bb58:
    // 0x11bb58: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_11bb5c:
    if (ctx->pc == 0x11BB5Cu) {
        ctx->pc = 0x11BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB58u;
        // 0x11bb5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB60u;
        goto label_11bb60;
    }
    ctx->pc = 0x11BB58u;
    {
        const bool branch_taken_0x11bb58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB58u;
        // 0x11bb5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb58) {
            ctx->pc = 0x11BB7Cu;
            goto label_11bb7c;
        }
    }
    ctx->pc = 0x11BB60u;
label_11bb60:
    // 0x11bb60: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11bb64:
    // 0x11bb64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11bb68:
    // 0x11bb68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11bb68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11bb6c:
    // 0x11bb6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11bb70:
    // 0x11bb70: 0x60f809  jalr        $v1
label_11bb74:
    if (ctx->pc == 0x11BB74u) {
        ctx->pc = 0x11BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB70u;
        // 0x11bb74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB78u;
        goto label_11bb78;
    }
    ctx->pc = 0x11BB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BB78u);
        ctx->pc = 0x11BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB70u;
        // 0x11bb74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BB70u, 0x11BB78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BB78u;
label_11bb78:
    // 0x11bb78: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11bb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_11bb7c:
    // 0x11bb7c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x11bb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11bb80:
    // 0x11bb80: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_11bb84:
    if (ctx->pc == 0x11BB84u) {
        ctx->pc = 0x11BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB80u;
        // 0x11bb84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB88u;
        goto label_11bb88;
    }
    ctx->pc = 0x11BB80u;
    {
        const bool branch_taken_0x11bb80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB80u;
        // 0x11bb84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb80) {
            ctx->pc = 0x11BBA4u;
            goto label_11bba4;
        }
    }
    ctx->pc = 0x11BB88u;
label_11bb88:
    // 0x11bb88: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11bb8c:
    // 0x11bb8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11bb90:
    // 0x11bb90: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11bb90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11bb94:
    // 0x11bb94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11bb98:
    // 0x11bb98: 0x60f809  jalr        $v1
label_11bb9c:
    if (ctx->pc == 0x11BB9Cu) {
        ctx->pc = 0x11BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB98u;
        // 0x11bb9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BBA0u;
        goto label_11bba0;
    }
    ctx->pc = 0x11BB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BBA0u);
        ctx->pc = 0x11BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB98u;
        // 0x11bb9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BB98u, 0x11BBA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BBA0u;
label_11bba0:
    // 0x11bba0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x11bba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_11bba4:
    // 0x11bba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11bba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11bba8:
    // 0x11bba8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11bba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_11bbac:
    // 0x11bbac: 0x3e00008  jr          $ra
label_11bbb0:
    if (ctx->pc == 0x11BBB0u) {
        ctx->pc = 0x11BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBACu;
        // 0x11bbb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BBB4u;
        goto label_fallthrough_0x11bbac;
    }
    ctx->pc = 0x11BBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBACu;
        // 0x11bbb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11bbac:
    ctx->pc = 0x11BBB4u;
}
