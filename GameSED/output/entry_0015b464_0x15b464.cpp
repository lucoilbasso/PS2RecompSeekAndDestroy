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

// Function: entry_0015b464
// Address: 0x15b464 - 0x15b60c
void entry_0015b464_0x15b464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b464_0x15b464");
#endif

    switch (ctx->pc) {
        case 0x15b4c8u: goto label_15b4c8;
        case 0x15b4d0u: goto label_15b4d0;
        case 0x15b4f0u: goto label_15b4f0;
        case 0x15b4f8u: goto label_15b4f8;
        case 0x15b520u: goto label_15b520;
        case 0x15b530u: goto label_15b530;
        case 0x15b54cu: goto label_15b54c;
        default: break;
    }

    ctx->pc = 0x15b464u;

label_15b464:
    // 0x15b464: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15b464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15b468:
    // 0x15b468: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_15b46c:
    // 0x15b46c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15b46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_15b470:
    // 0x15b470: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x15b470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_15b474:
    // 0x15b474: 0x96c2001e  lhu         $v0, 0x1E($s6)
    ctx->pc = 0x15b474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 30)));
label_15b478:
    // 0x15b478: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x15b478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_15b47c:
    // 0x15b47c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x15b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_15b480:
    // 0x15b480: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x15b480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15b484:
    // 0x15b484: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x15b484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_15b488:
    // 0x15b488: 0x96c70014  lhu         $a3, 0x14($s6)
    ctx->pc = 0x15b488u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
label_15b48c:
    // 0x15b48c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15b490:
    // 0x15b490: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x15b490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_15b494:
    // 0x15b494: 0x30e74000  andi        $a3, $a3, 0x4000
    ctx->pc = 0x15b494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
label_15b498:
    // 0x15b498: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x15b498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_15b49c:
    // 0x15b49c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x15b49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_15b4a0:
    // 0x15b4a0: 0x10e00105  beqz        $a3, . + 4 + (0x105 << 2)
label_15b4a4:
    if (ctx->pc == 0x15B4A4u) {
        ctx->pc = 0x15B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4A0u;
        // 0x15b4a4: 0x247e0080  addiu       $fp, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4A8u;
        goto label_15b4a8;
    }
    ctx->pc = 0x15B4A0u;
    {
        const bool branch_taken_0x15b4a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4A0u;
        // 0x15b4a4: 0x247e0080  addiu       $fp, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4a0) {
            ctx->pc = 0x15B8B8u;
            return;
        }
    }
    ctx->pc = 0x15B4A8u;
label_15b4a8:
    // 0x15b4a8: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x15b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_15b4ac:
    // 0x15b4ac: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15b4b0:
    // 0x15b4b0: 0x2454a2e0  addiu       $s4, $v0, -0x5D20
    ctx->pc = 0x15b4b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943456));
label_15b4b4:
    // 0x15b4b4: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x15b4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15b4b8:
    // 0x15b4b8: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15b4b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15b4bc:
    // 0x15b4bc: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15b4bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15b4c0:
    // 0x15b4c0: 0xc06bd28  jal         func_1AF4A0
label_15b4c4:
    if (ctx->pc == 0x15B4C4u) {
        ctx->pc = 0x15B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4C0u;
        // 0x15b4c4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4C8u;
        goto label_15b4c8;
    }
    ctx->pc = 0x15B4C0u;
    SET_GPR_U32(ctx, 31, 0x15B4C8u);
    ctx->pc = 0x15B4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B4C0u;
    // 0x15b4c4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15B4C0u, 0x15B4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B4C8u;
label_15b4c8:
    // 0x15b4c8: 0xc06bd20  jal         func_1AF480
label_15b4cc:
    if (ctx->pc == 0x15B4CCu) {
        ctx->pc = 0x15B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4C8u;
        // 0x15b4cc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4D0u;
        goto label_15b4d0;
    }
    ctx->pc = 0x15B4C8u;
    SET_GPR_U32(ctx, 31, 0x15B4D0u);
    ctx->pc = 0x15B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B4C8u;
    // 0x15b4cc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15B4C8u, 0x15B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B4D0u;
label_15b4d0:
    // 0x15b4d0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15b4d4:
    // 0x15b4d4: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x15b4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15b4d8:
    // 0x15b4d8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15b4dc:
    // 0x15b4dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15b4e0:
    // 0x15b4e0: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15b4e4:
    // 0x15b4e4: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x15b4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15b4e8:
    // 0x15b4e8: 0xc0682b2  jal         func_1A0AC8
label_15b4ec:
    if (ctx->pc == 0x15B4ECu) {
        ctx->pc = 0x15B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4E8u;
        // 0x15b4ec: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4F0u;
        goto label_15b4f0;
    }
    ctx->pc = 0x15B4E8u;
    SET_GPR_U32(ctx, 31, 0x15B4F0u);
    ctx->pc = 0x15B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B4E8u;
    // 0x15b4ec: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15B4E8u, 0x15B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B4F0u;
label_15b4f0:
    // 0x15b4f0: 0xc0682b6  jal         func_1A0AD8
