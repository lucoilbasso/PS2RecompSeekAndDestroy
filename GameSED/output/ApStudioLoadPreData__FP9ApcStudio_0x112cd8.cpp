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

// Function: ApStudioLoadPreData__FP9ApcStudio
// Address: 0x112cd8 - 0x112d68
void ApStudioLoadPreData__FP9ApcStudio_0x112cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApStudioLoadPreData__FP9ApcStudio_0x112cd8");
#endif

    switch (ctx->pc) {
        case 0x112cd8u: goto label_112cd8;
        case 0x112cdcu: goto label_112cdc;
        case 0x112ce0u: goto label_112ce0;
        case 0x112ce4u: goto label_112ce4;
        case 0x112ce8u: goto label_112ce8;
        case 0x112cecu: goto label_112cec;
        case 0x112cf0u: goto label_112cf0;
        case 0x112cf4u: goto label_112cf4;
        case 0x112cf8u: goto label_112cf8;
        case 0x112cfcu: goto label_112cfc;
        case 0x112d00u: goto label_112d00;
        case 0x112d04u: goto label_112d04;
        case 0x112d08u: goto label_112d08;
        case 0x112d0cu: goto label_112d0c;
        case 0x112d10u: goto label_112d10;
        case 0x112d14u: goto label_112d14;
        case 0x112d18u: goto label_112d18;
        case 0x112d1cu: goto label_112d1c;
        case 0x112d20u: goto label_112d20;
        case 0x112d24u: goto label_112d24;
        case 0x112d28u: goto label_112d28;
        case 0x112d2cu: goto label_112d2c;
        case 0x112d30u: goto label_112d30;
        case 0x112d34u: goto label_112d34;
        case 0x112d38u: goto label_112d38;
        case 0x112d3cu: goto label_112d3c;
        case 0x112d40u: goto label_112d40;
        case 0x112d44u: goto label_112d44;
        case 0x112d48u: goto label_112d48;
        case 0x112d4cu: goto label_112d4c;
        case 0x112d50u: goto label_112d50;
        case 0x112d54u: goto label_112d54;
        case 0x112d58u: goto label_112d58;
        case 0x112d5cu: goto label_112d5c;
        case 0x112d60u: goto label_112d60;
        case 0x112d64u: goto label_112d64;
        default: break;
    }

    ctx->pc = 0x112cd8u;

label_112cd8:
    // 0x112cd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_112cdc:
    // 0x112cdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x112cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_112ce0:
    // 0x112ce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_112ce4:
    // 0x112ce4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x112ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_112ce8:
    // 0x112ce8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x112ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_112cec:
    // 0x112cec: 0xc044d6c  jal         func_1135B0
label_112cf0:
    if (ctx->pc == 0x112CF0u) {
        ctx->pc = 0x112CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CECu;
        // 0x112cf0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112CF4u;
        goto label_112cf4;
    }
    ctx->pc = 0x112CECu;
    SET_GPR_U32(ctx, 31, 0x112CF4u);
    ctx->pc = 0x112CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CECu;
    // 0x112cf0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1135B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1135B0u, 0x112CECu, 0x112CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CF4u;
label_112cf4:
    // 0x112cf4: 0xc05f39a  jal         func_17CE68
label_112cf8:
    if (ctx->pc == 0x112CF8u) {
        ctx->pc = 0x112CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CF4u;
        // 0x112cf8: 0x8e510170  lw          $s1, 0x170($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112CFCu;
        goto label_112cfc;
    }
    ctx->pc = 0x112CF4u;
    SET_GPR_U32(ctx, 31, 0x112CFCu);
    ctx->pc = 0x112CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CF4u;
    // 0x112cf8: 0x8e510170  lw          $s1, 0x170($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x112CF4u, 0x112CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CFCu;
label_112cfc:
    // 0x112cfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112d00:
    // 0x112d00: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x112d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_112d04:
    // 0x112d04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x112d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_112d08:
    // 0x112d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112d0c:
    // 0x112d0c: 0xc05f4cc  jal         func_17D330
label_112d10:
    if (ctx->pc == 0x112D10u) {
        ctx->pc = 0x112D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D0Cu;
        // 0x112d10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D14u;
        goto label_112d14;
    }
    ctx->pc = 0x112D0Cu;
    SET_GPR_U32(ctx, 31, 0x112D14u);
    ctx->pc = 0x112D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D0Cu;
    // 0x112d10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x112D0Cu, 0x112D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D14u;
label_112d14:
    // 0x112d14: 0xc06bd28  jal         func_1AF4A0
label_112d18:
    if (ctx->pc == 0x112D18u) {
        ctx->pc = 0x112D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D14u;
        // 0x112d18: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D1Cu;
        goto label_112d1c;
    }
    ctx->pc = 0x112D14u;
    SET_GPR_U32(ctx, 31, 0x112D1Cu);
    ctx->pc = 0x112D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D14u;
    // 0x112d18: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x112D14u, 0x112D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D1Cu;
label_112d1c:
    // 0x112d1c: 0x26440174  addiu       $a0, $s2, 0x174
    ctx->pc = 0x112d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 372));
label_112d20:
    // 0x112d20: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x112d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_112d24:
    // 0x112d24: 0xc06723e  jal         func_19C8F8
label_112d28:
    if (ctx->pc == 0x112D28u) {
        ctx->pc = 0x112D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D24u;
        // 0x112d28: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D2Cu;
        goto label_112d2c;
    }
    ctx->pc = 0x112D24u;
    SET_GPR_U32(ctx, 31, 0x112D2Cu);
    ctx->pc = 0x112D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D24u;
    // 0x112d28: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x112D24u, 0x112D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D2Cu;
label_112d2c:
    // 0x112d2c: 0xc06bd20  jal         func_1AF480
label_112d30:
    if (ctx->pc == 0x112D30u) {
        ctx->pc = 0x112D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D2Cu;
        // 0x112d30: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D34u;
        goto label_112d34;
    }
    ctx->pc = 0x112D2Cu;
    SET_GPR_U32(ctx, 31, 0x112D34u);
    ctx->pc = 0x112D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D2Cu;
    // 0x112d30: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x112D2Cu, 0x112D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D34u;
label_112d34:
    // 0x112d34: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x112d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_112d38:
    // 0x112d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112d3c:
    // 0x112d3c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x112d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_112d40:
    // 0x112d40: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x112d40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_112d44:
    // 0x112d44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x112d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_112d48:
    // 0x112d48: 0x40f809  jalr        $v0
label_112d4c:
    if (ctx->pc == 0x112D4Cu) {
        ctx->pc = 0x112D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D48u;
        // 0x112d4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D50u;
        goto label_112d50;
    }
    ctx->pc = 0x112D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x112D50u);
        ctx->pc = 0x112D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D48u;
        // 0x112d4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112D48u, 0x112D50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112D50u;
label_112d50:
    // 0x112d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_112d54:
    // 0x112d54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x112d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_112d58:
    // 0x112d58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x112d58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_112d5c:
    // 0x112d5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x112d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_112d60:
    // 0x112d60: 0x3e00008  jr          $ra
label_112d64:
    if (ctx->pc == 0x112D64u) {
        ctx->pc = 0x112D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D60u;
        // 0x112d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D68u;
        goto label_fallthrough_0x112d60;
    }
    ctx->pc = 0x112D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D60u;
        // 0x112d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x112d60:
    ctx->pc = 0x112D68u;
}
