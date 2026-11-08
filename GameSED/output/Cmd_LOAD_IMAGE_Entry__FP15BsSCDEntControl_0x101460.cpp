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

// Function: Cmd_LOAD_IMAGE_Entry__FP15BsSCDEntControl
// Address: 0x101460 - 0x1015f4
void Cmd_LOAD_IMAGE_Entry__FP15BsSCDEntControl_0x101460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_IMAGE_Entry__FP15BsSCDEntControl_0x101460");
#endif

    switch (ctx->pc) {
        case 0x101490u: goto label_101490;
        case 0x1014b8u: goto label_1014b8;
        case 0x1014d0u: goto label_1014d0;
        case 0x1014dcu: goto label_1014dc;
        case 0x10152cu: goto label_10152c;
        case 0x101544u: goto label_101544;
        case 0x101578u: goto label_101578;
        case 0x101580u: goto label_101580;
        case 0x101598u: goto label_101598;
        case 0x1015a8u: goto label_1015a8;
        case 0x1015b8u: goto label_1015b8;
        case 0x1015c0u: goto label_1015c0;
        case 0x1015d4u: goto label_1015d4;
        default: break;
    }

    ctx->pc = 0x101460u;

    // 0x101460: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x101460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x101464: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x101464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x101468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10146c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x10146cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x101470: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x101470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x101474: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x101474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x101478: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x101478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x10147c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x10147cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x101480: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x101480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x101484: 0x8611000e  lh          $s1, 0xE($s0)
    ctx->pc = 0x101484u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x101488: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101488u;
    SET_GPR_U32(ctx, 31, 0x101490u);
    ctx->pc = 0x10148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101488u;
    // 0x10148c: 0x8c540044  lw          $s4, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101488u, 0x101490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101490u;
label_101490:
    // 0x101490: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x101490u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101494: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x101494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x101498: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x101498u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x10149c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10149cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1014a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1014a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1014a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1014A4u;
    {
        const bool branch_taken_0x1014a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1014A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014A4u;
        // 0x1014a8: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014a4) {
            ctx->pc = 0x1014C0u;
            goto label_1014c0;
        }
    }
    ctx->pc = 0x1014ACu;
    // 0x1014ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1014acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014b0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1014B0u;
    SET_GPR_U32(ctx, 31, 0x1014B8u);
    ctx->pc = 0x1014B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014B0u;
    // 0x1014b4: 0x24841a40  addiu       $a0, $a0, 0x1A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1014B0u, 0x1014B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014B8u;
label_1014b8:
    // 0x1014b8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1014B8u;
    {
        const bool branch_taken_0x1014b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1014BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014B8u;
        // 0x1014bc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014b8) {
            ctx->pc = 0x1015D8u;
            goto label_1015d8;
        }
    }
    ctx->pc = 0x1014C0u;
label_1014c0:
    // 0x1014c0: 0x16200037  bnez        $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1014C0u;
    {
        const bool branch_taken_0x1014c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1014C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014C0u;
        // 0x1014c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014c0) {
            ctx->pc = 0x1015A0u;
            goto label_1015a0;
        }
    }
    ctx->pc = 0x1014C8u;
    // 0x1014c8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1014C8u;
    SET_GPR_U32(ctx, 31, 0x1014D0u);
    ctx->pc = 0x1014CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014C8u;
    // 0x1014cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1014C8u, 0x1014D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014D0u;
label_1014d0:
    // 0x1014d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1014d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014d4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1014D4u;
    SET_GPR_U32(ctx, 31, 0x1014DCu);
    ctx->pc = 0x1014D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014D4u;
    // 0x1014d8: 0x28203  sra         $s0, $v0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1014D4u, 0x1014DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014DCu;
label_1014dc:
    // 0x1014dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1014dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1014e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1014e4: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1014E4u;
    {
        const bool branch_taken_0x1014e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1014E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014E4u;
        // 0x1014e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014e4) {
            ctx->pc = 0x101500u;
            goto label_101500;
        }
    }
    ctx->pc = 0x1014ECu;
    // 0x1014ec: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1014ECu;
    {
        const bool branch_taken_0x1014ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1014F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014ECu;
        // 0x1014f0: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014ec) {
            ctx->pc = 0x101550u;
            goto label_101550;
        }
    }
    ctx->pc = 0x1014F4u;
    // 0x1014f4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1014F4u;
    {
        const bool branch_taken_0x1014f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1014F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014F4u;
        // 0x1014f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014f4) {
            ctx->pc = 0x101560u;
            goto label_101560;
        }
    }
    ctx->pc = 0x1014FCu;
    // 0x1014fc: 0x0  nop
    ctx->pc = 0x1014fcu;
    // NOP
