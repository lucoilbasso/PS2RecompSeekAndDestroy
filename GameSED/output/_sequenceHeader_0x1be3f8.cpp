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

// Function: _sequenceHeader
// Address: 0x1be3f8 - 0x1be51c
void _sequenceHeader_0x1be3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sequenceHeader_0x1be3f8");
#endif

    switch (ctx->pc) {
        case 0x1be414u: goto label_1be414;
        case 0x1be444u: goto label_1be444;
        case 0x1be450u: goto label_1be450;
        case 0x1be474u: goto label_1be474;
        case 0x1be484u: goto label_1be484;
        case 0x1be490u: goto label_1be490;
        case 0x1be498u: goto label_1be498;
        case 0x1be4b4u: goto label_1be4b4;
        case 0x1be4c0u: goto label_1be4c0;
        case 0x1be4d0u: goto label_1be4d0;
        case 0x1be4dcu: goto label_1be4dc;
        case 0x1be4e4u: goto label_1be4e4;
        case 0x1be500u: goto label_1be500;
        case 0x1be508u: goto label_1be508;
        default: break;
    }

    ctx->pc = 0x1be3f8u;

    // 0x1be3f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be3fc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1be3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1be400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1be408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be40c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1BE40Cu;
    SET_GPR_U32(ctx, 31, 0x1BE414u);
    ctx->pc = 0x1BE410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE40Cu;
    // 0x1be410: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1BE40Cu, 0x1BE414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE414u;
label_1be414:
    // 0x1be414: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1be414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be418: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x1be418u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1be41c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1be41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1be420: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x1be420u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x1be424: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x1be424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    // 0x1be428: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x1be428u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x1be42c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE42Cu;
    {
        const bool branch_taken_0x1be42c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE42Cu;
        // 0x1be430: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be42c) {
            ctx->pc = 0x1BE444u;
            goto label_1be444;
        }
    }
    ctx->pc = 0x1BE434u;
    // 0x1be434: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1be434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1be438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be43c: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1BE43Cu;
    SET_GPR_U32(ctx, 31, 0x1BE444u);
    ctx->pc = 0x1BE440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE43Cu;
    // 0x1be440: 0x24a5b338  addiu       $a1, $a1, -0x4CC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1BE43Cu, 0x1BE444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE444u;
label_1be444:
    // 0x1be444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be448: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1BE448u;
    SET_GPR_U32(ctx, 31, 0x1BE450u);
    ctx->pc = 0x1BE44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE448u;
    // 0x1be44c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1BE448u, 0x1BE450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE450u;
label_1be450:
    // 0x1be450: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1be450u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be458: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x1be458u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1be45c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1be45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be460: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x1be460u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x1be464: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1be464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1be468: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x1be468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x1be46c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1BE46Cu;
    SET_GPR_U32(ctx, 31, 0x1BE474u);
    ctx->pc = 0x1BE470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE46Cu;
    // 0x1be470: 0xae020138  sw          $v0, 0x138($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1BE46Cu, 0x1BE474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE474u;
label_1be474:
    // 0x1be474: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BE474u;
    {
        const bool branch_taken_0x1be474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE474u;
        // 0x1be478: 0xae020840  sw          $v0, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be474) {
            ctx->pc = 0x1BE4A0u;
            goto label_1be4a0;
        }
    }
    ctx->pc = 0x1BE47Cu;
    // 0x1be47c: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1BE47Cu;
    SET_GPR_U32(ctx, 31, 0x1BE484u);
    ctx->pc = 0x1BE480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE47Cu;
    // 0x1be480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1BE47Cu, 0x1BE484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE484u;
label_1be484:
    // 0x1be484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be488: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1BE488u;
    SET_GPR_U32(ctx, 31, 0x1BE490u);
    ctx->pc = 0x1BE48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE488u;
    // 0x1be48c: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1BE488u, 0x1BE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE490u;
