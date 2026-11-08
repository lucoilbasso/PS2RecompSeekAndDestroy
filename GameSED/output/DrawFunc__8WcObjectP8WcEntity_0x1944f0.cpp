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

// Function: DrawFunc__8WcObjectP8WcEntity
// Address: 0x1944f0 - 0x194e78
void DrawFunc__8WcObjectP8WcEntity_0x1944f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__8WcObjectP8WcEntity_0x1944f0");
#endif

    switch (ctx->pc) {
        case 0x194574u: goto label_194574;
        case 0x194594u: goto label_194594;
        case 0x1945d8u: goto label_1945d8;
        case 0x1945e0u: goto label_1945e0;
        case 0x194604u: goto label_194604;
        case 0x194658u: goto label_194658;
        case 0x194b24u: goto label_194b24;
        case 0x194b2cu: goto label_194b2c;
        case 0x194b54u: goto label_194b54;
        case 0x194d38u: goto label_194d38;
        case 0x194d4cu: goto label_194d4c;
        case 0x194d68u: goto label_194d68;
        case 0x194d74u: goto label_194d74;
        case 0x194d80u: goto label_194d80;
        case 0x194db0u: goto label_194db0;
        case 0x194de0u: goto label_194de0;
        case 0x194de8u: goto label_194de8;
        case 0x194df8u: goto label_194df8;
        case 0x194e48u: goto label_194e48;
        default: break;
    }

    ctx->pc = 0x1944f0u;

    // 0x1944f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1944f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1944f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1944f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1944f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1944f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1944fc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1944fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x194500: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x194500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194504: 0x26820160  addiu       $v0, $s4, 0x160
    ctx->pc = 0x194504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
    // 0x194508: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x194508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x19450c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19450cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x194510: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x194510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x194514: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x194514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x194518: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x194518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x19451c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x19451cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x194520: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x194520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x194524: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x194524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x194528: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x194528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x19452c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x19452cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x194530: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x194530u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x194534: 0x16000019  bnez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x194534u;
    {
        const bool branch_taken_0x194534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x194538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194534u;
        // 0x194538: 0x26960150  addiu       $s6, $s4, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194534) {
            ctx->pc = 0x19459Cu;
            goto label_19459c;
        }
    }
    ctx->pc = 0x19453Cu;
    // 0x19453c: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x19453cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x194540: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x194540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x194544: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x194544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194548: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x194548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19454c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19454cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x194550: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194554: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x194554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x194558: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x194558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x19455c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x19455cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x194560: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x194560u;
    {
        const bool branch_taken_0x194560 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x194564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194560u;
        // 0x194564: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194560) {
            ctx->pc = 0x19456Cu;
            goto label_19456c;
        }
    }
    ctx->pc = 0x194568u;
    // 0x194568: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x194568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19456c:
    // 0x19456c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x19456Cu;
    SET_GPR_U32(ctx, 31, 0x194574u);
    ctx->pc = 0x194570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19456Cu;
    // 0x194570: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x19456Cu, 0x194574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194574u;
label_194574:
    // 0x194574: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x194574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194578: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x194578u;
    {
        const bool branch_taken_0x194578 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194578u;
        // 0x19457c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194578) {
            ctx->pc = 0x194598u;
            goto label_194598;
        }
    }
    ctx->pc = 0x194580u;
    // 0x194580: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x194580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x194584: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194588: 0x24a58270  addiu       $a1, $a1, -0x7D90
    ctx->pc = 0x194588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935152));
    // 0x19458c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x19458Cu;
    SET_GPR_U32(ctx, 31, 0x194594u);
    ctx->pc = 0x194590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19458Cu;
    // 0x194590: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x19458Cu, 0x194594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194594u;
label_194594:
    // 0x194594: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x194594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_194598:
    // 0x194598: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x194598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
label_19459c:
    // 0x19459c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19459cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1945a0: 0x2475d650  addiu       $s5, $v1, -0x29B0
    ctx->pc = 0x1945a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x1945a4: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x1945a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x1945a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1945A8u;
    {
        const bool branch_taken_0x1945a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1945ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945A8u;
        // 0x1945ac: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945a8) {
            ctx->pc = 0x1945D0u;
            goto label_1945d0;
        }
    }
    ctx->pc = 0x1945B0u;
    // 0x1945b0: 0x8ea20098  lw          $v0, 0x98($s5)
    ctx->pc = 0x1945b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
    // 0x1945b4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1945b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1945b8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1945b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1945bc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1945bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1945c0: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x1945c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1945c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1945C4u;
    {
        const bool branch_taken_0x1945c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1945C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945C4u;
        // 0x1945c8: 0xaea30098  sw          $v1, 0x98($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945c4) {
            ctx->pc = 0x194604u;
            goto label_194604;
        }
    }
    ctx->pc = 0x1945CCu;
    // 0x1945cc: 0x0  nop
    ctx->pc = 0x1945ccu;
    // NOP
