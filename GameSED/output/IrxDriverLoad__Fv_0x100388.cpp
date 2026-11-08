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

// Function: IrxDriverLoad__Fv
// Address: 0x100388 - 0x1004c4
void IrxDriverLoad__Fv_0x100388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IrxDriverLoad__Fv_0x100388");
#endif

    switch (ctx->pc) {
        case 0x1003b8u: goto label_1003b8;
        case 0x1003c0u: goto label_1003c0;
        case 0x1003c8u: goto label_1003c8;
        case 0x1003d0u: goto label_1003d0;
        case 0x1003d8u: goto label_1003d8;
        case 0x1003e0u: goto label_1003e0;
        case 0x1003f0u: goto label_1003f0;
        case 0x1003f8u: goto label_1003f8;
        case 0x100400u: goto label_100400;
        case 0x100408u: goto label_100408;
        case 0x100410u: goto label_100410;
        case 0x100418u: goto label_100418;
        case 0x100448u: goto label_100448;
        case 0x100458u: goto label_100458;
        case 0x10046cu: goto label_10046c;
        case 0x10047cu: goto label_10047c;
        case 0x100490u: goto label_100490;
        default: break;
    }

    ctx->pc = 0x100388u;

    // 0x100388: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x100388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x10038c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10038cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100390: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x100390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x100394: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x100394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x100398: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x100398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x10039c: 0xffb30218  sd          $s3, 0x218($sp)
    ctx->pc = 0x10039cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 19));
    // 0x1003a0: 0xffb40220  sd          $s4, 0x220($sp)
    ctx->pc = 0x1003a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 20));
    // 0x1003a4: 0xffb50228  sd          $s5, 0x228($sp)
    ctx->pc = 0x1003a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 21));
    // 0x1003a8: 0xffb60230  sd          $s6, 0x230($sp)
    ctx->pc = 0x1003a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 22));
    // 0x1003ac: 0xffbf0238  sd          $ra, 0x238($sp)
    ctx->pc = 0x1003acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 31));
    // 0x1003b0: 0xc06ea98  jal         func_1BAA60
    ctx->pc = 0x1003B0u;
    SET_GPR_U32(ctx, 31, 0x1003B8u);
    ctx->pc = 0x1003B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003B0u;
    // 0x1003b4: 0x3c100025  lui         $s0, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAA60u, 0x1003B0u, 0x1003B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003B8u;
label_1003b8:
    // 0x1003b8: 0xc06ebce  jal         func_1BAF38
    ctx->pc = 0x1003B8u;
    SET_GPR_U32(ctx, 31, 0x1003C0u);
    ctx->pc = 0x1003BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003B8u;
    // 0x1003bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAF38u, 0x1003B8u, 0x1003C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003C0u;
label_1003c0:
    // 0x1003c0: 0xc06c408  jal         func_1B1020
    ctx->pc = 0x1003C0u;
    SET_GPR_U32(ctx, 31, 0x1003C8u);
    ctx->pc = 0x1003C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003C0u;
    // 0x1003c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1020u, 0x1003C0u, 0x1003C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003C8u;
label_1003c8:
    // 0x1003c8: 0xc06daa4  jal         func_1B6A90
    ctx->pc = 0x1003C8u;
    SET_GPR_U32(ctx, 31, 0x1003D0u);
    ctx->pc = 0x1003CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003C8u;
    // 0x1003cc: 0x260417a0  addiu       $a0, $s0, 0x17A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6A90u, 0x1003C8u, 0x1003D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003D0u;
label_1003d0:
    // 0x1003d0: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1003D0u;
    {
        const bool branch_taken_0x1003d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003d0) {
            ctx->pc = 0x1003C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1003c8;
        }
    }
    ctx->pc = 0x1003D8u;
label_1003d8:
    // 0x1003d8: 0xc06da96  jal         func_1B6A58
    ctx->pc = 0x1003D8u;
    SET_GPR_U32(ctx, 31, 0x1003E0u);
    ctx->pc = 0x1B6A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6A58u, 0x1003D8u, 0x1003E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003E0u;
label_1003e0:
    // 0x1003e0: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1003E0u;
    {
        const bool branch_taken_0x1003e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003e0) {
            ctx->pc = 0x1003D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1003d8;
        }
    }
    ctx->pc = 0x1003E8u;
    // 0x1003e8: 0xc06c408  jal         func_1B1020
    ctx->pc = 0x1003E8u;
    SET_GPR_U32(ctx, 31, 0x1003F0u);
    ctx->pc = 0x1003ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003E8u;
    // 0x1003ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1020u, 0x1003E8u, 0x1003F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003F0u;
label_1003f0:
    // 0x1003f0: 0xc06d590  jal         func_1B5640
    ctx->pc = 0x1003F0u;
    SET_GPR_U32(ctx, 31, 0x1003F8u);
    ctx->pc = 0x1B5640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5640u, 0x1003F0u, 0x1003F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003F8u;
label_1003f8:
    // 0x1003f8: 0xc06ca14  jal         func_1B2850
    ctx->pc = 0x1003F8u;
    SET_GPR_U32(ctx, 31, 0x100400u);
    ctx->pc = 0x1B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2850u, 0x1003F8u, 0x100400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100400u;
