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

// Function: load_Screen__Fv
// Address: 0x104f88 - 0x1050d0
void load_Screen__Fv_0x104f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("load_Screen__Fv_0x104f88");
#endif

    switch (ctx->pc) {
        case 0x104fa0u: goto label_104fa0;
        case 0x104fa8u: goto label_104fa8;
        case 0x104fc8u: goto label_104fc8;
        case 0x104fd0u: goto label_104fd0;
        case 0x104fe4u: goto label_104fe4;
        case 0x104ffcu: goto label_104ffc;
        case 0x105004u: goto label_105004;
        case 0x10500cu: goto label_10500c;
        case 0x10503cu: goto label_10503c;
        case 0x105044u: goto label_105044;
        case 0x105050u: goto label_105050;
        case 0x10505cu: goto label_10505c;
        case 0x10508cu: goto label_10508c;
        case 0x105094u: goto label_105094;
        case 0x1050a0u: goto label_1050a0;
        case 0x1050acu: goto label_1050ac;
        default: break;
    }

    ctx->pc = 0x104f88u;

    // 0x104f88: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x104f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x104f8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x104f90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104f94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x104f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x104f98: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x104F98u;
    SET_GPR_U32(ctx, 31, 0x104FA0u);
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x104F98u, 0x104FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FA0u;
label_104fa0:
    // 0x104fa0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x104fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x104fa4: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x104fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_104fa8:
    // 0x104fa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x104fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104fac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x104facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x104fb0: 0x0  nop
    ctx->pc = 0x104fb0u;
    // NOP
    // 0x104fb4: 0x0  nop
    ctx->pc = 0x104fb4u;
    // NOP
    // 0x104fb8: 0x0  nop
    ctx->pc = 0x104fb8u;
    // NOP
    // 0x104fbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x104FBCu;
    {
        const bool branch_taken_0x104fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104fbc) {
            ctx->pc = 0x104FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104fa8;
        }
    }
    ctx->pc = 0x104FC4u;
    // 0x104fc4: 0x0  nop
    ctx->pc = 0x104fc4u;
    // NOP
label_104fc8:
    // 0x104fc8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x104FC8u;
    SET_GPR_U32(ctx, 31, 0x104FD0u);
    ctx->pc = 0x104FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104FC8u;
    // 0x104fcc: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x104FC8u, 0x104FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FD0u;
label_104fd0:
    // 0x104fd0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x104fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x104fd4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x104FD4u;
    {
        const bool branch_taken_0x104fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x104FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FD4u;
        // 0x104fd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fd4) {
            ctx->pc = 0x104FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104fc8;
        }
    }
    ctx->pc = 0x104FDCu;
    // 0x104fdc: 0xc06bcd4  jal         func_1AF350
    ctx->pc = 0x104FDCu;
    SET_GPR_U32(ctx, 31, 0x104FE4u);
    ctx->pc = 0x104FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104FDCu;
    // 0x104fe0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF350u, 0x104FDCu, 0x104FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FE4u;
label_104fe4:
    // 0x104fe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x104fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fe8: 0x8f828d08  lw          $v0, -0x72F8($gp)
    ctx->pc = 0x104fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937864)));
    // 0x104fec: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104FECu;
    {
        const bool branch_taken_0x104fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x104fec) {
            ctx->pc = 0x104FFCu;
            goto label_104ffc;
        }
    }
    ctx->pc = 0x104FF4u;
    // 0x104ff4: 0xc06bcbc  jal         func_1AF2F0
    ctx->pc = 0x104FF4u;
    SET_GPR_U32(ctx, 31, 0x104FFCu);
    ctx->pc = 0x104FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104FF4u;
    // 0x104ff8: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2F0u, 0x104FF4u, 0x104FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FFCu;
label_104ffc:
    // 0x104ffc: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x104FFCu;
    SET_GPR_U32(ctx, 31, 0x105004u);
    ctx->pc = 0x105000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104FFCu;
    // 0x105000: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x104FFCu, 0x105004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105004u;
label_105004:
    // 0x105004: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x105004u;
    SET_GPR_U32(ctx, 31, 0x10500Cu);
    ctx->pc = 0x105008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105004u;
    // 0x105008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x105004u, 0x10500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10500Cu;