label_1945d0:
    // 0x1945d0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1945D0u;
    SET_GPR_U32(ctx, 31, 0x1945D8u);
    ctx->pc = 0x1945D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1945D0u;
    // 0x1945d4: 0x8ea40084  lw          $a0, 0x84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1945D0u, 0x1945D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945D8u;
label_1945d8:
    // 0x1945d8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1945D8u;
    SET_GPR_U32(ctx, 31, 0x1945E0u);
    ctx->pc = 0x1945DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1945D8u;
    // 0x1945dc: 0x8ea40088  lw          $a0, 0x88($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1945D8u, 0x1945E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945E0u;
label_1945e0:
    // 0x1945e0: 0x8eb0008c  lw          $s0, 0x8C($s5)
    ctx->pc = 0x1945e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x1945e4: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x1945e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1945e8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1945e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1945ec: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1945ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1945f0: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x1945f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x1945f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1945f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1945f8: 0xaea5008c  sw          $a1, 0x8C($s5)
    ctx->pc = 0x1945f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 5));
    // 0x1945fc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1945FCu;
    SET_GPR_U32(ctx, 31, 0x194604u);
    ctx->pc = 0x194600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1945FCu;
    // 0x194600: 0xaea20080  sw          $v0, 0x80($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1945FCu, 0x194604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194604u;
label_194604:
    // 0x194604: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x194604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    // 0x194608: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x194608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x19460c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x194610: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x194610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x194614: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x194614u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x194618: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x194618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x19461c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x19461cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x194620: 0x8e4401a8  lw          $a0, 0x1A8($s2)
    ctx->pc = 0x194620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
    // 0x194624: 0x2f02b  sltu        $fp, $zero, $v0
    ctx->pc = 0x194624u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x194628: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x194628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19462c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x19462cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194630: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x194630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194634: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194634u;
    {
        const bool branch_taken_0x194634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x194638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194634u;
        // 0x194638: 0x8c570164  lw          $s7, 0x164($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194634) {
            ctx->pc = 0x194648u;
            goto label_194648;
        }
    }
    ctx->pc = 0x19463Cu;
    // 0x19463c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x19463cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x194640: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x194640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x194644: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x194644u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_194648:
    // 0x194648: 0x26900020  addiu       $s0, $s4, 0x20
    ctx->pc = 0x194648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x19464c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x19464cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194650: 0xc061422  jal         func_185088
    ctx->pc = 0x194650u;
    SET_GPR_U32(ctx, 31, 0x194658u);
    ctx->pc = 0x194654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194650u;
    // 0x194654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x194650u, 0x194658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194658u;
