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

// Function: DataLoad__8WcCdpackiP6WcFilei
// Address: 0x17d330 - 0x17d40c
void DataLoad__8WcCdpackiP6WcFilei_0x17d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DataLoad__8WcCdpackiP6WcFilei_0x17d330");
#endif

    switch (ctx->pc) {
        case 0x17d364u: goto label_17d364;
        case 0x17d388u: goto label_17d388;
        case 0x17d39cu: goto label_17d39c;
        case 0x17d3c8u: goto label_17d3c8;
        case 0x17d3d4u: goto label_17d3d4;
        case 0x17d3e8u: goto label_17d3e8;
        case 0x17d3f0u: goto label_17d3f0;
        default: break;
    }

    ctx->pc = 0x17d330u;

    // 0x17d330: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17d330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17d334: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x17d334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x17d338: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17d338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d33c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x17d33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x17d340: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17d340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d344: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x17d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x17d348: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17d348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d34c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x17d34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x17d350: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17d350u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d354: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17d354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17d358: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x17d358u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x17d35c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17D35Cu;
    SET_GPR_U32(ctx, 31, 0x17D364u);
    ctx->pc = 0x17D360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D35Cu;
    // 0x17d360: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17D35Cu, 0x17D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D364u;
label_17d364:
    // 0x17d364: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17d364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17d368: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x17d368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17d36c: 0x24847be8  addiu       $a0, $a0, 0x7BE8
    ctx->pc = 0x17d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31720));
    // 0x17d370: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x17d370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17d374: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17d374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17d378: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D378u;
    {
        const bool branch_taken_0x17d378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D378u;
        // 0x17d37c: 0x26250028  addiu       $a1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d378) {
            ctx->pc = 0x17D39Cu;
            goto label_17d39c;
        }
    }
    ctx->pc = 0x17D380u;
    // 0x17d380: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x17D380u;
    SET_GPR_U32(ctx, 31, 0x17D388u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x17D380u, 0x17D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D388u;
label_17d388:
    // 0x17d388: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17d388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17d38c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x17d38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x17d390: 0x24a57c08  addiu       $a1, $a1, 0x7C08
    ctx->pc = 0x17d390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31752));
    // 0x17d394: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17D394u;
    SET_GPR_U32(ctx, 31, 0x17D39Cu);
    ctx->pc = 0x17D398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D394u;
    // 0x17d398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17D394u, 0x17D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D39Cu;
label_17d39c:
    // 0x17d39c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x17d39cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17d3a0: 0x3c090018  lui         $t1, 0x18
    ctx->pc = 0x17d3a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24 << 16));
    // 0x17d3a4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x17d3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17d3a8: 0x128043  sra         $s0, $s2, 1
    ctx->pc = 0x17d3a8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 1));
    // 0x17d3ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17d3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17d3b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17d3b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3b8: 0x2529d548  addiu       $t1, $t1, -0x2AB8
    ctx->pc = 0x17d3b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956360));
    // 0x17d3bc: 0x26250028  addiu       $a1, $s1, 0x28
    ctx->pc = 0x17d3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x17d3c0: 0xc05e31a  jal         func_178C68
    ctx->pc = 0x17D3C0u;
    SET_GPR_U32(ctx, 31, 0x17D3C8u);
    ctx->pc = 0x17D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3C0u;
    // 0x17d3c4: 0x32100001  andi        $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178C68u, 0x17D3C0u, 0x17D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3C8u;
label_17d3c8:
    // 0x17d3c8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17d3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17d3cc: 0xc0686ba  jal         func_1A1AE8
    ctx->pc = 0x17D3CCu;
    SET_GPR_U32(ctx, 31, 0x17D3D4u);
    ctx->pc = 0x17D3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3CCu;
    // 0x17d3d0: 0x24847c08  addiu       $a0, $a0, 0x7C08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x17D3CCu, 0x17D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3D4u;
label_17d3d4:
    // 0x17d3d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17d3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x17d3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17d3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3e0: 0xc05f3d8  jal         func_17CF60
    ctx->pc = 0x17D3E0u;
    SET_GPR_U32(ctx, 31, 0x17D3E8u);
    ctx->pc = 0x17D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3E0u;
    // 0x17d3e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF60u, 0x17D3E0u, 0x17D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3E8u;
label_17d3e8:
    // 0x17d3e8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17D3E8u;
    SET_GPR_U32(ctx, 31, 0x17D3F0u);
    ctx->pc = 0x17D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3E8u;
    // 0x17d3ec: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17D3E8u, 0x17D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3F0u;
label_17d3f0:
    // 0x17d3f0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x17d3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17d3f4: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x17d3f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17d3f8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x17d3f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17d3fc: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x17d3fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17d400: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17d400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17d404: 0x3e00008  jr          $ra
    ctx->pc = 0x17D404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D404u;
        // 0x17d408: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D40Cu;
}
