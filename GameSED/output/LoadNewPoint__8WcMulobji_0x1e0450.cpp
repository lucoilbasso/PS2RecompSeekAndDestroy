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

// Function: LoadNewPoint__8WcMulobji
// Address: 0x1e0450 - 0x1e05c4
void LoadNewPoint__8WcMulobji_0x1e0450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadNewPoint__8WcMulobji_0x1e0450");
#endif

    switch (ctx->pc) {
        case 0x1e049cu: goto label_1e049c;
        case 0x1e04bcu: goto label_1e04bc;
        case 0x1e04d8u: goto label_1e04d8;
        case 0x1e054cu: goto label_1e054c;
        case 0x1e0554u: goto label_1e0554;
        case 0x1e055cu: goto label_1e055c;
        case 0x1e0578u: goto label_1e0578;
        case 0x1e0584u: goto label_1e0584;
        case 0x1e0590u: goto label_1e0590;
        default: break;
    }

    ctx->pc = 0x1e0450u;

    // 0x1e0450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0458: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e0458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e045c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e045cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0460: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e0460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e0464: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1e0464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0468: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e0468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e046c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e046cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e0470: 0x265001b4  addiu       $s0, $s2, 0x1B4
    ctx->pc = 0x1e0470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
    // 0x1e0474: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1e0474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e0478: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x1e0478u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e047c: 0x16200029  bnez        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1E047Cu;
    {
        const bool branch_taken_0x1e047c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E047Cu;
        // 0x1e0480: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e047c) {
            ctx->pc = 0x1E0524u;
            goto label_1e0524;
        }
    }
    ctx->pc = 0x1E0484u;
    // 0x1e0484: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1e0484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0488: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0488u;
    {
        const bool branch_taken_0x1e0488 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0488u;
        // 0x1e048c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0488) {
            ctx->pc = 0x1E0494u;
            goto label_1e0494;
        }
    }
    ctx->pc = 0x1E0490u;
    // 0x1e0490: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e0490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e0494:
    // 0x1e0494: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1E0494u;
    SET_GPR_U32(ctx, 31, 0x1E049Cu);
    ctx->pc = 0x1E0498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0494u;
    // 0x1e0498: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1E0494u, 0x1E049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E049Cu;
label_1e049c:
    // 0x1e049c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e049cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04a0: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E04A0u;
    {
        const bool branch_taken_0x1e04a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e04a0) {
            ctx->pc = 0x1E04A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E04A0u;
            // 0x1e04a4: 0xaca003f0  sw          $zero, 0x3F0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E04C8u;
            goto label_1e04c8;
        }
    }
    ctx->pc = 0x1E04A8u;
    // 0x1e04a8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e04a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e04ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e04acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04b0: 0x24a583b8  addiu       $a1, $a1, -0x7C48
    ctx->pc = 0x1e04b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935480));
    // 0x1e04b4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1E04B4u;
    SET_GPR_U32(ctx, 31, 0x1E04BCu);
    ctx->pc = 0x1E04B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E04B4u;
    // 0x1e04b8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1E04B4u, 0x1E04BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E04BCu;
label_1e04bc:
    // 0x1e04bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E04BCu;
    {
        const bool branch_taken_0x1e04bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04BCu;
        // 0x1e04c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04bc) {
            ctx->pc = 0x1E0520u;
            goto label_1e0520;
        }
    }
    ctx->pc = 0x1E04C4u;
    // 0x1e04c4: 0x0  nop
    ctx->pc = 0x1e04c4u;
    // NOP
label_1e04c8:
    // 0x1e04c8: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1e04c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1e04cc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e04ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e04d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04d4: 0x0  nop
    ctx->pc = 0x1e04d4u;
    // NOP
label_1e04d8:
    // 0x1e04d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1e04d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1e04dc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E04DCu;
    {
        const bool branch_taken_0x1e04dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E04E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04DCu;
        // 0x1e04e0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04dc) {
            ctx->pc = 0x1E04F0u;
            goto label_1e04f0;
        }
    }
    ctx->pc = 0x1E04E4u;
    // 0x1e04e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E04E4u;
    {
        const bool branch_taken_0x1e04e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04E4u;
        // 0x1e04e8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04e4) {
            ctx->pc = 0x1E04F4u;
            goto label_1e04f4;
        }
    }
    ctx->pc = 0x1E04ECu;
    // 0x1e04ec: 0x0  nop
    ctx->pc = 0x1e04ecu;
    // NOP