label_194658:
    // 0x194658: 0x26470340  addiu       $a3, $s2, 0x340
    ctx->pc = 0x194658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x19465c: 0x268200e0  addiu       $v0, $s4, 0xE0
    ctx->pc = 0x19465cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x194660: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x194660u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194664: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x194664u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x194668: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x194668u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x19466c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x19466cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x194670: 0xf8e40000  sqc2        $vf4, 0x0($a3)
    ctx->pc = 0x194670u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x194674: 0xf8e50010  sqc2        $vf5, 0x10($a3)
    ctx->pc = 0x194674u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194678: 0xf8e60020  sqc2        $vf6, 0x20($a3)
    ctx->pc = 0x194678u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19467c: 0xf8e70030  sqc2        $vf7, 0x30($a3)
    ctx->pc = 0x19467cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x194680: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x194680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x194684: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x194684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194688: 0x14620085  bne         $v1, $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x194688u;
    {
        const bool branch_taken_0x194688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194688u;
        // 0x19468c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194688) {
            ctx->pc = 0x1948A0u;
            goto label_1948a0;
        }
    }
    ctx->pc = 0x194690u;
    // 0x194690: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x194690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x194694: 0x26440380  addiu       $a0, $s2, 0x380
    ctx->pc = 0x194694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 896));
    // 0x194698: 0x24c6eb70  addiu       $a2, $a2, -0x1490
    ctx->pc = 0x194698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962032));
    // 0x19469c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x19469cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x1946a0: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x1946a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x1946a4: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x1946a4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x1946a8: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x1946a8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x1946ac: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x1946acu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1946b0: 0xd8e90010  lqc2        $vf9, 0x10($a3)
    ctx->pc = 0x1946b0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1946b4: 0xd8ea0020  lqc2        $vf10, 0x20($a3)
    ctx->pc = 0x1946b4u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1946b8: 0xd8eb0030  lqc2        $vf11, 0x30($a3)
    ctx->pc = 0x1946b8u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1946bc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1946bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1946c0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1946c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1946c4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1946c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1946c8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1946c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1946cc: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x1946ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1946d0: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x1946d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1946d4: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x1946d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1946d8: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x1946d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1946dc: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x1946dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1946e0: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x1946e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1946e4: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x1946e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1946e8: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x1946e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1946ec: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x1946ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1946f0: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x1946f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1946f4: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x1946f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1946f8: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x1946f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x1946fc: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x1946fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x194700: 0xf88d0010  sqc2        $vf13, 0x10($a0)
    ctx->pc = 0x194700u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x194704: 0xf88e0020  sqc2        $vf14, 0x20($a0)
    ctx->pc = 0x194704u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x194708: 0xf88f0030  sqc2        $vf15, 0x30($a0)
    ctx->pc = 0x194708u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x19470c: 0x268300a0  addiu       $v1, $s4, 0xA0
    ctx->pc = 0x19470cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x194710: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x194710u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194714: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x194714u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x194718: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x194718u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19471c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19471cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x194720: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x194720u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194724: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x194724u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x194728: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x194728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19472c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x19472cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x194730: 0x2442ebf0  addiu       $v0, $v0, -0x1410
    ctx->pc = 0x194730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962160));
    // 0x194734: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x194734u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBF0u));
    // 0x194738: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x194738u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC00u));
    // 0x19473c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x19473cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC10u));
    // 0x194740: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x194740u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EC20u));
    // 0x194744: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x194744u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x194748: 0xd8890010  lqc2        $vf9, 0x10($a0)
    ctx->pc = 0x194748u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x19474c: 0xd88a0020  lqc2        $vf10, 0x20($a0)
    ctx->pc = 0x19474cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x194750: 0xd88b0030  lqc2        $vf11, 0x30($a0)
    ctx->pc = 0x194750u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x194754: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x194754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194758: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x194758u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19475c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x19475cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194760: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x194760u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x194764: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x194764u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194768: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x194768u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19476c: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x19476cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194770: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x194770u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x194774: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x194774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194778: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x194778u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19477c: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x19477cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194780: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x194780u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x194784: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x194784u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194788: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x194788u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19478c: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x19478cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194790: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x194790u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x194794: 0xf8ac0000  sqc2        $vf12, 0x0($a1)
    ctx->pc = 0x194794u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x194798: 0xf8ad0010  sqc2        $vf13, 0x10($a1)
    ctx->pc = 0x194798u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x19479c: 0xf8ae0020  sqc2        $vf14, 0x20($a1)
    ctx->pc = 0x19479cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x1947a0: 0xf8af0030  sqc2        $vf15, 0x30($a1)
    ctx->pc = 0x1947a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x1947a4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1947a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1947a8: 0x264500d0  addiu       $a1, $s2, 0xD0
    ctx->pc = 0x1947a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1947ac: 0x2463ec30  addiu       $v1, $v1, -0x13D0
    ctx->pc = 0x1947acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962224));
    // 0x1947b0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1947b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EC30u));
    // 0x1947b4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1947b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC40u));
    // 0x1947b8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1947b8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC50u));
    // 0x1947bc: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1947bcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EC60u));
    // 0x1947c0: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x1947c0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1947c4: 0xd8890010  lqc2        $vf9, 0x10($a0)
    ctx->pc = 0x1947c4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1947c8: 0xd88a0020  lqc2        $vf10, 0x20($a0)
    ctx->pc = 0x1947c8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1947cc: 0xd88b0030  lqc2        $vf11, 0x30($a0)
    ctx->pc = 0x1947ccu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1947d0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1947d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1947d4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1947d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1947d8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1947d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1947dc: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1947dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1947e0: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x1947e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1947e4: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x1947e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1947e8: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x1947e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1947ec: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x1947ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1947f0: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x1947f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1947f4: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x1947f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1947f8: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x1947f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1947fc: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x1947fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x194800: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x194800u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194804: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x194804u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194808: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x194808u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19480c: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x19480cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x194810: 0xf8ac0000  sqc2        $vf12, 0x0($a1)
    ctx->pc = 0x194810u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x194814: 0xf8ad0010  sqc2        $vf13, 0x10($a1)
    ctx->pc = 0x194814u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x194818: 0xf8ae0020  sqc2        $vf14, 0x20($a1)
    ctx->pc = 0x194818u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x19481c: 0xf8af0030  sqc2        $vf15, 0x30($a1)
    ctx->pc = 0x19481cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x194820: 0x26420150  addiu       $v0, $s2, 0x150
    ctx->pc = 0x194820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x194824: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x194824u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x194828: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x194828u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x19482c: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x19482cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x194830: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x194830u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x194834: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x194834u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x194838: 0xd8e90010  lqc2        $vf9, 0x10($a3)
    ctx->pc = 0x194838u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x19483c: 0xd8ea0020  lqc2        $vf10, 0x20($a3)
    ctx->pc = 0x19483cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x194840: 0xd8eb0030  lqc2        $vf11, 0x30($a3)
    ctx->pc = 0x194840u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x194844: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x194844u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194848: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x194848u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19484c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x19484cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194850: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x194850u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x194854: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x194854u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194858: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x194858u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19485c: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x19485cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194860: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x194860u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x194864: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x194864u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194868: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x194868u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19486c: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x19486cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194870: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x194870u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x194874: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x194874u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194878: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x194878u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19487c: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x19487cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194880: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x194880u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x194884: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x194884u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x194888: 0xf84d0010  sqc2        $vf13, 0x10($v0)
    ctx->pc = 0x194888u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x19488c: 0xf84e0020  sqc2        $vf14, 0x20($v0)
    ctx->pc = 0x19488cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x194890: 0xf84f0030  sqc2        $vf15, 0x30($v0)
    ctx->pc = 0x194890u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x194894: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x194894u;
    {
        const bool branch_taken_0x194894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194894) {
            ctx->pc = 0x194A10u;
            goto label_194a10;
        }
    }
    ctx->pc = 0x19489Cu;
    // 0x19489c: 0x0  nop
    ctx->pc = 0x19489cu;
    // NOP