label_15b4f4:
    if (ctx->pc == 0x15B4F4u) {
        ctx->pc = 0x15B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4F0u;
        // 0x15b4f4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4F8u;
        goto label_15b4f8;
    }
    ctx->pc = 0x15B4F0u;
    SET_GPR_U32(ctx, 31, 0x15B4F8u);
    ctx->pc = 0x15B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B4F0u;
    // 0x15b4f4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15B4F0u, 0x15B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B4F8u;
label_15b4f8:
    // 0x15b4f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15b4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15b4fc:
    // 0x15b4fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15b4fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b500:
    // 0x15b500: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15b500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15b504:
    // 0x15b504: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x15b504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15b508:
    // 0x15b508: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15b508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15b50c:
    // 0x15b50c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_15b510:
    // 0x15b510: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15b510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b514:
    // 0x15b514: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15b514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15b518:
    // 0x15b518: 0xc062cb0  jal         func_18B2C0
label_15b51c:
    if (ctx->pc == 0x15B51Cu) {
        ctx->pc = 0x15B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B518u;
        // 0x15b51c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B520u;
        goto label_15b520;
    }
    ctx->pc = 0x15B518u;
    SET_GPR_U32(ctx, 31, 0x15B520u);
    ctx->pc = 0x15B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B518u;
    // 0x15b51c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15B518u, 0x15B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B520u;
label_15b520:
    // 0x15b520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15b520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b524:
    // 0x15b524: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b528:
    // 0x15b528: 0xc06825c  jal         func_1A0970
label_15b52c:
    if (ctx->pc == 0x15B52Cu) {
        ctx->pc = 0x15B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B528u;
        // 0x15b52c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B530u;
        goto label_15b530;
    }
    ctx->pc = 0x15B528u;
    SET_GPR_U32(ctx, 31, 0x15B530u);
    ctx->pc = 0x15B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B528u;
    // 0x15b52c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15B528u, 0x15B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B530u;
label_15b530:
    // 0x15b530: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15b530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15b534:
    // 0x15b534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b538:
    // 0x15b538: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15b53c:
    // 0x15b53c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b53cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b540:
    // 0x15b540: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b544:
    // 0x15b544: 0x60f809  jalr        $v1
label_15b548:
    if (ctx->pc == 0x15B548u) {
        ctx->pc = 0x15B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B544u;
        // 0x15b548: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B54Cu;
        goto label_15b54c;
    }
    ctx->pc = 0x15B544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B54Cu);
        ctx->pc = 0x15B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B544u;
        // 0x15b548: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B544u, 0x15B54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B54Cu;
label_15b54c:
    // 0x15b54c: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15b54cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15b550:
    // 0x15b550: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15b554:
    if (ctx->pc == 0x15B554u) {
        ctx->pc = 0x15B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B550u;
        // 0x15b554: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B558u;
        goto label_15b558;
    }
    ctx->pc = 0x15B550u;
    {
        const bool branch_taken_0x15b550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B550u;
        // 0x15b554: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b550) {
            ctx->pc = 0x15B60Cu;
            return;
        }
    }
    ctx->pc = 0x15B558u;
label_15b558:
    // 0x15b558: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15b558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15b55c:
    // 0x15b55c: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15b55cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15b560:
    // 0x15b560: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15b560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15b564:
    // 0x15b564: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15b564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15b568:
    // 0x15b568: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15b568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15b56c:
    // 0x15b56c: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15b570:
    // 0x15b570: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15b570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15b574:
    // 0x15b574: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15b574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15b578:
    // 0x15b578: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15b578u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15b57c:
    // 0x15b57c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15b580:
    // 0x15b580: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15b580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15b584:
    // 0x15b584: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15b588:
    // 0x15b588: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15b588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15b58c:
    // 0x15b58c: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15b58cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15b590:
    // 0x15b590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15b594:
    // 0x15b594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15b594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15b598:
    // 0x15b598: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15b598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15b59c:
    // 0x15b59c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15b59cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15b5a0:
    // 0x15b5a0: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15b5a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15b5a4:
    // 0x15b5a4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15b5a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15b5a8:
    // 0x15b5a8: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15b5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15b5ac:
    // 0x15b5ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15b5acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15b5b0:
    // 0x15b5b0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15b5b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b5b4:
    // 0x15b5b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15b5b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15b5b8:
    // 0x15b5b8: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15b5b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15b5bc:
    // 0x15b5bc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15b5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15b5c0:
    // 0x15b5c0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15b5c0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15b5c4:
    // 0x15b5c4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15b5c4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15b5c8:
    // 0x15b5c8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15b5c8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15b5cc:
    // 0x15b5cc: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15b5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15b5d0:
    // 0x15b5d0: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15b5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15b5d4:
    // 0x15b5d4: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15b5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15b5d8:
    // 0x15b5d8: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15b5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15b5dc:
    // 0x15b5dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15b5dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b5e0:
    // 0x15b5e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15b5e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15b5e4:
    // 0x15b5e4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15b5e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15b5e8:
    // 0x15b5e8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15b5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15b5ec:
    // 0x15b5ec: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15b5ecu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15b5f0:
    // 0x15b5f0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15b5f0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15b5f4:
    // 0x15b5f4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15b5f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15b5f8:
    // 0x15b5f8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15b5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15b5fc:
    // 0x15b5fc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15b5fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15b600:
    // 0x15b600: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15b600u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15b604:
    // 0x15b604: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15b604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15b608:
    // 0x15b608: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15b608u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15b60cu;
}
