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

// Function: ApCameraMotionSetup__FP7WcActor14CameraCtrlMode
// Address: 0x13ef00 - 0x13f154
void ApCameraMotionSetup__FP7WcActor14CameraCtrlMode_0x13ef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraMotionSetup__FP7WcActor14CameraCtrlMode_0x13ef00");
#endif

    switch (ctx->pc) {
        case 0x13ef40u: goto label_13ef40;
        case 0x13ef50u: goto label_13ef50;
        case 0x13ef68u: goto label_13ef68;
        case 0x13f000u: goto label_13f000;
        case 0x13f00cu: goto label_13f00c;
        case 0x13f030u: goto label_13f030;
        case 0x13f048u: goto label_13f048;
        case 0x13f06cu: goto label_13f06c;
        default: break;
    }

    ctx->pc = 0x13ef00u;

    // 0x13ef00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13ef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13ef04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13ef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13ef08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13ef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13ef0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13ef0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13ef10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13ef10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x13ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13ef18: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x13ef18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13ef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13ef20: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13ef20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13ef24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13ef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13ef28: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x13ef28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x13ef2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13ef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13ef30: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x13ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13ef34: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x13ef34u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ef38: 0xc06164c  jal         func_185930
    ctx->pc = 0x13EF38u;
    SET_GPR_U32(ctx, 31, 0x13EF40u);
    ctx->pc = 0x13EF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF38u;
    // 0x13ef3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x13EF38u, 0x13EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF40u;
label_13ef40:
    // 0x13ef40: 0x8e700148  lw          $s0, 0x148($s3)
    ctx->pc = 0x13ef40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x13ef44: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x13EF44u;
    {
        const bool branch_taken_0x13ef44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF44u;
        // 0x13ef48: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef44) {
            ctx->pc = 0x13EF74u;
            goto label_13ef74;
        }
    }
    ctx->pc = 0x13EF4Cu;
    // 0x13ef4c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13ef50:
    // 0x13ef50: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EF50u;
    {
        const bool branch_taken_0x13ef50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x13EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF50u;
        // 0x13ef54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef50) {
            ctx->pc = 0x13EF68u;
            goto label_13ef68;
        }
    }
    ctx->pc = 0x13EF58u;
    // 0x13ef58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13ef58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ef5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef60: 0xc068866  jal         func_1A2198
    ctx->pc = 0x13EF60u;
    SET_GPR_U32(ctx, 31, 0x13EF68u);
    ctx->pc = 0x13EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF60u;
    // 0x13ef64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x13EF60u, 0x13EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF68u;
label_13ef68:
    // 0x13ef68: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x13ef68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13ef6c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13EF6Cu;
    {
        const bool branch_taken_0x13ef6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ef6c) {
            ctx->pc = 0x13EF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EF6Cu;
            // 0x13ef70: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ef50;
        }
    }
    ctx->pc = 0x13EF74u;
label_13ef74:
    // 0x13ef74: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x13ef74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13ef78: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x13EF78u;
    {
        const bool branch_taken_0x13ef78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ef78) {
            ctx->pc = 0x13EF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EF78u;
            // 0x13ef7c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EFE4u;
            goto label_13efe4;
        }
    }
    ctx->pc = 0x13EF80u;
    // 0x13ef80: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x13ef80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x13ef84: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x13ef84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef88: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x13ef88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x13ef8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13ef8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef90: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x13ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x13ef94: 0xa6200008  sh          $zero, 0x8($s1)
    ctx->pc = 0x13ef94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x13ef98: 0xa620000a  sh          $zero, 0xA($s1)
    ctx->pc = 0x13ef98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x13ef9c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x13ef9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x13efa0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x13efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x13efa4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x13efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x13efa8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x13efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x13efac: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x13efacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x13efb0: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x13efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x13efb4: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x13efb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x13efb8: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x13efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x13efbc: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x13efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x13efc0: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EFC0u;
    {
        const bool branch_taken_0x13efc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFC0u;
        // 0x13efc4: 0xae20007c  sw          $zero, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efc0) {
            ctx->pc = 0x13EFD8u;
            goto label_13efd8;
        }
    }
    ctx->pc = 0x13EFC8u;
    // 0x13efc8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x13efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13efcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13EFCCu;
    {
        const bool branch_taken_0x13efcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFCCu;
        // 0x13efd0: 0xa6220008  sh          $v0, 0x8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efcc) {
            ctx->pc = 0x13EFDCu;
            goto label_13efdc;
        }
    }
    ctx->pc = 0x13EFD4u;
    // 0x13efd4: 0x0  nop
    ctx->pc = 0x13efd4u;
    // NOP
