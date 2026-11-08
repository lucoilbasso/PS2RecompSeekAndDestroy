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

// Function: HardwareReset__5WcRsci
// Address: 0x179fe8 - 0x17a104
void HardwareReset__5WcRsci_0x179fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HardwareReset__5WcRsci_0x179fe8");
#endif

    switch (ctx->pc) {
        case 0x17a018u: goto label_17a018;
        case 0x17a020u: goto label_17a020;
        case 0x17a028u: goto label_17a028;
        case 0x17a030u: goto label_17a030;
        case 0x17a040u: goto label_17a040;
        case 0x17a058u: goto label_17a058;
        case 0x17a078u: goto label_17a078;
        case 0x17a0acu: goto label_17a0ac;
        case 0x17a0d4u: goto label_17a0d4;
        case 0x17a0e8u: goto label_17a0e8;
        default: break;
    }

    ctx->pc = 0x179fe8u;

    // 0x179fe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x179fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x179fec: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x179fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x179ff0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x179ff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ff4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x179ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x179ff8: 0x26720158  addiu       $s2, $s3, 0x158
    ctx->pc = 0x179ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 344));
    // 0x179ffc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x179ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17a000: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17a000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a004: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x17a004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17a008: 0x14a00037  bnez        $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x17A008u;
    {
        const bool branch_taken_0x17a008 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A008u;
        // 0x17a00c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a008) {
            ctx->pc = 0x17A0E8u;
            goto label_17a0e8;
        }
    }
    ctx->pc = 0x17A010u;
    // 0x17a010: 0xc06b08c  jal         func_1AC230
    ctx->pc = 0x17A010u;
    SET_GPR_U32(ctx, 31, 0x17A018u);
    ctx->pc = 0x17A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A010u;
    // 0x17a014: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC230u, 0x17A010u, 0x17A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A018u;
label_17a018:
    // 0x17a018: 0xc06a91e  jal         func_1AA478
    ctx->pc = 0x17A018u;
    SET_GPR_U32(ctx, 31, 0x17A020u);
    ctx->pc = 0x17A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A018u;
    // 0x17a01c: 0x2610e900  addiu       $s0, $s0, -0x1700 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA478u, 0x17A018u, 0x17A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A020u;
label_17a020:
    // 0x17a020: 0xc05d7f8  jal         func_175FE0
    ctx->pc = 0x17A020u;
    SET_GPR_U32(ctx, 31, 0x17A028u);
    ctx->pc = 0x17A024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A020u;
    // 0x17a024: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175FE0u, 0x17A020u, 0x17A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A028u;
label_17a028:
    // 0x17a028: 0xc06bcd4  jal         func_1AF350
    ctx->pc = 0x17A028u;
    SET_GPR_U32(ctx, 31, 0x17A030u);
    ctx->pc = 0x17A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A028u;
    // 0x17a02c: 0x3c110022  lui         $s1, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF350u, 0x17A028u, 0x17A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A030u;
label_17a030:
    // 0x17a030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17a030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a034: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x17a034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x17a038: 0xc06bcbc  jal         func_1AF2F0
    ctx->pc = 0x17A038u;
    SET_GPR_U32(ctx, 31, 0x17A040u);
    ctx->pc = 0x17A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A038u;
    // 0x17a03c: 0xaf828d08  sw          $v0, -0x72F8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937864), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2F0u, 0x17A038u, 0x17A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A040u;
label_17a040:
    // 0x17a040: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17a040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a048: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x17a048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x17a04c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x17a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x17a050: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x17A050u;
    SET_GPR_U32(ctx, 31, 0x17A058u);
    ctx->pc = 0x17A054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A050u;
    // 0x17a054: 0xafb30014  sw          $s3, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x17A050u, 0x17A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A058u;
label_17a058:
    // 0x17a058: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17a058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17a05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a060: 0x24c6a468  addiu       $a2, $a2, -0x5B98
    ctx->pc = 0x17a060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943848));
    // 0x17a064: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17a064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a068: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x17a068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x17a06c: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x17a06cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x17a070: 0xc0685e0  jal         func_1A1780
    ctx->pc = 0x17A070u;
    SET_GPR_U32(ctx, 31, 0x17A078u);
    ctx->pc = 0x17A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A070u;
    // 0x17a074: 0xaf828d0c  sw          $v0, -0x72F4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937868), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1780u, 0x17A070u, 0x17A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A078u;
label_17a078:
    // 0x17a078: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x17a078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17a07c: 0x2631e920  addiu       $s1, $s1, -0x16E0
    ctx->pc = 0x17a07cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961440));
    // 0x17a080: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17a080u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17a084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a088: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x17a088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x17a08c: 0x24c6a530  addiu       $a2, $a2, -0x5AD0
    ctx->pc = 0x17a08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944048));
    // 0x17a090: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x17a090u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x17a094: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x17a094u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x17a098: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17a098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a09c: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x17a09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x17a0a0: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x17a0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x17a0a4: 0xc0685e0  jal         func_1A1780
    ctx->pc = 0x17A0A4u;
    SET_GPR_U32(ctx, 31, 0x17A0ACu);
    ctx->pc = 0x17A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A0A4u;
    // 0x17a0a8: 0x2610e940  addiu       $s0, $s0, -0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1780u, 0x17A0A4u, 0x17A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A0ACu;
label_17a0ac:
    // 0x17a0ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x17a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17a0b0: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17a0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17a0b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a0b8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x17a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x17a0bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17a0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a0c0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x17a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x17a0c4: 0x24c6a488  addiu       $a2, $a2, -0x5B78
    ctx->pc = 0x17a0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943880));
    // 0x17a0c8: 0x24070025  addiu       $a3, $zero, 0x25
    ctx->pc = 0x17a0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x17a0cc: 0xc0685e0  jal         func_1A1780
    ctx->pc = 0x17A0CCu;
    SET_GPR_U32(ctx, 31, 0x17A0D4u);
    ctx->pc = 0x17A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A0CCu;
    // 0x17a0d0: 0x24080400  addiu       $t0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1780u, 0x17A0CCu, 0x17A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A0D4u;
label_17a0d4:
    // 0x17a0d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x17a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17a0d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a0dc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x17a0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x17a0e0: 0xc05de44  jal         func_177910
    ctx->pc = 0x17A0E0u;
    SET_GPR_U32(ctx, 31, 0x17A0E8u);
    ctx->pc = 0x17A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A0E0u;
    // 0x17a0e4: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177910u, 0x17A0E0u, 0x17A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A0E8u;
label_17a0e8:
    // 0x17a0e8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17a0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a0ec: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17a0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a0f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x17a0f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a0f4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x17a0f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17a0f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17a0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17A0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0FCu;
        // 0x17a100: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A104u;
}