label_1948a0:
    // 0x1948a0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1948a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1948a4: 0x2442ebb0  addiu       $v0, $v0, -0x1450
    ctx->pc = 0x1948a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962096));
    // 0x1948a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1948a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1948ac: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1948acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1948b0: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1948b0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1948b4: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1948b4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1948b8: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x1948b8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1948bc: 0xd8e90010  lqc2        $vf9, 0x10($a3)
    ctx->pc = 0x1948bcu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1948c0: 0xd8ea0020  lqc2        $vf10, 0x20($a3)
    ctx->pc = 0x1948c0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1948c4: 0xd8eb0030  lqc2        $vf11, 0x30($a3)
    ctx->pc = 0x1948c4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1948c8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1948c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1948cc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1948ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1948d0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1948d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1948d4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1948d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1948d8: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x1948d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1948dc: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x1948dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1948e0: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x1948e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1948e4: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x1948e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1948e8: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x1948e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1948ec: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x1948ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1948f0: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x1948f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1948f4: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x1948f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1948f8: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x1948f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1948fc: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x1948fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194900: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x194900u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194904: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x194904u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x194908: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x194908u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x19490c: 0xf88d0010  sqc2        $vf13, 0x10($a0)
    ctx->pc = 0x19490cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x194910: 0xf88e0020  sqc2        $vf14, 0x20($a0)
    ctx->pc = 0x194910u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x194914: 0xf88f0030  sqc2        $vf15, 0x30($a0)
    ctx->pc = 0x194914u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x194918: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x194918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19491c: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x19491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x194920: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x194920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x194924: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x194924u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EC70u));
    // 0x194928: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x194928u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC80u));
    // 0x19492c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x19492cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC90u));
    // 0x194930: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x194930u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21ECA0u));
    // 0x194934: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x194934u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x194938: 0xd8e90010  lqc2        $vf9, 0x10($a3)
    ctx->pc = 0x194938u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x19493c: 0xd8ea0020  lqc2        $vf10, 0x20($a3)
    ctx->pc = 0x19493cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x194940: 0xd8eb0030  lqc2        $vf11, 0x30($a3)
    ctx->pc = 0x194940u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x194944: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x194944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194948: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x194948u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19494c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x19494cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194950: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x194950u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x194954: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x194954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194958: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x194958u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19495c: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x19495cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194960: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x194960u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x194964: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x194964u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194968: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x194968u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19496c: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x19496cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194970: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x194970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x194974: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x194974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194978: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x194978u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19497c: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x19497cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194980: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x194980u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x194984: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x194984u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x194988: 0xf88d0010  sqc2        $vf13, 0x10($a0)
    ctx->pc = 0x194988u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x19498c: 0xf88e0020  sqc2        $vf14, 0x20($a0)
    ctx->pc = 0x19498cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x194990: 0xf88f0030  sqc2        $vf15, 0x30($a0)
    ctx->pc = 0x194990u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x194994: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x194994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x194998: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x194998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x19499c: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x19499cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x1949a0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1949a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x1949a4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1949a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x1949a8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1949a8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x1949ac: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1949acu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x1949b0: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x1949b0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1949b4: 0xd8e90010  lqc2        $vf9, 0x10($a3)
    ctx->pc = 0x1949b4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1949b8: 0xd8ea0020  lqc2        $vf10, 0x20($a3)
    ctx->pc = 0x1949b8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1949bc: 0xd8eb0030  lqc2        $vf11, 0x30($a3)
    ctx->pc = 0x1949bcu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1949c0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1949c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1949c4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1949c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1949c8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1949c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1949cc: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1949ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1949d0: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x1949d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1949d4: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x1949d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1949d8: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x1949d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1949dc: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x1949dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1949e0: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x1949e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1949e4: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x1949e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1949e8: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x1949e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1949ec: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x1949ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1949f0: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x1949f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1949f4: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x1949f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1949f8: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x1949f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1949fc: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x1949fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x194a00: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x194a00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x194a04: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x194a04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x194a08: 0xf86e0020  sqc2        $vf14, 0x20($v1)
    ctx->pc = 0x194a08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x194a0c: 0xf86f0030  sqc2        $vf15, 0x30($v1)
    ctx->pc = 0x194a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[15]));