label_1e04f0:
    // 0x1e04f0: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x1e04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1e04f4:
    // 0x1e04f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e04f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e04f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e04f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e04fc: 0x2882003f  slti        $v0, $a0, 0x3F
    ctx->pc = 0x1e04fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x1e0500: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E0500u;
    {
        const bool branch_taken_0x1e0500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0500u;
        // 0x1e0504: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0500) {
            ctx->pc = 0x1E04D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e04d8;
        }
    }
    ctx->pc = 0x1E0508u;
    // 0x1e0508: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x1e0508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1e050c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0510: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e0510u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1e0514: 0xaca303f0  sw          $v1, 0x3F0($a1)
    ctx->pc = 0x1e0514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 3));
    // 0x1e0518: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e0518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e051c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1e051cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_1e0520:
    // 0x1e0520: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e0520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e0524:
    // 0x1e0524: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0528: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e0528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e052c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e052cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e0530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0534: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1e0534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1e0538: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e0538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e053c: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E053Cu;
    {
        const bool branch_taken_0x1e053c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E053Cu;
        // 0x1e0540: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e053c) {
            ctx->pc = 0x1E0590u;
            goto label_1e0590;
        }
    }
    ctx->pc = 0x1E0544u;
    // 0x1e0544: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x1E0544u;
    SET_GPR_U32(ctx, 31, 0x1E054Cu);
    ctx->pc = 0x1E0548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0544u;
    // 0x1e0548: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x1E0544u, 0x1E054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E054Cu;
label_1e054c:
    // 0x1e054c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1E054Cu;
    SET_GPR_U32(ctx, 31, 0x1E0554u);
    ctx->pc = 0x1E0550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E054Cu;
    // 0x1e0550: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1E054Cu, 0x1E0554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0554u;
label_1e0554:
    // 0x1e0554: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1E0554u;
    SET_GPR_U32(ctx, 31, 0x1E055Cu);
    ctx->pc = 0x1E0558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0554u;
    // 0x1e0558: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1E0554u, 0x1E055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E055Cu;
label_1e055c:
    // 0x1e055c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e055cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0564: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e0564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e0568: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x1e0568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
    // 0x1e056c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e056cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0570: 0xc06586e  jal         func_1961B8
    ctx->pc = 0x1E0570u;
    SET_GPR_U32(ctx, 31, 0x1E0578u);
    ctx->pc = 0x1E0574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0570u;
    // 0x1e0574: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1961B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1961B8u, 0x1E0570u, 0x1E0578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0578u;
label_1e0578:
    // 0x1e0578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e057c: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1E057Cu;
    SET_GPR_U32(ctx, 31, 0x1E0584u);
    ctx->pc = 0x1E0580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E057Cu;
    // 0x1e0580: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1E057Cu, 0x1E0584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0584u;
label_1e0584:
    // 0x1e0584: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1e0584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1e0588: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x1E0588u;
    SET_GPR_U32(ctx, 31, 0x1E0590u);
    ctx->pc = 0x1E058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0588u;
    // 0x1e058c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x1E0588u, 0x1E0590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0590u;
label_1e0590:
    // 0x1e0590: 0x8e4301b0  lw          $v1, 0x1B0($s2)
    ctx->pc = 0x1e0590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x1e0594: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e0594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0598: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x1e0598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
    // 0x1e059c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1e059cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1e05a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e05a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e05a4: 0xae5101b0  sw          $s1, 0x1B0($s2)
    ctx->pc = 0x1e05a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 17));
    // 0x1e05a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e05a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e05ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e05acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e05b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e05b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e05b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e05b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e05b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e05b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e05bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E05BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E05C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05BCu;
        // 0x1e05c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E05BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E05C4u;
}