label_100400:
    // 0x100400: 0xc06ea98  jal         func_1BAA60
    ctx->pc = 0x100400u;
    SET_GPR_U32(ctx, 31, 0x100408u);
    ctx->pc = 0x100404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100400u;
    // 0x100404: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAA60u, 0x100400u, 0x100408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100408u;
label_100408:
    // 0x100408: 0xc06ebce  jal         func_1BAF38
    ctx->pc = 0x100408u;
    SET_GPR_U32(ctx, 31, 0x100410u);
    ctx->pc = 0x10040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100408u;
    // 0x10040c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAF38u, 0x100408u, 0x100410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100410u;
label_100410:
    // 0x100410: 0xc06eb50  jal         func_1BAD40
    ctx->pc = 0x100410u;
    SET_GPR_U32(ctx, 31, 0x100418u);
    ctx->pc = 0x100414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100410u;
    // 0x100414: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAD40u, 0x100410u, 0x100418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100418u;
label_100418:
    // 0x100418: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x100418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x10041c: 0x2463ac00  addiu       $v1, $v1, -0x5400
    ctx->pc = 0x10041cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945792));
    // 0x100420: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x100420u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1EAC00u));
    // 0x100424: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x100424u;
    {
        const bool branch_taken_0x100424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100424u;
        // 0x100428: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100424) {
            ctx->pc = 0x10049Cu;
            goto label_10049c;
        }
    }
    ctx->pc = 0x10042Cu;
    // 0x10042c: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x10042cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x100430: 0x3c160026  lui         $s6, 0x26
    ctx->pc = 0x100430u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)38 << 16));
    // 0x100434: 0x3c150026  lui         $s5, 0x26
    ctx->pc = 0x100434u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)38 << 16));
    // 0x100438: 0x3c140025  lui         $s4, 0x25
    ctx->pc = 0x100438u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    // 0x10043c: 0x3c130026  lui         $s3, 0x26
    ctx->pc = 0x10043cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)38 << 16));
    // 0x100440: 0x3c120025  lui         $s2, 0x25
    ctx->pc = 0x100440u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
    // 0x100444: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x100444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100448:
    // 0x100448: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x100448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10044c: 0x26c6cf08  addiu       $a2, $s6, -0x30F8
    ctx->pc = 0x10044cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954760));
    // 0x100450: 0xc066ea0  jal         func_19BA80
    ctx->pc = 0x100450u;
    SET_GPR_U32(ctx, 31, 0x100458u);
    ctx->pc = 0x100454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100450u;
    // 0x100454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA80u, 0x100450u, 0x100458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100458u;
label_100458:
    // 0x100458: 0x26a5cf10  addiu       $a1, $s5, -0x30F0
    ctx->pc = 0x100458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954768));
    // 0x10045c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10045cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100460: 0x268617c0  addiu       $a2, $s4, 0x17C0
    ctx->pc = 0x100460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 6080));
    // 0x100464: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x100464u;
    SET_GPR_U32(ctx, 31, 0x10046Cu);
    ctx->pc = 0x100468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100464u;
    // 0x100468: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x100464u, 0x10046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10046Cu;
label_10046c:
    // 0x10046c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10046cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100470: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x100470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100474: 0xc06d964  jal         func_1B6590
    ctx->pc = 0x100474u;
    SET_GPR_U32(ctx, 31, 0x10047Cu);
    ctx->pc = 0x100478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100474u;
    // 0x100478: 0x2666cf18  addiu       $a2, $s3, -0x30E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6590u, 0x100474u, 0x10047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10047Cu;
label_10047c:
    // 0x10047c: 0x264417d0  addiu       $a0, $s2, 0x17D0
    ctx->pc = 0x10047cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6096));
    // 0x100480: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100480u;
    {
        const bool branch_taken_0x100480 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x100484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100480u;
        // 0x100484: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100480) {
            ctx->pc = 0x100490u;
            goto label_100490;
        }
    }
    ctx->pc = 0x100488u;
    // 0x100488: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x100488u;
    SET_GPR_U32(ctx, 31, 0x100490u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x100488u, 0x100490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100490u;
label_100490:
    // 0x100490: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x100490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x100494: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x100494u;
    {
        const bool branch_taken_0x100494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100494) {
            ctx->pc = 0x100498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100494u;
            // 0x100498: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100448;
        }
    }
    ctx->pc = 0x10049Cu;
label_10049c:
    // 0x10049c: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x10049cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1004a0: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x1004a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1004a4: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x1004a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1004a8: 0xdfb30218  ld          $s3, 0x218($sp)
    ctx->pc = 0x1004a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1004ac: 0xdfb40220  ld          $s4, 0x220($sp)
    ctx->pc = 0x1004acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1004b0: 0xdfb50228  ld          $s5, 0x228($sp)
    ctx->pc = 0x1004b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x1004b4: 0xdfb60230  ld          $s6, 0x230($sp)
    ctx->pc = 0x1004b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1004b8: 0xdfbf0238  ld          $ra, 0x238($sp)
    ctx->pc = 0x1004b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1004bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1004BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1004C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004BCu;
        // 0x1004c0: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1004BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1004C4u;
}