label_101500:
    // 0x101500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101504: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x101504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x101508: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x101508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x10150c: 0x24050205  addiu       $a1, $zero, 0x205
    ctx->pc = 0x10150cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
    // 0x101510: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x101510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x101514: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x101514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x101518: 0x10650017  beq         $v1, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x101518u;
    {
        const bool branch_taken_0x101518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x10151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101518u;
        // 0x10151c: 0x8c920170  lw          $s2, 0x170($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101518) {
            ctx->pc = 0x101578u;
            goto label_101578;
        }
    }
    ctx->pc = 0x101520u;
    // 0x101520: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x101520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x101524: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x101524u;
    SET_GPR_U32(ctx, 31, 0x10152Cu);
    ctx->pc = 0x101528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101524u;
    // 0x101528: 0x24841a58  addiu       $a0, $a0, 0x1A58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x101524u, 0x10152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10152Cu;
label_10152c:
    // 0x10152c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10152cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x101530: 0x24a51a78  addiu       $a1, $a1, 0x1A78
    ctx->pc = 0x101530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6776));
    // 0x101534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101538: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x101538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10153c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10153Cu;
    SET_GPR_U32(ctx, 31, 0x101544u);
    ctx->pc = 0x101540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10153Cu;
    // 0x101540: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10153Cu, 0x101544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101544u;
label_101544:
    // 0x101544: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x101544u;
    {
        const bool branch_taken_0x101544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101544) {
            ctx->pc = 0x101578u;
            goto label_101578;
        }
    }
    ctx->pc = 0x10154Cu;
    // 0x10154c: 0x0  nop
    ctx->pc = 0x10154cu;
    // NOP
label_101550:
    // 0x101550: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x101550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x101554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101558: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x101558u;
    {
        const bool branch_taken_0x101558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101558u;
        // 0x10155c: 0x8c520374  lw          $s2, 0x374($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101558) {
            ctx->pc = 0x101578u;
            goto label_101578;
        }
    }
    ctx->pc = 0x101560u;
label_101560:
    // 0x101560: 0x24a51a78  addiu       $a1, $a1, 0x1A78
    ctx->pc = 0x101560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6776));
    // 0x101564: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x101564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x101568: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x101568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10156c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10156cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101570: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x101570u;
    SET_GPR_U32(ctx, 31, 0x101578u);
    ctx->pc = 0x101574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101570u;
    // 0x101574: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x101570u, 0x101578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101578u;
label_101578:
    // 0x101578: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x101578u;
    SET_GPR_U32(ctx, 31, 0x101580u);
    ctx->pc = 0x10157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101578u;
    // 0x10157c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x101578u, 0x101580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101580u;
label_101580:
    // 0x101580: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x101580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101584: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101588: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x101588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10158c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10158cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101590: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x101590u;
    SET_GPR_U32(ctx, 31, 0x101598u);
    ctx->pc = 0x101594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101590u;
    // 0x101594: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x101590u, 0x101598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101598u;
label_101598:
    // 0x101598: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x101598u;
    {
        const bool branch_taken_0x101598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101598u;
        // 0x10159c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101598) {
            ctx->pc = 0x1015C8u;
            goto label_1015c8;
        }
    }
    ctx->pc = 0x1015A0u;
label_1015a0:
    // 0x1015a0: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x1015A0u;
    SET_GPR_U32(ctx, 31, 0x1015A8u);
    ctx->pc = 0x1015A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015A0u;
    // 0x1015a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x1015A0u, 0x1015A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015A8u;
label_1015a8:
    // 0x1015a8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1015a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1015ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1015acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1015b0: 0xc067392  jal         func_19CE48
    ctx->pc = 0x1015B0u;
    SET_GPR_U32(ctx, 31, 0x1015B8u);
    ctx->pc = 0x1015B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015B0u;
    // 0x1015b4: 0x24a5cf30  addiu       $a1, $a1, -0x30D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x1015B0u, 0x1015B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015B8u;
label_1015b8:
    // 0x1015b8: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x1015B8u;
    SET_GPR_U32(ctx, 31, 0x1015C0u);
    ctx->pc = 0x1015BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015B8u;
    // 0x1015bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x1015B8u, 0x1015C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015C0u;
label_1015c0:
    // 0x1015c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1015c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1015c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1015c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1015c8:
    // 0x1015c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1015c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1015cc: 0xc0403e0  jal         func_100F80
    ctx->pc = 0x1015CCu;
    SET_GPR_U32(ctx, 31, 0x1015D4u);
    ctx->pc = 0x1015D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015CCu;
    // 0x1015d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100F80u, 0x1015CCu, 0x1015D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015D4u;
label_1015d4:
    // 0x1015d4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1015d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1015d8:
    // 0x1015d8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1015d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1015dc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1015dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1015e0: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1015e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1015e4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1015e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1015e8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1015e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1015ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1015ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1015F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015ECu;
        // 0x1015f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1015ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1015F4u;
}