label_13efd8:
    // 0x13efd8: 0xa6200008  sh          $zero, 0x8($s1)
    ctx->pc = 0x13efd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
label_13efdc:
    // 0x13efdc: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x13efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x13efe0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x13efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13efe4:
    // 0x13efe4: 0x24030126  addiu       $v1, $zero, 0x126
    ctx->pc = 0x13efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x13efe8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13efe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13efec: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13EFECu;
    {
        const bool branch_taken_0x13efec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFECu;
        // 0x13eff0: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efec) {
            ctx->pc = 0x13F020u;
            goto label_13f020;
        }
    }
    ctx->pc = 0x13EFF4u;
    // 0x13eff4: 0x8e700018  lw          $s0, 0x18($s3)
    ctx->pc = 0x13eff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x13eff8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13EFF8u;
    {
        const bool branch_taken_0x13eff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFF8u;
        // 0x13effc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eff8) {
            ctx->pc = 0x13F01Cu;
            goto label_13f01c;
        }
    }
    ctx->pc = 0x13F000u;
label_13f000:
    // 0x13f000: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f004: 0xc050680  jal         func_141A00
    ctx->pc = 0x13F004u;
    SET_GPR_U32(ctx, 31, 0x13F00Cu);
    ctx->pc = 0x13F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F004u;
    // 0x13f008: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A00u, 0x13F004u, 0x13F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F00Cu;
label_13f00c:
    // 0x13f00c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F00Cu;
    {
        const bool branch_taken_0x13f00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F00Cu;
        // 0x13f010: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f00c) {
            ctx->pc = 0x13F020u;
            goto label_13f020;
        }
    }
    ctx->pc = 0x13F014u;
    // 0x13f014: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13F014u;
    {
        const bool branch_taken_0x13f014 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F014u;
        // 0x13f018: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f014) {
            ctx->pc = 0x13F000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f000;
        }
    }
    ctx->pc = 0x13F01Cu;
label_13f01c:
    // 0x13f01c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13f01cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f020:
    // 0x13f020: 0x8e500148  lw          $s0, 0x148($s2)
    ctx->pc = 0x13f020u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x13f024: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x13F024u;
    {
        const bool branch_taken_0x13f024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F024u;
        // 0x13f028: 0x3c060014  lui         $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f024) {
            ctx->pc = 0x13F058u;
            goto label_13f058;
        }
    }
    ctx->pc = 0x13F02Cu;
    // 0x13f02c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13f030:
    // 0x13f030: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F030u;
    {
        const bool branch_taken_0x13f030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x13F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F030u;
        // 0x13f034: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f030) {
            ctx->pc = 0x13F048u;
            goto label_13f048;
        }
    }
    ctx->pc = 0x13F038u;
    // 0x13f038: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13f038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f03c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13f03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f040: 0xc068866  jal         func_1A2198
    ctx->pc = 0x13F040u;
    SET_GPR_U32(ctx, 31, 0x13F048u);
    ctx->pc = 0x13F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F040u;
    // 0x13f044: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x13F040u, 0x13F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F048u;
label_13f048:
    // 0x13f048: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x13f048u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13f04c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13F04Cu;
    {
        const bool branch_taken_0x13f04c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f04c) {
            ctx->pc = 0x13F050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F04Cu;
            // 0x13f050: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f030;
        }
    }
    ctx->pc = 0x13F054u;
    // 0x13f054: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13f054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
label_13f058:
    // 0x13f058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f05c: 0x24c6ee48  addiu       $a2, $a2, -0x11B8
    ctx->pc = 0x13f05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962760));
    // 0x13f060: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13f060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f064: 0xc068866  jal         func_1A2198
    ctx->pc = 0x13F064u;
    SET_GPR_U32(ctx, 31, 0x13F06Cu);
    ctx->pc = 0x13F068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F064u;
    // 0x13f068: 0x240703b0  addiu       $a3, $zero, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x13F064u, 0x13F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F06Cu;
