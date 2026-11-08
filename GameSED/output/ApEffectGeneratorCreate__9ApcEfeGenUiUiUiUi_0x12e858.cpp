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

// Function: ApEffectGeneratorCreate__9ApcEfeGenUiUiUiUi
// Address: 0x12e858 - 0x12ea08
void ApEffectGeneratorCreate__9ApcEfeGenUiUiUiUi_0x12e858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEffectGeneratorCreate__9ApcEfeGenUiUiUiUi_0x12e858");
#endif

    switch (ctx->pc) {
        case 0x12e894u: goto label_12e894;
        case 0x12e89cu: goto label_12e89c;
        case 0x12e8c8u: goto label_12e8c8;
        case 0x12e8d4u: goto label_12e8d4;
        case 0x12e8fcu: goto label_12e8fc;
        case 0x12e918u: goto label_12e918;
        case 0x12e944u: goto label_12e944;
        case 0x12e968u: goto label_12e968;
        case 0x12e978u: goto label_12e978;
        case 0x12e998u: goto label_12e998;
        case 0x12e9a4u: goto label_12e9a4;
        case 0x12e9b8u: goto label_12e9b8;
        case 0x12e9ccu: goto label_12e9cc;
        default: break;
    }

    ctx->pc = 0x12e858u;

    // 0x12e858: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12e858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12e85c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12e860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e864: 0x240400e6  addiu       $a0, $zero, 0xE6
    ctx->pc = 0x12e864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x12e868: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e86c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12e86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12e870: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x12e870u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e874: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12e874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12e878: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x12e878u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e87c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x12e87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12e880: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12e884: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12e884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12e888: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x12e888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x12e88c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x12E88Cu;
    SET_GPR_U32(ctx, 31, 0x12E894u);
    ctx->pc = 0x12E890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E88Cu;
    // 0x12e890: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x12E88Cu, 0x12E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E894u;
label_12e894:
    // 0x12e894: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x12E894u;
    SET_GPR_U32(ctx, 31, 0x12E89Cu);
    ctx->pc = 0x12E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E894u;
    // 0x12e898: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x12E894u, 0x12E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E89Cu;
label_12e89c:
    // 0x12e89c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x12e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x12e8a0: 0x2463eba0  addiu       $v1, $v1, -0x1460
    ctx->pc = 0x12e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962080));
    // 0x12e8a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e8a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8a8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E8A8u;
    {
        const bool branch_taken_0x12e8a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8A8u;
        // 0x12e8ac: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8a8) {
            ctx->pc = 0x12E8C0u;
            goto label_12e8c0;
        }
    }
    ctx->pc = 0x12E8B0u;
    // 0x12e8b0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12e8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12e8b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12e8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8b8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x12E8B8u;
    {
        const bool branch_taken_0x12e8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8B8u;
        // 0x12e8bc: 0x24a55ff0  addiu       $a1, $a1, 0x5FF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8b8) {
            ctx->pc = 0x12E93Cu;
            goto label_12e93c;
        }
    }
    ctx->pc = 0x12E8C0u;
label_12e8c0:
    // 0x12e8c0: 0xc04b998  jal         func_12E660
    ctx->pc = 0x12E8C0u;
    SET_GPR_U32(ctx, 31, 0x12E8C8u);
    ctx->pc = 0x12E8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E8C0u;
    // 0x12e8c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E660u, 0x12E8C0u, 0x12E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8C8u;
label_12e8c8:
    // 0x12e8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8cc: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x12E8CCu;
    SET_GPR_U32(ctx, 31, 0x12E8D4u);
    ctx->pc = 0x12E8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E8CCu;
    // 0x12e8d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x12E8CCu, 0x12E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8D4u;
label_12e8d4:
    // 0x12e8d4: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x12e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x12e8d8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12E8D8u;
    {
        const bool branch_taken_0x12e8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8D8u;
        // 0x12e8dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8d8) {
            ctx->pc = 0x12E928u;
            goto label_12e928;
        }
    }
    ctx->pc = 0x12E8E0u;
    // 0x12e8e0: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x12e8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12e8e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12e8e8: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x12e8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x12e8ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x12e8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12e8f0: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x12e8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x12e8f4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x12E8F4u;
    SET_GPR_U32(ctx, 31, 0x12E8FCu);
    ctx->pc = 0x12E8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E8F4u;
    // 0x12e8f8: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x12E8F4u, 0x12E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8FCu;
label_12e8fc:
    // 0x12e8fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E8FCu;
    {
        const bool branch_taken_0x12e8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8FCu;
        // 0x12e900: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8fc) {
            ctx->pc = 0x12E920u;
            goto label_12e920;
        }
    }
    ctx->pc = 0x12E904u;
    // 0x12e904: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12e904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12e908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e90c: 0x24a55fd8  addiu       $a1, $a1, 0x5FD8
    ctx->pc = 0x12e90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24536));
    // 0x12e910: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12E910u;
    SET_GPR_U32(ctx, 31, 0x12E918u);
    ctx->pc = 0x12E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E910u;
    // 0x12e914: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12E910u, 0x12E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E918u;
label_12e918:
    // 0x12e918: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12E918u;
    {
        const bool branch_taken_0x12e918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E918u;
        // 0x12e91c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e918) {
            ctx->pc = 0x12E928u;
            goto label_12e928;
        }
    }
    ctx->pc = 0x12E920u;