label_194a10:
    // 0x194a10: 0x13c0000b  beqz        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x194A10u;
    {
        const bool branch_taken_0x194a10 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A10u;
        // 0x194a14: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a10) {
            ctx->pc = 0x194A40u;
            goto label_194a40;
        }
    }
    ctx->pc = 0x194A18u;
    // 0x194a18: 0x26230110  addiu       $v1, $s1, 0x110
    ctx->pc = 0x194a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x194a1c: 0x2442ecb0  addiu       $v0, $v0, -0x1350
    ctx->pc = 0x194a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962352));
    // 0x194a20: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x194a20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194a24: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x194a24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x194a28: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x194a28u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x194a2c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x194a2cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x194a30: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x194a30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x194a34: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x194a34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194a38: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x194a38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x194a3c: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x194a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_194a40:
    // 0x194a40: 0x1260002c  beqz        $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x194A40u;
    {
        const bool branch_taken_0x194a40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A40u;
        // 0x194a44: 0x26230090  addiu       $v1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a40) {
            ctx->pc = 0x194AF4u;
            goto label_194af4;
        }
    }
    ctx->pc = 0x194A48u;
    // 0x194a48: 0x26620160  addiu       $v0, $s3, 0x160
    ctx->pc = 0x194a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
    // 0x194a4c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x194a4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194a50: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x194a50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x194a54: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x194a54u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x194a58: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x194a58u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x194a5c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x194a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x194a60: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x194a60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194a64: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x194a64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x194a68: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x194a68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x194a6c: 0xae400370  sw          $zero, 0x370($s2)
    ctx->pc = 0x194a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 880), GPR_U32(ctx, 0));
    // 0x194a70: 0x266401a0  addiu       $a0, $s3, 0x1A0
    ctx->pc = 0x194a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
    // 0x194a74: 0xae400374  sw          $zero, 0x374($s2)
    ctx->pc = 0x194a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 884), GPR_U32(ctx, 0));
    // 0x194a78: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x194a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x194a7c: 0xae400378  sw          $zero, 0x378($s2)
    ctx->pc = 0x194a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 888), GPR_U32(ctx, 0));
    // 0x194a80: 0x26420340  addiu       $v0, $s2, 0x340
    ctx->pc = 0x194a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x194a84: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x194a84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x194a88: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x194a88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x194a8c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x194a8cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x194a90: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x194a90u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x194a94: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x194a94u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194a98: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x194a98u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x194a9c: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x194a9cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x194aa0: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x194aa0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x194aa4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x194aa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194aa8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x194aa8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194aac: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x194aacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194ab0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x194ab0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x194ab4: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x194ab4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194ab8: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x194ab8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194abc: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x194abcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194ac0: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x194ac0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x194ac4: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x194ac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194ac8: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x194ac8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194acc: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x194accu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194ad0: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x194ad0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x194ad4: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x194ad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194ad8: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x194ad8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194adc: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x194adcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x194ae0: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x194ae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x194ae4: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x194ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x194ae8: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x194ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x194aec: 0xf86e0020  sqc2        $vf14, 0x20($v1)
    ctx->pc = 0x194aecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x194af0: 0xf86f0030  sqc2        $vf15, 0x30($v1)
    ctx->pc = 0x194af0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[15]));
label_194af4:
    // 0x194af4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x194af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x194af8: 0xae20022c  sw          $zero, 0x22C($s1)
    ctx->pc = 0x194af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 0));
    // 0x194afc: 0x8c8201c4  lw          $v0, 0x1C4($a0)
    ctx->pc = 0x194afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
    // 0x194b00: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x194B00u;
    {
        const bool branch_taken_0x194b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B00u;
        // 0x194b04: 0x265003c0  addiu       $s0, $s2, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b00) {
            ctx->pc = 0x194B58u;
            goto label_194b58;
        }
    }
    ctx->pc = 0x194B08u;
    // 0x194b08: 0x26930020  addiu       $s3, $s4, 0x20
    ctx->pc = 0x194b08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x194b0c: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x194b0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x194b10: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x194b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x194b14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194B14u;
    {
        const bool branch_taken_0x194b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B14u;
        // 0x194b18: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b14) {
            ctx->pc = 0x194B24u;
            goto label_194b24;
        }
    }
    ctx->pc = 0x194B1Cu;
    // 0x194b1c: 0xc061920  jal         func_186480
    ctx->pc = 0x194B1Cu;
    SET_GPR_U32(ctx, 31, 0x194B24u);
    ctx->pc = 0x194B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B1Cu;
    // 0x194b20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x194B1Cu, 0x194B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B24u;
label_194b24:
    // 0x194b24: 0xc061422  jal         func_185088
    ctx->pc = 0x194B24u;
    SET_GPR_U32(ctx, 31, 0x194B2Cu);
    ctx->pc = 0x194B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B24u;
    // 0x194b28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x194B24u, 0x194B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B2Cu;
label_194b2c:
    // 0x194b2c: 0x26820110  addiu       $v0, $s4, 0x110
    ctx->pc = 0x194b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    // 0x194b30: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x194b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x194b34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x194b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x194b40: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x194b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x194b44: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x194b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x194b48: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x194b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x194b4c: 0xc0622b6  jal         func_188AD8
    ctx->pc = 0x194B4Cu;
    SET_GPR_U32(ctx, 31, 0x194B54u);
    ctx->pc = 0x194B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B4Cu;
    // 0x194b50: 0x26270190  addiu       $a3, $s1, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188AD8u, 0x194B4Cu, 0x194B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B54u;