label_13f06c:
    // 0x13f06c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13f06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f070: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13f070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f074: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x13f074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f078: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x13f078u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x13f07c: 0xa2100a  movz        $v0, $a1, $v0
    ctx->pc = 0x13f07cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x13f080: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x13f080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x13f084: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x13f084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f088: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x13f088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13f08c: 0xacd50018  sw          $s5, 0x18($a2)
    ctx->pc = 0x13f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 21));
    // 0x13f090: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x13f090u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x13f094: 0x14640018  bne         $v1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x13F094u;
    {
        const bool branch_taken_0x13f094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x13F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F094u;
        // 0x13f098: 0xacc00020  sw          $zero, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f094) {
            ctx->pc = 0x13F0F8u;
            goto label_13f0f8;
        }
    }
    ctx->pc = 0x13F09Cu;
    // 0x13f09c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x13f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x13f0a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13f0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F0A4u;
    {
        const bool branch_taken_0x13f0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0A4u;
        // 0x13f0a8: 0x24c70030  addiu       $a3, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0a4) {
            ctx->pc = 0x13F0B8u;
            goto label_13f0b8;
        }
    }
    ctx->pc = 0x13F0ACu;
    // 0x13f0ac: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x13f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x13f0b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F0B0u;
    {
        const bool branch_taken_0x13f0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0B0u;
        // 0x13f0b4: 0x244300d0  addiu       $v1, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0b0) {
            ctx->pc = 0x13F0BCu;
            goto label_13f0bc;
        }
    }
    ctx->pc = 0x13F0B8u;
label_13f0b8:
    // 0x13f0b8: 0x24a300d0  addiu       $v1, $a1, 0xD0
    ctx->pc = 0x13f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
label_13f0bc:
    // 0x13f0bc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13f0bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f0c0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x13f0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x13f0c4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x13f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x13f0c8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F0C8u;
    {
        const bool branch_taken_0x13f0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0C8u;
        // 0x13f0cc: 0x25050040  addiu       $a1, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0c8) {
            ctx->pc = 0x13F0E0u;
            goto label_13f0e0;
        }
    }
    ctx->pc = 0x13F0D0u;
    // 0x13f0d0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x13f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x13f0d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13F0D4u;
    {
        const bool branch_taken_0x13f0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0D4u;
        // 0x13f0d8: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0d4) {
            ctx->pc = 0x13F0E4u;
            goto label_13f0e4;
        }
    }
    ctx->pc = 0x13F0DCu;
    // 0x13f0dc: 0x0  nop
    ctx->pc = 0x13f0dcu;
    // NOP
label_13f0e0:
    // 0x13f0e0: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x13f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_13f0e4:
    // 0x13f0e4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13f0e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f0e8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x13f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x13f0ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13F0ECu;
    {
        const bool branch_taken_0x13f0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0ECu;
        // 0x13f0f0: 0x8e8300d4  lw          $v1, 0xD4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0ec) {
            ctx->pc = 0x13F11Cu;
            goto label_13f11c;
        }
    }
    ctx->pc = 0x13F0F4u;
    // 0x13f0f4: 0x0  nop
    ctx->pc = 0x13f0f4u;
    // NOP
label_13f0f8:
    // 0x13f0f8: 0x24c40030  addiu       $a0, $a2, 0x30
    ctx->pc = 0x13f0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x13f0fc: 0x266300d0  addiu       $v1, $s3, 0xD0
    ctx->pc = 0x13f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x13f100: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13f100u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f104: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x13f104u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x13f108: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x13f108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x13f10c: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x13f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x13f110: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x13f110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13f114: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13f114u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13f118: 0x8e8300d4  lw          $v1, 0xD4($s4)
    ctx->pc = 0x13f118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_13f11c:
    // 0x13f11c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x13f11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f120: 0xacd40010  sw          $s4, 0x10($a2)
    ctx->pc = 0x13f120u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 20));
    // 0x13f124: 0x34630f00  ori         $v1, $v1, 0xF00
    ctx->pc = 0x13f124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3840);
    // 0x13f128: 0xae540214  sw          $s4, 0x214($s2)
    ctx->pc = 0x13f128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 20));
    // 0x13f12c: 0xae8300d4  sw          $v1, 0xD4($s4)
    ctx->pc = 0x13f12cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 3));
    // 0x13f130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f134: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13f134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f138: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13f138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f13c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13f13cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13f140: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13f140u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f144: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13f144u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13f148: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13f148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f14c: 0x3e00008  jr          $ra
    ctx->pc = 0x13F14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F14Cu;
        // 0x13f150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F154u;
}