label_12e920:
    // 0x12e920: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x12e920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
    // 0x12e924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12e924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e928:
    // 0x12e928: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E928u;
    {
        const bool branch_taken_0x12e928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E928u;
        // 0x12e92c: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e928) {
            ctx->pc = 0x12E950u;
            goto label_12e950;
        }
    }
    ctx->pc = 0x12E930u;
    // 0x12e930: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12e930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12e934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e938: 0x24a56018  addiu       $a1, $a1, 0x6018
    ctx->pc = 0x12e938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24600));
label_12e93c:
    // 0x12e93c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12E93Cu;
    SET_GPR_U32(ctx, 31, 0x12E944u);
    ctx->pc = 0x12E940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E93Cu;
    // 0x12e940: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12E93Cu, 0x12E944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E944u;
label_12e944:
    // 0x12e944: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x12E944u;
    {
        const bool branch_taken_0x12e944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E944u;
        // 0x12e948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e944) {
            ctx->pc = 0x12E9E0u;
            goto label_12e9e0;
        }
    }
    ctx->pc = 0x12E94Cu;
    // 0x12e94c: 0x0  nop
    ctx->pc = 0x12e94cu;
    // NOP
label_12e950:
    // 0x12e950: 0xae30015c  sw          $s0, 0x15C($s1)
    ctx->pc = 0x12e950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 16));
    // 0x12e954: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12e954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e958: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12E958u;
    {
        const bool branch_taken_0x12e958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E958u;
        // 0x12e95c: 0x8e300158  lw          $s0, 0x158($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e958) {
            ctx->pc = 0x12E98Cu;
            goto label_12e98c;
        }
    }
    ctx->pc = 0x12E960u;
    // 0x12e960: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e964: 0x0  nop
    ctx->pc = 0x12e964u;
    // NOP
label_12e968:
    // 0x12e968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e96c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12e96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e970: 0xc04bbf0  jal         func_12EFC0
    ctx->pc = 0x12E970u;
    SET_GPR_U32(ctx, 31, 0x12E978u);
    ctx->pc = 0x12E974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E970u;
    // 0x12e974: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFC0u, 0x12E970u, 0x12E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E978u;
label_12e978:
    // 0x12e978: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x12e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x12e97c: 0x253182b  sltu        $v1, $s2, $s3
    ctx->pc = 0x12e97cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x12e980: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x12e980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x12e984: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12E984u;
    {
        const bool branch_taken_0x12e984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E984u;
        // 0x12e988: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e984) {
            ctx->pc = 0x12E968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e968;
        }
    }
    ctx->pc = 0x12E98Cu;
label_12e98c:
    // 0x12e98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e990: 0xc04bbf0  jal         func_12EFC0
    ctx->pc = 0x12E990u;
    SET_GPR_U32(ctx, 31, 0x12E998u);
    ctx->pc = 0x12E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E990u;
    // 0x12e994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFC0u, 0x12E990u, 0x12E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E998u;
label_12e998:
    // 0x12e998: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x12e998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x12e99c: 0xc04b49e  jal         func_12D278
    ctx->pc = 0x12E99Cu;
    SET_GPR_U32(ctx, 31, 0x12E9A4u);
    ctx->pc = 0x12E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E99Cu;
    // 0x12e9a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D278u, 0x12E99Cu, 0x12E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9A4u;
label_12e9a4:
    // 0x12e9a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12e9a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9a8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x12E9A8u;
    {
        const bool branch_taken_0x12e9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9A8u;
        // 0x12e9ac: 0xae23018c  sw          $v1, 0x18C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9a8) {
            ctx->pc = 0x12E9E0u;
            goto label_12e9e0;
        }
    }
    ctx->pc = 0x12E9B0u;
    // 0x12e9b0: 0xc0488cc  jal         func_122330
    ctx->pc = 0x12E9B0u;
    SET_GPR_U32(ctx, 31, 0x12E9B8u);
    ctx->pc = 0x12E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9B0u;
    // 0x12e9b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122330u, 0x12E9B0u, 0x12E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9B8u;
label_12e9b8:
    // 0x12e9b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12e9b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9bc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E9BCu;
    {
        const bool branch_taken_0x12e9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9BCu;
        // 0x12e9c0: 0xae230184  sw          $v1, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9bc) {
            ctx->pc = 0x12E9E0u;
            goto label_12e9e0;
        }
    }
    ctx->pc = 0x12E9C4u;
    // 0x12e9c4: 0xc04af7e  jal         func_12BDF8
    ctx->pc = 0x12E9C4u;
    SET_GPR_U32(ctx, 31, 0x12E9CCu);
    ctx->pc = 0x12E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9C4u;
    // 0x12e9c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDF8u, 0x12E9C4u, 0x12E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9CCu;
label_12e9cc:
    // 0x12e9cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12e9ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E9D0u;
    {
        const bool branch_taken_0x12e9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9D0u;
        // 0x12e9d4: 0xae230188  sw          $v1, 0x188($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9d0) {
            ctx->pc = 0x12E9E0u;
            goto label_12e9e0;
        }
    }
    ctx->pc = 0x12E9D8u;
    // 0x12e9d8: 0xaf918a00  sw          $s1, -0x7600($gp)
    ctx->pc = 0x12e9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937088), GPR_U32(ctx, 17));
    // 0x12e9dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12e9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12e9e0:
    // 0x12e9e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e9e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e9e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e9e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e9ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12e9ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e9f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12e9f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e9f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12e9f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e9f8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x12e9f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e9fc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x12e9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12ea00: 0x3e00008  jr          $ra
    ctx->pc = 0x12EA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA00u;
        // 0x12ea04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EA08u;
}