label_194b54:
    // 0x194b54: 0xae22022c  sw          $v0, 0x22C($s1)
    ctx->pc = 0x194b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 2));
label_194b58:
    // 0x194b58: 0xdec20030  ld          $v0, 0x30($s6)
    ctx->pc = 0x194b58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x194b5c: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x194B5Cu;
    {
        const bool branch_taken_0x194b5c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B5Cu;
        // 0x194b60: 0xfe220220  sd          $v0, 0x220($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 544), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b5c) {
            ctx->pc = 0x194B7Cu;
            goto label_194b7c;
        }
    }
    ctx->pc = 0x194B64u;
    // 0x194b64: 0xc6e10154  lwc1        $f1, 0x154($s7)
    ctx->pc = 0x194b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b68: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x194b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x194b6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194b70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x194b70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194b74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x194b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194b78: 0xe6200228  swc1        $f0, 0x228($s1)
    ctx->pc = 0x194b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
label_194b7c:
    // 0x194b7c: 0xc6e00180  lwc1        $f0, 0x180($s7)
    ctx->pc = 0x194b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b80: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x194b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x194b84: 0xae22021c  sw          $v0, 0x21C($s1)
    ctx->pc = 0x194b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 2));
    // 0x194b88: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x194b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x194b8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x194b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x194b90: 0x34638002  ori         $v1, $v1, 0x8002
    ctx->pc = 0x194b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32770);
    // 0x194b94: 0xe6200210  swc1        $f0, 0x210($s1)
    ctx->pc = 0x194b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 528), bits); }
    // 0x194b98: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x194b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x194b9c: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x194b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x194ba0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x194ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194ba4: 0xc6e0017c  lwc1        $f0, 0x17C($s7)
    ctx->pc = 0x194ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194ba8: 0xe6200214  swc1        $f0, 0x214($s1)
    ctx->pc = 0x194ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 532), bits); }
    // 0x194bac: 0x92c20007  lbu         $v0, 0x7($s6)
    ctx->pc = 0x194bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 7)));
    // 0x194bb0: 0xfe2301d0  sd          $v1, 0x1D0($s1)
    ctx->pc = 0x194bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 464), GPR_U64(ctx, 3));
    // 0x194bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194bb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194bb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194bbc: 0xfe2401d8  sd          $a0, 0x1D8($s1)
    ctx->pc = 0x194bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 472), GPR_U64(ctx, 4));
    // 0x194bc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x194bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194bc4: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x194BC4u;
    {
        const bool branch_taken_0x194bc4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x194BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BC4u;
        // 0x194bc8: 0xe6200218  swc1        $f0, 0x218($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194bc4) {
            ctx->pc = 0x194BECu;
            goto label_194bec;
        }
    }
    ctx->pc = 0x194BCCu;
    // 0x194bcc: 0x262201e0  addiu       $v0, $s1, 0x1E0
    ctx->pc = 0x194bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x194bd0: 0x24030412  addiu       $v1, $zero, 0x412
    ctx->pc = 0x194bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x194bd4: 0x3c04302e  lui         $a0, 0x302E
    ctx->pc = 0x194bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12334 << 16));
    // 0x194bd8: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x194bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x194bdc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x194bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x194be0: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x194be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x194be4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x194be4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x194be8: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x194be8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
label_194bec:
    // 0x194bec: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x194becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x194bf0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x194bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x194bf4: 0xfe230208  sd          $v1, 0x208($s1)
    ctx->pc = 0x194bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 520), GPR_U64(ctx, 3));
    // 0x194bf8: 0x264b0240  addiu       $t3, $s2, 0x240
    ctx->pc = 0x194bf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x194bfc: 0xfe220200  sd          $v0, 0x200($s1)
    ctx->pc = 0x194bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 512), GPR_U64(ctx, 2));
    // 0x194c00: 0xfe2201f0  sd          $v0, 0x1F0($s1)
    ctx->pc = 0x194c00u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 496), GPR_U64(ctx, 2));
    // 0x194c04: 0xfe2301f8  sd          $v1, 0x1F8($s1)
    ctx->pc = 0x194c04u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 504), GPR_U64(ctx, 3));
    // 0x194c08: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x194c08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x194c0c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x194c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x194c10: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x194C10u;
    {
        const bool branch_taken_0x194c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C10u;
        // 0x194c14: 0x264a0250  addiu       $t2, $s2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c10) {
            ctx->pc = 0x194C58u;
            goto label_194c58;
        }
    }
    ctx->pc = 0x194C18u;
    // 0x194c18: 0x92c20007  lbu         $v0, 0x7($s6)
    ctx->pc = 0x194c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 7)));
    // 0x194c1c: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x194c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x194c20: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x194c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x194c24: 0x26430260  addiu       $v1, $s2, 0x260
    ctx->pc = 0x194c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x194c28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x194c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194c2c: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x194c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x194c30: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x194c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x194c34: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x194c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x194c38: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x194c38u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x194c3c: 0x26490270  addiu       $t1, $s2, 0x270
    ctx->pc = 0x194c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
    // 0x194c40: 0x92c20002  lbu         $v0, 0x2($s6)
    ctx->pc = 0x194c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x194c44: 0x92c40003  lbu         $a0, 0x3($s6)
    ctx->pc = 0x194c44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
    // 0x194c48: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x194c48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x194c4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x194c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x194c50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x194C50u;
    {
        const bool branch_taken_0x194c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C50u;
        // 0x194c54: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c50) {
            ctx->pc = 0x194C88u;
            goto label_194c88;
        }
    }
    ctx->pc = 0x194C58u;
