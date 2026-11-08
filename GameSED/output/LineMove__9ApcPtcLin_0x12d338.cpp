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

// Function: LineMove__9ApcPtcLin
// Address: 0x12d338 - 0x12d424
void LineMove__9ApcPtcLin_0x12d338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LineMove__9ApcPtcLin_0x12d338");
#endif

    switch (ctx->pc) {
        case 0x12d360u: goto label_12d360;
        case 0x12d378u: goto label_12d378;
        case 0x12d3a0u: goto label_12d3a0;
        case 0x12d3e0u: goto label_12d3e0;
        case 0x12d3e8u: goto label_12d3e8;
        case 0x12d3f0u: goto label_12d3f0;
        default: break;
    }

    ctx->pc = 0x12d338u;

    // 0x12d338: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12d338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12d33c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12d33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12d340: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12d340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d348: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12d348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12d34c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12d34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12d350: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12d350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12d354: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12d354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12d358: 0xc04b800  jal         func_12E000
    ctx->pc = 0x12D358u;
    SET_GPR_U32(ctx, 31, 0x12D360u);
    ctx->pc = 0x12D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D358u;
    // 0x12d35c: 0x8e30015c  lw          $s0, 0x15C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E000u, 0x12D358u, 0x12D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D360u;
label_12d360:
    // 0x12d360: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x12D360u;
    {
        const bool branch_taken_0x12d360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D360u;
        // 0x12d364: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d360) {
            ctx->pc = 0x12D404u;
            goto label_12d404;
        }
    }
    ctx->pc = 0x12D368u;
    // 0x12d368: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x12d368u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12d36c: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x12d36cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d370: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x12d370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12d374: 0x0  nop
    ctx->pc = 0x12d374u;
    // NOP
label_12d378:
    // 0x12d378: 0x10520017  beq         $v0, $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x12D378u;
    {
        const bool branch_taken_0x12d378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x12D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D378u;
        // 0x12d37c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d378) {
            ctx->pc = 0x12D3D8u;
            goto label_12d3d8;
        }
    }
    ctx->pc = 0x12D380u;
    // 0x12d380: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D380u;
    {
        const bool branch_taken_0x12d380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d380) {
            ctx->pc = 0x12D384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D380u;
            // 0x12d384: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D3A8u;
            goto label_12d3a8;
        }
    }
    ctx->pc = 0x12D388u;
    // 0x12d388: 0x5054001b  beql        $v0, $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x12D388u;
    {
        const bool branch_taken_0x12d388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x12d388) {
            ctx->pc = 0x12D38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D388u;
            // 0x12d38c: 0xae130014  sw          $s3, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D3F8u;
            goto label_12d3f8;
        }
    }
    ctx->pc = 0x12D390u;
    // 0x12d390: 0x1453001a  bne         $v0, $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x12D390u;
    {
        const bool branch_taken_0x12d390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x12D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D390u;
        // 0x12d394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d390) {
            ctx->pc = 0x12D3FCu;
            goto label_12d3fc;
        }
    }
    ctx->pc = 0x12D398u;
    // 0x12d398: 0xc04b46c  jal         func_12D1B0
    ctx->pc = 0x12D398u;
    SET_GPR_U32(ctx, 31, 0x12D3A0u);
    ctx->pc = 0x12D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D398u;
    // 0x12d39c: 0x8e1000c4  lw          $s0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D1B0u, 0x12D398u, 0x12D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3A0u;
label_12d3a0:
    // 0x12d3a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12D3A0u;
    {
        const bool branch_taken_0x12d3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d3a0) {
            ctx->pc = 0x12D3FCu;
            goto label_12d3fc;
        }
    }
    ctx->pc = 0x12D3A8u;
label_12d3a8:
    // 0x12d3a8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D3A8u;
    {
        const bool branch_taken_0x12d3a8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3A8u;
        // 0x12d3ac: 0x26030010  addiu       $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3a8) {
            ctx->pc = 0x12D3B8u;
            goto label_12d3b8;
        }
    }
    ctx->pc = 0x12D3B0u;
    // 0x12d3b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12D3B0u;
    {
        const bool branch_taken_0x12d3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3B0u;
        // 0x12d3b4: 0xae120014  sw          $s2, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3b0) {
            ctx->pc = 0x12D3C4u;
            goto label_12d3c4;
        }
    }
    ctx->pc = 0x12D3B8u;
label_12d3b8:
    // 0x12d3b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d3bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12d3c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_12d3c4:
    // 0x12d3c4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x12d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12d3c8: 0x1052000c  beq         $v0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x12D3C8u;
    {
        const bool branch_taken_0x12d3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x12d3c8) {
            ctx->pc = 0x12D3FCu;
            goto label_12d3fc;
        }
    }
    ctx->pc = 0x12D3D0u;
    // 0x12d3d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12D3D0u;
    {
        const bool branch_taken_0x12d3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3D0u;
        // 0x12d3d4: 0x8e1000c4  lw          $s0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3d0) {
            ctx->pc = 0x12D3FCu;
            goto label_12d3fc;
        }
    }
    ctx->pc = 0x12D3D8u;
label_12d3d8:
    // 0x12d3d8: 0xc047ac8  jal         func_11EB20
    ctx->pc = 0x12D3D8u;
    SET_GPR_U32(ctx, 31, 0x12D3E0u);
    ctx->pc = 0x12D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D3D8u;
    // 0x12d3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB20u, 0x12D3D8u, 0x12D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3E0u;
label_12d3e0:
    // 0x12d3e0: 0xc047a6a  jal         func_11E9A8
    ctx->pc = 0x12D3E0u;
    SET_GPR_U32(ctx, 31, 0x12D3E8u);
    ctx->pc = 0x12D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D3E0u;
    // 0x12d3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E9A8u, 0x12D3E0u, 0x12D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3E8u;
label_12d3e8:
    // 0x12d3e8: 0xc04b2d0  jal         func_12CB40
    ctx->pc = 0x12D3E8u;
    SET_GPR_U32(ctx, 31, 0x12D3F0u);
    ctx->pc = 0x12D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D3E8u;
    // 0x12d3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CB40u, 0x12D3E8u, 0x12D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3F0u;
label_12d3f0:
    // 0x12d3f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12D3F0u;
    {
        const bool branch_taken_0x12d3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3F0u;
        // 0x12d3f4: 0x8e1000c4  lw          $s0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3f0) {
            ctx->pc = 0x12D3FCu;
            goto label_12d3fc;
        }
    }
    ctx->pc = 0x12D3F8u;
label_12d3f8:
    // 0x12d3f8: 0x8e1000c4  lw          $s0, 0xC4($s0)
    ctx->pc = 0x12d3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_12d3fc:
    // 0x12d3fc: 0x5600ffde  bnel        $s0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x12D3FCu;
    {
        const bool branch_taken_0x12d3fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d3fc) {
            ctx->pc = 0x12D400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D3FCu;
            // 0x12d400: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d378;
        }
    }
    ctx->pc = 0x12D404u;
label_12d404:
    // 0x12d404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12d408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d40c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12d40cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d410: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12d410u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d414: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12d414u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d418: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12d418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d41c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D41Cu;
        // 0x12d420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D424u;
}
