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

// Function: find_fde
// Address: 0x1cb288 - 0x1cb430
void find_fde_0x1cb288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("find_fde_0x1cb288");
#endif

    switch (ctx->pc) {
        case 0x1cb2b4u: goto label_1cb2b4;
        case 0x1cb2c0u: goto label_1cb2c0;
        case 0x1cb2dcu: goto label_1cb2dc;
        case 0x1cb310u: goto label_1cb310;
        case 0x1cb334u: goto label_1cb334;
        case 0x1cb354u: goto label_1cb354;
        case 0x1cb368u: goto label_1cb368;
        case 0x1cb3c8u: goto label_1cb3c8;
        case 0x1cb3d0u: goto label_1cb3d0;
        case 0x1cb3f8u: goto label_1cb3f8;
        case 0x1cb404u: goto label_1cb404;
        default: break;
    }

    ctx->pc = 0x1cb288u;

    // 0x1cb288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cb28c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cb28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cb290: 0x3c130025  lui         $s3, 0x25
    ctx->pc = 0x1cb290u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
    // 0x1cb294: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cb294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cb298: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cb298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb29c: 0x8e64aa44  lw          $a0, -0x55BC($s3)
    ctx->pc = 0x1cb29cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x24AA44u));
    // 0x1cb2a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb2a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb2a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cb2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cb2ac: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1CB2ACu;
    SET_GPR_U32(ctx, 31, 0x1CB2B4u);
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1CB2ACu, 0x1CB2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2B4u;
label_1cb2b4:
    // 0x1cb2b4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1cb2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1cb2b8: 0x8c700460  lw          $s0, 0x460($v1)
    ctx->pc = 0x1cb2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x410460u));
    // 0x1cb2bc: 0x0  nop
    ctx->pc = 0x1cb2bcu;
    // NOP
label_1cb2c0:
    // 0x1cb2c0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB2C0u;
    {
        const bool branch_taken_0x1cb2c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb2c0) {
            ctx->pc = 0x1CB308u;
            goto label_1cb308;
        }
    }
    ctx->pc = 0x1CB2C8u;
    // 0x1cb2c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb2cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB2CCu;
    {
        const bool branch_taken_0x1cb2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2CCu;
        // 0x1cb2d0: 0x242102b  sltu        $v0, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2cc) {
            ctx->pc = 0x1CB2E4u;
            goto label_1cb2e4;
        }
    }
    ctx->pc = 0x1CB2D4u;
    // 0x1cb2d4: 0xc072c48  jal         func_1CB120
    ctx->pc = 0x1CB2D4u;
    SET_GPR_U32(ctx, 31, 0x1CB2DCu);
    ctx->pc = 0x1CB2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2D4u;
    // 0x1cb2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB120u, 0x1CB2D4u, 0x1CB2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2DCu;
label_1cb2dc:
    // 0x1cb2dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb2e0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1cb2e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cb2e4:
    // 0x1cb2e4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CB2E4u;
    {
        const bool branch_taken_0x1cb2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb2e4) {
            ctx->pc = 0x1CB2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB2E4u;
            // 0x1cb2e8: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb2c0;
        }
    }
    ctx->pc = 0x1CB2ECu;
    // 0x1cb2ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cb2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cb2f0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1cb2f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cb2f4: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1CB2F4u;
    {
        const bool branch_taken_0x1cb2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb2f4) {
            ctx->pc = 0x1CB2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB2F4u;
            // 0x1cb2f8: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb2c0;
        }
    }
    ctx->pc = 0x1CB2FCu;
    // 0x1cb2fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB2FCu;
    {
        const bool branch_taken_0x1cb2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2FCu;
        // 0x1cb300: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2fc) {
            ctx->pc = 0x1CB318u;
            goto label_1cb318;
        }
    }
    ctx->pc = 0x1CB304u;
    // 0x1cb304: 0x0  nop
    ctx->pc = 0x1cb304u;
    // NOP