label_1be490:
    // 0x1be490: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1BE490u;
    SET_GPR_U32(ctx, 31, 0x1BE498u);
    ctx->pc = 0x1BE494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE490u;
    // 0x1be494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1BE490u, 0x1BE498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE498u;
label_1be498:
    // 0x1be498: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE498u;
    {
        const bool branch_taken_0x1be498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE498u;
        // 0x1be49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be498) {
            ctx->pc = 0x1BE4B8u;
            goto label_1be4b8;
        }
    }
    ctx->pc = 0x1BE4A0u;
label_1be4a0:
    // 0x1be4a0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1be4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1be4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4a8: 0x24c6dc00  addiu       $a2, $a2, -0x2400
    ctx->pc = 0x1be4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958080));
    // 0x1be4ac: 0xc06fa2a  jal         func_1BE8A8
    ctx->pc = 0x1BE4ACu;
    SET_GPR_U32(ctx, 31, 0x1BE4B4u);
    ctx->pc = 0x1BE4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4ACu;
    // 0x1be4b0: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE8A8u, 0x1BE4ACu, 0x1BE4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4B4u;
label_1be4b4:
    // 0x1be4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1be4b8:
    // 0x1be4b8: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1BE4B8u;
    SET_GPR_U32(ctx, 31, 0x1BE4C0u);
    ctx->pc = 0x1BE4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4B8u;
    // 0x1be4bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1BE4B8u, 0x1BE4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4C0u;
label_1be4c0:
    // 0x1be4c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BE4C0u;
    {
        const bool branch_taken_0x1be4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4C0u;
        // 0x1be4c4: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be4c0) {
            ctx->pc = 0x1BE4ECu;
            goto label_1be4ec;
        }
    }
    ctx->pc = 0x1BE4C8u;
    // 0x1be4c8: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1BE4C8u;
    SET_GPR_U32(ctx, 31, 0x1BE4D0u);
    ctx->pc = 0x1BE4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4C8u;
    // 0x1be4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1BE4C8u, 0x1BE4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4D0u;
label_1be4d0:
    // 0x1be4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4d4: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1BE4D4u;
    SET_GPR_U32(ctx, 31, 0x1BE4DCu);
    ctx->pc = 0x1BE4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4D4u;
    // 0x1be4d8: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1BE4D4u, 0x1BE4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4DCu;
label_1be4dc:
    // 0x1be4dc: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1BE4DCu;
    SET_GPR_U32(ctx, 31, 0x1BE4E4u);
    ctx->pc = 0x1BE4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4DCu;
    // 0x1be4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1BE4DCu, 0x1BE4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4E4u;
label_1be4e4:
    // 0x1be4e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE4E4u;
    {
        const bool branch_taken_0x1be4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be4e4) {
            ctx->pc = 0x1BE500u;
            goto label_1be500;
        }
    }
    ctx->pc = 0x1BE4ECu;
label_1be4ec:
    // 0x1be4ec: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1be4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1be4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4f4: 0x24c6dc40  addiu       $a2, $a2, -0x23C0
    ctx->pc = 0x1be4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958144));
    // 0x1be4f8: 0xc06fa2a  jal         func_1BE8A8
    ctx->pc = 0x1BE4F8u;
    SET_GPR_U32(ctx, 31, 0x1BE500u);
    ctx->pc = 0x1BE4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4F8u;
    // 0x1be4fc: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE8A8u, 0x1BE4F8u, 0x1BE500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE500u;
label_1be500:
    // 0x1be500: 0xc0708fa  jal         func_1C23E8
    ctx->pc = 0x1BE500u;
    SET_GPR_U32(ctx, 31, 0x1BE508u);
    ctx->pc = 0x1BE504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE500u;
    // 0x1be504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C23E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C23E8u, 0x1BE500u, 0x1BE508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE508u;
label_1be508:
    // 0x1be508: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x1be508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x1be50c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be514: 0x806f948  j           func_1BE520
    ctx->pc = 0x1BE514u;
    ctx->pc = 0x1BE518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE514u;
    // 0x1be518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE520u;
    _initSeq_0x1be520(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE51Cu;
}