label_10500c:
    // 0x10500c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x10500cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x105010: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x105010u;
    {
        const bool branch_taken_0x105010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105010u;
        // 0x105014: 0x2470f200  addiu       $s0, $v1, -0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105010) {
            ctx->pc = 0x105068u;
            goto label_105068;
        }
    }
    ctx->pc = 0x105018u;
    // 0x105018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10501c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x10501cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x105020: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x105020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105024: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x105024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105028: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x105028u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10502c: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x10502cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x105030: 0x240b01c0  addiu       $t3, $zero, 0x1C0
    ctx->pc = 0x105030u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x105034: 0xc06acf0  jal         func_1AB3C0
    ctx->pc = 0x105034u;
    SET_GPR_U32(ctx, 31, 0x10503Cu);
    ctx->pc = 0x105038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105034u;
    // 0x105038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3C0u, 0x105034u, 0x10503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10503Cu;
label_10503c:
    // 0x10503c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x10503Cu;
    SET_GPR_U32(ctx, 31, 0x105044u);
    ctx->pc = 0x105040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10503Cu;
    // 0x105040: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x10503Cu, 0x105044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105044u;
label_105044:
    // 0x105044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105048: 0xc06ad40  jal         func_1AB500
    ctx->pc = 0x105048u;
    SET_GPR_U32(ctx, 31, 0x105050u);
    ctx->pc = 0x10504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105048u;
    // 0x10504c: 0x8f8588a8  lw          $a1, -0x7758($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB500u, 0x105048u, 0x105050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105050u;
label_105050:
    // 0x105050: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x105050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105054: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x105054u;
    SET_GPR_U32(ctx, 31, 0x10505Cu);
    ctx->pc = 0x105058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105054u;
    // 0x105058: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x105054u, 0x10505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10505Cu;
label_10505c:
    // 0x10505c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10505Cu;
    {
        const bool branch_taken_0x10505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10505Cu;
        // 0x105060: 0x8f838c50  lw          $v1, -0x73B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10505c) {
            ctx->pc = 0x1050B0u;
            goto label_1050b0;
        }
    }
    ctx->pc = 0x105064u;
    // 0x105064: 0x0  nop
    ctx->pc = 0x105064u;
    // NOP
label_105068:
    // 0x105068: 0x24050e00  addiu       $a1, $zero, 0xE00
    ctx->pc = 0x105068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x10506c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x10506cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x105070: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x105070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105074: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x105074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105078: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x105078u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10507c: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x10507cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x105080: 0x240b01c0  addiu       $t3, $zero, 0x1C0
    ctx->pc = 0x105080u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x105084: 0xc06acf0  jal         func_1AB3C0
    ctx->pc = 0x105084u;
    SET_GPR_U32(ctx, 31, 0x10508Cu);
    ctx->pc = 0x105088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105084u;
    // 0x105088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3C0u, 0x105084u, 0x10508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10508Cu;
label_10508c:
    // 0x10508c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x10508Cu;
    SET_GPR_U32(ctx, 31, 0x105094u);
    ctx->pc = 0x105090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10508Cu;
    // 0x105090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x10508Cu, 0x105094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105094u;
label_105094:
    // 0x105094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105098: 0xc06ad40  jal         func_1AB500
    ctx->pc = 0x105098u;
    SET_GPR_U32(ctx, 31, 0x1050A0u);
    ctx->pc = 0x10509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105098u;
    // 0x10509c: 0x8f8588a8  lw          $a1, -0x7758($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB500u, 0x105098u, 0x1050A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050A0u;
label_1050a0:
    // 0x1050a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1050a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050a4: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1050A4u;
    SET_GPR_U32(ctx, 31, 0x1050ACu);
    ctx->pc = 0x1050A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1050A4u;
    // 0x1050a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1050A4u, 0x1050ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050ACu;
label_1050ac:
    // 0x1050ac: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x1050acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
label_1050b0:
    // 0x1050b0: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x1050b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x1050b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1050b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1050b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1050b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1050bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1050bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1050c0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1050c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1050c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1050c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1050c8: 0x806bd20  j           func_1AF480
    ctx->pc = 0x1050C8u;
    ctx->pc = 0x1050CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1050C8u;
    // 0x1050cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    SignalSema_0x1af480(rdram, ctx, runtime); return;
    ctx->pc = 0x1050D0u;
}