label_1cb308:
    // 0x1cb308: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1CB308u;
    SET_GPR_U32(ctx, 31, 0x1CB310u);
    ctx->pc = 0x1CB30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB308u;
    // 0x1cb30c: 0x8e64aa44  lw          $a0, -0x55BC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1CB308u, 0x1CB310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB310u;
label_1cb310:
    // 0x1cb310: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1CB310u;
    {
        const bool branch_taken_0x1cb310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB310u;
        // 0x1cb314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb310) {
            ctx->pc = 0x1CB414u;
            goto label_1cb414;
        }
    }
    ctx->pc = 0x1CB318u;
label_1cb318:
    // 0x1cb318: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB318u;
    {
        const bool branch_taken_0x1cb318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb318) {
            ctx->pc = 0x1CB32Cu;
            goto label_1cb32c;
        }
    }
    ctx->pc = 0x1CB320u;
    // 0x1cb320: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1cb320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cb324: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB324u;
    {
        const bool branch_taken_0x1cb324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1cb324) {
            ctx->pc = 0x1CB33Cu;
            goto label_1cb33c;
        }
    }
    ctx->pc = 0x1CB32Cu;
label_1cb32c:
    // 0x1cb32c: 0xc072c48  jal         func_1CB120
    ctx->pc = 0x1CB32Cu;
    SET_GPR_U32(ctx, 31, 0x1CB334u);
    ctx->pc = 0x1CB330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB32Cu;
    // 0x1cb330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB120u, 0x1CB32Cu, 0x1CB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB334u;
label_1cb334:
    // 0x1cb334: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cb334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb338: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1cb338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1cb33c:
    // 0x1cb33c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1CB33Cu;
    {
        const bool branch_taken_0x1cb33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb33c) {
            ctx->pc = 0x1CB3F0u;
            goto label_1cb3f0;
        }
    }
    ctx->pc = 0x1CB344u;
    // 0x1cb344: 0x1044001c  beq         $v0, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CB344u;
    {
        const bool branch_taken_0x1cb344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1cb344) {
            ctx->pc = 0x1CB3B8u;
            goto label_1cb3b8;
        }
    }
    ctx->pc = 0x1CB34Cu;
    // 0x1cb34c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1CB34Cu;
    SET_GPR_U32(ctx, 31, 0x1CB354u);
    ctx->pc = 0x1CB350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB34Cu;
    // 0x1cb350: 0x8e64aa44  lw          $a0, -0x55BC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1CB34Cu, 0x1CB354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB354u;
label_1cb354:
    // 0x1cb354: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x1cb354u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cb358: 0x1100002d  beqz        $t0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1CB358u;
    {
        const bool branch_taken_0x1cb358 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB358u;
        // 0x1cb35c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb358) {
            ctx->pc = 0x1CB410u;
            goto label_1cb410;
        }
    }
    ctx->pc = 0x1CB360u;
    // 0x1cb360: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb364: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x1cb364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_1cb368:
    // 0x1cb368: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x1cb368u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1cb36c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1cb36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cb370: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cb370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cb374: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1cb374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb378: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1cb378u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cb37c: 0x247182b  sltu        $v1, $s2, $a3
    ctx->pc = 0x1cb37cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1cb380: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB380u;
    {
        const bool branch_taken_0x1cb380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB380u;
        // 0x1cb384: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb380) {
            ctx->pc = 0x1CB390u;
            goto label_1cb390;
        }
    }
    ctx->pc = 0x1CB388u;
    // 0x1cb388: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB388u;
    {
        const bool branch_taken_0x1cb388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB388u;
        // 0x1cb38c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb388) {
            ctx->pc = 0x1CB3A4u;
            goto label_1cb3a4;
        }
    }
    ctx->pc = 0x1CB390u;
label_1cb390:
    // 0x1cb390: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1cb390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1cb394: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1cb394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1cb398: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1cb398u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cb39c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CB39Cu;
    {
        const bool branch_taken_0x1cb39c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB39Cu;
        // 0x1cb3a0: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb39c) {
            ctx->pc = 0x1CB414u;
            goto label_1cb414;
        }
    }
    ctx->pc = 0x1CB3A4u;