label_194c58:
    // 0x194c58: 0x26450260  addiu       $a1, $s2, 0x260
    ctx->pc = 0x194c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x194c5c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x194c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x194c60: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x194c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x194c64: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x194c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x194c68: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x194c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x194c6c: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x194c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x194c70: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x194c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x194c74: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x194c74u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x194c78: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x194c78u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x194c7c: 0x26490270  addiu       $t1, $s2, 0x270
    ctx->pc = 0x194c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
    // 0x194c80: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x194c80u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x194c84: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x194c84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_194c88:
    // 0x194c88: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x194c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x194c8c: 0x3484130d  ori         $a0, $a0, 0x130D
    ctx->pc = 0x194c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4877);
    // 0x194c90: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x194c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x194c94: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x194c94u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x194c98: 0x27858c90  addiu       $a1, $gp, -0x7370
    ctx->pc = 0x194c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
    // 0x194c9c: 0xfd220008  sd          $v0, 0x8($t1)
    ctx->pc = 0x194c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
    // 0x194ca0: 0x27838c80  addiu       $v1, $gp, -0x7380
    ctx->pc = 0x194ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937728));
    // 0x194ca4: 0x252a0010  addiu       $t2, $t1, 0x10
    ctx->pc = 0x194ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x194ca8: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x194ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x194cac: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x194cacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x194cb0: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x194cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194cb4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x194cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x194cb8: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x194cb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x194cbc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x194cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x194cc0: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x194cc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194cc4: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x194cc4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x194cc8: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x194cc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x194ccc: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x194cccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194cd0: 0x14b3023  subu        $a2, $t2, $t3
    ctx->pc = 0x194cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x194cd4: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x194cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x194cd8: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x194cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x194cdc: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x194cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x194ce0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x194ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x194ce4: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x194ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x194ce8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x194ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x194cec: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x194cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x194cf0: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x194cf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x194cf4: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x194cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x194cf8: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x194cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x194cfc: 0xfd270008  sd          $a3, 0x8($t1)
    ctx->pc = 0x194cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 7));
    // 0x194d00: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x194d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x194d04: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x194d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x194d08: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x194d08u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x194d0c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x194d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x194d10: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x194d10u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x194d14: 0xfd620008  sd          $v0, 0x8($t3)
    ctx->pc = 0x194d14u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 2));
    // 0x194d18: 0xfd650000  sd          $a1, 0x0($t3)
    ctx->pc = 0x194d18u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 5));
    // 0x194d1c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x194d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x194d20: 0x8ca201c4  lw          $v0, 0x1C4($a1)
    ctx->pc = 0x194d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 452)));
    // 0x194d24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x194D24u;
    {
        const bool branch_taken_0x194d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D24u;
        // 0x194d28: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d24) {
            ctx->pc = 0x194D40u;
            goto label_194d40;
        }
    }
    ctx->pc = 0x194D2Cu;
    // 0x194d2c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x194d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x194d30: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x194D30u;
    SET_GPR_U32(ctx, 31, 0x194D38u);
    ctx->pc = 0x194D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D30u;
    // 0x194d34: 0x24848de0  addiu       $a0, $a0, -0x7220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x194D30u, 0x194D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D38u;
label_194d38:
    // 0x194d38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x194D38u;
    {
        const bool branch_taken_0x194d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D38u;
        // 0x194d3c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d38) {
            ctx->pc = 0x194D50u;
            goto label_194d50;
        }
    }
    ctx->pc = 0x194D40u;
label_194d40:
    // 0x194d40: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x194d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x194d44: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x194D44u;
    SET_GPR_U32(ctx, 31, 0x194D4Cu);
    ctx->pc = 0x194D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D44u;
    // 0x194d48: 0x248463f0  addiu       $a0, $a0, 0x63F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x194D44u, 0x194D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D4Cu;
label_194d4c:
    // 0x194d4c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x194d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_194d50:
    // 0x194d50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d54: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x194d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x194d58: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x194d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x194d5c: 0x263021  addu        $a2, $at, $a2
    ctx->pc = 0x194d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x194d60: 0xc0653c6  jal         func_194F18
    ctx->pc = 0x194D60u;
    SET_GPR_U32(ctx, 31, 0x194D68u);
    ctx->pc = 0x194D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D60u;
    // 0x194d64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194F18u, 0x194D60u, 0x194D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D68u;
