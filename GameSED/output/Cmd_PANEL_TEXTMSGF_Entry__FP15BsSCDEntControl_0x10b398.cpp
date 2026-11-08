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

// Function: Cmd_PANEL_TEXTMSGF_Entry__FP15BsSCDEntControl
// Address: 0x10b398 - 0x10b474
void Cmd_PANEL_TEXTMSGF_Entry__FP15BsSCDEntControl_0x10b398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_TEXTMSGF_Entry__FP15BsSCDEntControl_0x10b398");
#endif

    switch (ctx->pc) {
        case 0x10b3c8u: goto label_10b3c8;
        case 0x10b3f4u: goto label_10b3f4;
        case 0x10b400u: goto label_10b400;
        case 0x10b424u: goto label_10b424;
        case 0x10b438u: goto label_10b438;
        case 0x10b44cu: goto label_10b44c;
        case 0x10b458u: goto label_10b458;
        default: break;
    }

    ctx->pc = 0x10b398u;

    // 0x10b398: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10b39c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b3a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10b3ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b3b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10b3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10b3b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10b3bc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10b3c0: 0xc04110c  jal         func_104430
    ctx->pc = 0x10B3C0u;
    SET_GPR_U32(ctx, 31, 0x10B3C8u);
    ctx->pc = 0x10B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3C0u;
    // 0x10b3c4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10B3C0u, 0x10B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3C8u;
label_10b3c8:
    // 0x10b3c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3cc: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10b3d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B3D0u;
    {
        const bool branch_taken_0x10b3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3D0u;
        // 0x10b3d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3d0) {
            ctx->pc = 0x10B3E8u;
            goto label_10b3e8;
        }
    }
    ctx->pc = 0x10B3D8u;
    // 0x10b3d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b3dc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10b3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10b3e0: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B3E0u;
    {
        const bool branch_taken_0x10b3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10b3e0) {
            ctx->pc = 0x10B3ECu;
            goto label_10b3ec;
        }
    }
    ctx->pc = 0x10B3E8u;
label_10b3e8:
    // 0x10b3e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10b3e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b3ec:
    // 0x10b3ec: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x10B3ECu;
    SET_GPR_U32(ctx, 31, 0x10B3F4u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x10B3ECu, 0x10B3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3F4u;
label_10b3f4:
    // 0x10b3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3f8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B3F8u;
    SET_GPR_U32(ctx, 31, 0x10B400u);
    ctx->pc = 0x10B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3F8u;
    // 0x10b3fc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B3F8u, 0x10B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B400u;
label_10b400:
    // 0x10b400: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10b400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b404: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10b404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10b408: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10b408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10b40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b410: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10b410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b414: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B414u;
    {
        const bool branch_taken_0x10b414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x10B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B414u;
        // 0x10b418: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b414) {
            ctx->pc = 0x10B428u;
            goto label_10b428;
        }
    }
    ctx->pc = 0x10B41Cu;
    // 0x10b41c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B41Cu;
    SET_GPR_U32(ctx, 31, 0x10B424u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B41Cu, 0x10B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B424u;
label_10b424:
    // 0x10b424: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10b424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b428:
    // 0x10b428: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10b428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b42c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10b42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b430: 0xc041862  jal         func_106188
    ctx->pc = 0x10B430u;
    SET_GPR_U32(ctx, 31, 0x10B438u);
    ctx->pc = 0x10B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B430u;
    // 0x10b434: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106188u, 0x10B430u, 0x10B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B438u;
label_10b438:
    // 0x10b438: 0x2610f550  addiu       $s0, $s0, -0xAB0
    ctx->pc = 0x10b438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964560));
    // 0x10b43c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10b43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b440: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10b440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b444: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x10B444u;
    SET_GPR_U32(ctx, 31, 0x10B44Cu);
    ctx->pc = 0x10B448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B444u;
    // 0x10b448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x10B444u, 0x10B44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B44Cu;
label_10b44c:
    // 0x10b44c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10b44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b450: 0xc063b2e  jal         func_18ECB8
    ctx->pc = 0x10B450u;
    SET_GPR_U32(ctx, 31, 0x10B458u);
    ctx->pc = 0x10B454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B450u;
    // 0x10b454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ECB8u, 0x10B450u, 0x10B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B458u;
label_10b458:
    // 0x10b458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b45c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b45cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b460: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b464: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10b464u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b468: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b46c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B46Cu;
        // 0x10b470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B474u;
}