label_1cb3a4:
    // 0x1cb3a4: 0x128102b  sltu        $v0, $t1, $t0
    ctx->pc = 0x1cb3a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1cb3a8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1CB3A8u;
    {
        const bool branch_taken_0x1cb3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb3a8) {
            ctx->pc = 0x1CB3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB3A8u;
            // 0x1cb3ac: 0x1281021  addu        $v0, $t1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb368;
        }
    }
    ctx->pc = 0x1CB3B0u;
    // 0x1cb3b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1CB3B0u;
    {
        const bool branch_taken_0x1cb3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3B0u;
        // 0x1cb3b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb3b0) {
            ctx->pc = 0x1CB414u;
            goto label_1cb414;
        }
    }
    ctx->pc = 0x1CB3B8u;
label_1cb3b8:
    // 0x1cb3b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CB3B8u;
    {
        const bool branch_taken_0x1cb3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3B8u;
        // 0x1cb3bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb3b8) {
            ctx->pc = 0x1CB3F0u;
            goto label_1cb3f0;
        }
    }
    ctx->pc = 0x1CB3C0u;
    // 0x1cb3c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cb3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb3c4: 0x0  nop
    ctx->pc = 0x1cb3c4u;
    // NOP
label_1cb3c8:
    // 0x1cb3c8: 0xc072c32  jal         func_1CB0C8
    ctx->pc = 0x1CB3C8u;
    SET_GPR_U32(ctx, 31, 0x1CB3D0u);
    ctx->pc = 0x1CB3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3C8u;
    // 0x1cb3cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB0C8u, 0x1CB3C8u, 0x1CB3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3D0u;
label_1cb3d0:
    // 0x1cb3d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3d4: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB3D4u;
    {
        const bool branch_taken_0x1cb3d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3D4u;
        // 0x1cb3d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb3d4) {
            ctx->pc = 0x1CB3FCu;
            goto label_1cb3fc;
        }
    }
    ctx->pc = 0x1CB3DCu;
    // 0x1cb3dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb3e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CB3E0u;
    {
        const bool branch_taken_0x1cb3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3E0u;
        // 0x1cb3e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb3e0) {
            ctx->pc = 0x1CB3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb3c8;
        }
    }
    ctx->pc = 0x1CB3E8u;
    // 0x1cb3e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB3E8u;
    {
        const bool branch_taken_0x1cb3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb3e8) {
            ctx->pc = 0x1CB3FCu;
            goto label_1cb3fc;
        }
    }
    ctx->pc = 0x1CB3F0u;
label_1cb3f0:
    // 0x1cb3f0: 0xc072c32  jal         func_1CB0C8
    ctx->pc = 0x1CB3F0u;
    SET_GPR_U32(ctx, 31, 0x1CB3F8u);
    ctx->pc = 0x1CB3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3F0u;
    // 0x1cb3f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB0C8u, 0x1CB3F0u, 0x1CB3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3F8u;
label_1cb3f8:
    // 0x1cb3f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb3f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb3fc:
    // 0x1cb3fc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1CB3FCu;
    SET_GPR_U32(ctx, 31, 0x1CB404u);
    ctx->pc = 0x1CB400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3FCu;
    // 0x1cb400: 0x8e64aa44  lw          $a0, -0x55BC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1CB3FCu, 0x1CB404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB404u;
label_1cb404:
    // 0x1cb404: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB404u;
    {
        const bool branch_taken_0x1cb404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB404u;
        // 0x1cb408: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb404) {
            ctx->pc = 0x1CB414u;
            goto label_1cb414;
        }
    }
    ctx->pc = 0x1CB40Cu;
    // 0x1cb40c: 0x0  nop
    ctx->pc = 0x1cb40cu;
    // NOP
label_1cb410:
    // 0x1cb410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb414:
    // 0x1cb414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb418: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb41c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cb41cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb420: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cb420u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cb424: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cb424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb428: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB428u;
        // 0x1cb42c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB430u;
}