label_194d68:
    // 0x194d68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d6c: 0xc0663f0  jal         func_198FC0
    ctx->pc = 0x194D6Cu;
    SET_GPR_U32(ctx, 31, 0x194D74u);
    ctx->pc = 0x194D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D6Cu;
    // 0x194d70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198FC0u, 0x194D6Cu, 0x194D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D74u;
label_194d74:
    // 0x194d74: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x194d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x194d78: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x194d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x194d7c: 0x0  nop
    ctx->pc = 0x194d7cu;
    // NOP
label_194d80:
    // 0x194d80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x194d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194d84: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x194d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x194d88: 0x0  nop
    ctx->pc = 0x194d88u;
    // NOP
    // 0x194d8c: 0x0  nop
    ctx->pc = 0x194d8cu;
    // NOP
    // 0x194d90: 0x0  nop
    ctx->pc = 0x194d90u;
    // NOP
    // 0x194d94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x194D94u;
    {
        const bool branch_taken_0x194d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194d94) {
            ctx->pc = 0x194D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194d80;
        }
    }
    ctx->pc = 0x194D9Cu;
    // 0x194d9c: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x194d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
    // 0x194da0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x194DA0u;
    {
        const bool branch_taken_0x194da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194da0) {
            ctx->pc = 0x194DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194DA0u;
            // 0x194da4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194DF0u;
            goto label_194df0;
        }
    }
    ctx->pc = 0x194DA8u;
    // 0x194da8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x194DA8u;
    SET_GPR_U32(ctx, 31, 0x194DB0u);
    ctx->pc = 0x194DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DA8u;
    // 0x194dac: 0x8ea40088  lw          $a0, 0x88($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x194DA8u, 0x194DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DB0u;
label_194db0:
    // 0x194db0: 0x8ea3008c  lw          $v1, 0x8C($s5)
    ctx->pc = 0x194db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x194db4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x194db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x194db8: 0x8ea50080  lw          $a1, 0x80($s5)
    ctx->pc = 0x194db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x194dbc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x194dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x194dc0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x194dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x194dc4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x194dc4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x194dc8: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x194dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x194dcc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x194dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x194dd0: 0xaea50080  sw          $a1, 0x80($s5)
    ctx->pc = 0x194dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 5));
    // 0x194dd4: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x194dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x194dd8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x194DD8u;
    SET_GPR_U32(ctx, 31, 0x194DE0u);
    ctx->pc = 0x194DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DD8u;
    // 0x194ddc: 0xaea5008c  sw          $a1, 0x8C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x194DD8u, 0x194DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DE0u;
label_194de0:
    // 0x194de0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x194DE0u;
    SET_GPR_U32(ctx, 31, 0x194DE8u);
    ctx->pc = 0x194DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DE0u;
    // 0x194de4: 0x8ea40084  lw          $a0, 0x84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x194DE0u, 0x194DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DE8u;
label_194de8:
    // 0x194de8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x194DE8u;
    {
        const bool branch_taken_0x194de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DE8u;
        // 0x194dec: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194de8) {
            ctx->pc = 0x194E14u;
            goto label_194e14;
        }
    }
    ctx->pc = 0x194DF0u;
label_194df0:
    // 0x194df0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x194df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x194df4: 0x0  nop
    ctx->pc = 0x194df4u;
    // NOP
label_194df8:
    // 0x194df8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x194df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194dfc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x194dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x194e00: 0x0  nop
    ctx->pc = 0x194e00u;
    // NOP
    // 0x194e04: 0x0  nop
    ctx->pc = 0x194e04u;
    // NOP
    // 0x194e08: 0x0  nop
    ctx->pc = 0x194e08u;
    // NOP
    // 0x194e0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x194E0Cu;
    {
        const bool branch_taken_0x194e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E0Cu;
        // 0x194e10: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e0c) {
            ctx->pc = 0x194DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194df8;
        }
    }
    ctx->pc = 0x194E14u;
label_194e14:
    // 0x194e14: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x194e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x194e18: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x194e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x194e1c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x194e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x194e20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x194e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194e24: 0xaf808c74  sw          $zero, -0x738C($gp)
    ctx->pc = 0x194e24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 0));
    // 0x194e28: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x194e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x194e2c: 0x8f848c68  lw          $a0, -0x7398($gp)
    ctx->pc = 0x194e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x194e30: 0x34420145  ori         $v0, $v0, 0x145
    ctx->pc = 0x194e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)325);
    // 0x194e34: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x194e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    // 0x194e38: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x194e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x194e3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x194e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x194e40: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x194E40u;
    SET_GPR_U32(ctx, 31, 0x194E48u);
    ctx->pc = 0x194E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E40u;
    // 0x194e44: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x194E40u, 0x194E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E48u;
label_194e48:
    // 0x194e48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x194e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x194e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x194e50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x194e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194e54: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x194e54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x194e58: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x194e58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194e5c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x194e5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x194e60: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x194e60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194e64: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x194e64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x194e68: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x194e68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x194e6c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x194e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x194e70: 0x3e00008  jr          $ra
    ctx->pc = 0x194E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E70u;
        // 0x194e74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194E78u;
}
