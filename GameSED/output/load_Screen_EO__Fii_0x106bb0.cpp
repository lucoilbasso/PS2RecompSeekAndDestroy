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

// Function: load_Screen_EO__Fii
// Address: 0x106bb0 - 0x106c6c
void load_Screen_EO__Fii_0x106bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("load_Screen_EO__Fii_0x106bb0");
#endif

    switch (ctx->pc) {
        case 0x106becu: goto label_106bec;
        case 0x106bf4u: goto label_106bf4;
        case 0x106c00u: goto label_106c00;
        case 0x106c3cu: goto label_106c3c;
        case 0x106c44u: goto label_106c44;
        case 0x106c50u: goto label_106c50;
        case 0x106c5cu: goto label_106c5c;
        default: break;
    }

    ctx->pc = 0x106bb0u;

    // 0x106bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x106bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x106bb4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x106bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x106bb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106bbc: 0x2450f200  addiu       $s0, $v0, -0xE00
    ctx->pc = 0x106bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963712));
    // 0x106bc0: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x106BC0u;
    {
        const bool branch_taken_0x106bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x106BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BC0u;
        // 0x106bc4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106bc0) {
            ctx->pc = 0x106C18u;
            goto label_106c18;
        }
    }
    ctx->pc = 0x106BC8u;
    // 0x106bc8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x106bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106bcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106bccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106bd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x106bd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bd8: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x106bd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x106bdc: 0x240b01c0  addiu       $t3, $zero, 0x1C0
    ctx->pc = 0x106bdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x106be0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106be4: 0xc06acf0  jal         func_1AB3C0
    ctx->pc = 0x106BE4u;
    SET_GPR_U32(ctx, 31, 0x106BECu);
    ctx->pc = 0x106BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106BE4u;
    // 0x106be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3C0u, 0x106BE4u, 0x106BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106BECu;
label_106bec:
    // 0x106bec: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x106BECu;
    SET_GPR_U32(ctx, 31, 0x106BF4u);
    ctx->pc = 0x106BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106BECu;
    // 0x106bf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x106BECu, 0x106BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106BF4u;
label_106bf4:
    // 0x106bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bf8: 0xc06ad40  jal         func_1AB500
    ctx->pc = 0x106BF8u;
    SET_GPR_U32(ctx, 31, 0x106C00u);
    ctx->pc = 0x106BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106BF8u;
    // 0x106bfc: 0x8f8588a8  lw          $a1, -0x7758($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB500u, 0x106BF8u, 0x106C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C00u;
label_106c00:
    // 0x106c00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x106c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x106c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106c10: 0x806ab98  j           func_1AAE60
    ctx->pc = 0x106C10u;
    ctx->pc = 0x106C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C10u;
    // 0x106c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    sceGsSyncPath_0x1aae60(rdram, ctx, runtime); return;
    ctx->pc = 0x106C18u;
label_106c18:
    // 0x106c18: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x106c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106c1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106c20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x106c24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c28: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x106c28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x106c2c: 0x240b01c0  addiu       $t3, $zero, 0x1C0
    ctx->pc = 0x106c2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x106c30: 0x24050e00  addiu       $a1, $zero, 0xE00
    ctx->pc = 0x106c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x106c34: 0xc06acf0  jal         func_1AB3C0
    ctx->pc = 0x106C34u;
    SET_GPR_U32(ctx, 31, 0x106C3Cu);
    ctx->pc = 0x106C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C34u;
    // 0x106c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3C0u, 0x106C34u, 0x106C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C3Cu;
label_106c3c:
    // 0x106c3c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x106C3Cu;
    SET_GPR_U32(ctx, 31, 0x106C44u);
    ctx->pc = 0x106C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C3Cu;
    // 0x106c40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x106C3Cu, 0x106C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C44u;
label_106c44:
    // 0x106c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c48: 0xc06ad40  jal         func_1AB500
    ctx->pc = 0x106C48u;
    SET_GPR_U32(ctx, 31, 0x106C50u);
    ctx->pc = 0x106C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C48u;
    // 0x106c4c: 0x8f8588a8  lw          $a1, -0x7758($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB500u, 0x106C48u, 0x106C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C50u;
label_106c50:
    // 0x106c50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x106c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c54: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x106C54u;
    SET_GPR_U32(ctx, 31, 0x106C5Cu);
    ctx->pc = 0x106C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C54u;
    // 0x106c58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x106C54u, 0x106C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C5Cu;
label_106c5c:
    // 0x106c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106c60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x106c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106c64: 0x3e00008  jr          $ra
    ctx->pc = 0x106C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C64u;
        // 0x106c68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106C6Cu;
}
