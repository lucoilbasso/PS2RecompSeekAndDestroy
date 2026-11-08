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

// Function: entry_0014a7e4
// Address: 0x14a7e4 - 0x14a8b4
void entry_0014a7e4_0x14a7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a7e4_0x14a7e4");
#endif

    switch (ctx->pc) {
        case 0x14a7f0u: goto label_14a7f0;
        case 0x14a884u: goto label_14a884;
        case 0x14a8a8u: goto label_14a8a8;
        default: break;
    }

    ctx->pc = 0x14a7e4u;

label_14a7e4:
    // 0x14a7e4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_14a7e8:
    // 0x14a7e8: 0xc066868  jal         func_19A1A0
label_14a7ec:
    if (ctx->pc == 0x14A7ECu) {
        ctx->pc = 0x14A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7E8u;
        // 0x14a7ec: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A7F0u;
        goto label_14a7f0;
    }
    ctx->pc = 0x14A7E8u;
    SET_GPR_U32(ctx, 31, 0x14A7F0u);
    ctx->pc = 0x14A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A7E8u;
    // 0x14a7ec: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A1A0u, 0x14A7E8u, 0x14A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7F0u;
label_14a7f0:
    // 0x14a7f0: 0x26220188  addiu       $v0, $s1, 0x188
    ctx->pc = 0x14a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 392));
label_14a7f4:
    // 0x14a7f4: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x14a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_14a7f8:
    // 0x14a7f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14a7fc:
    // 0x14a7fc: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x14a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_14a800:
    // 0x14a800: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x14a800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_14a804:
    // 0x14a804: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x14a804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14a808:
    // 0x14a808: 0xae25017c  sw          $a1, 0x17C($s1)
    ctx->pc = 0x14a808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 5));
label_14a80c:
    // 0x14a80c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14a80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14a810:
    // 0x14a810: 0xae230178  sw          $v1, 0x178($s1)
    ctx->pc = 0x14a810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 376), GPR_U32(ctx, 3));
label_14a814:
    // 0x14a814: 0xae200180  sw          $zero, 0x180($s1)
    ctx->pc = 0x14a814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 0));
label_14a818:
    // 0x14a818: 0xae200184  sw          $zero, 0x184($s1)
    ctx->pc = 0x14a818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
label_14a81c:
    // 0x14a81c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x14a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_14a820:
    // 0x14a820: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14a820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_14a824:
    // 0x14a824: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14a824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_14a828:
    // 0x14a828: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x14a828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_14a82c:
    // 0x14a82c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x14a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_14a830:
    // 0x14a830: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x14a830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_14a834:
    // 0x14a834: 0xa22001a9  sb          $zero, 0x1A9($s1)
    ctx->pc = 0x14a834u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 425), (uint8_t)GPR_U32(ctx, 0));
label_14a838:
    // 0x14a838: 0xa22001aa  sb          $zero, 0x1AA($s1)
    ctx->pc = 0x14a838u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 426), (uint8_t)GPR_U32(ctx, 0));
label_14a83c:
    // 0x14a83c: 0xa22001ab  sb          $zero, 0x1AB($s1)
    ctx->pc = 0x14a83cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 427), (uint8_t)GPR_U32(ctx, 0));
label_14a840:
    // 0x14a840: 0xae24024c  sw          $a0, 0x24C($s1)
    ctx->pc = 0x14a840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 4));
label_14a844:
    // 0x14a844: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x14a844u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14a848:
    // 0x14a848: 0xae200174  sw          $zero, 0x174($s1)
    ctx->pc = 0x14a848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 0));
label_14a84c:
    // 0x14a84c: 0xa6200238  sh          $zero, 0x238($s1)
    ctx->pc = 0x14a84cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 568), (uint16_t)GPR_U32(ctx, 0));
label_14a850:
    // 0x14a850: 0xae2001ac  sw          $zero, 0x1AC($s1)
    ctx->pc = 0x14a850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 0));
label_14a854:
    // 0x14a854: 0xae2001b0  sw          $zero, 0x1B0($s1)
    ctx->pc = 0x14a854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 432), GPR_U32(ctx, 0));
label_14a858:
    // 0x14a858: 0xae2001b4  sw          $zero, 0x1B4($s1)
    ctx->pc = 0x14a858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 0));
label_14a85c:
    // 0x14a85c: 0xae2001b8  sw          $zero, 0x1B8($s1)
    ctx->pc = 0x14a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 0));
label_14a860:
    // 0x14a860: 0xae2001bc  sw          $zero, 0x1BC($s1)
    ctx->pc = 0x14a860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 0));
label_14a864:
    // 0x14a864: 0xae2001c0  sw          $zero, 0x1C0($s1)
    ctx->pc = 0x14a864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 0));
label_14a868:
    // 0x14a868: 0xae2001c4  sw          $zero, 0x1C4($s1)
    ctx->pc = 0x14a868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 0));
label_14a86c:
    // 0x14a86c: 0xae2001c8  sw          $zero, 0x1C8($s1)
    ctx->pc = 0x14a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 0));
label_14a870:
    // 0x14a870: 0xae200244  sw          $zero, 0x244($s1)
    ctx->pc = 0x14a870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 0));
label_14a874:
    // 0x14a874: 0xae200248  sw          $zero, 0x248($s1)
    ctx->pc = 0x14a874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
label_14a878:
    // 0x14a878: 0xae300170  sw          $s0, 0x170($s1)
    ctx->pc = 0x14a878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 16));
label_14a87c:
    // 0x14a87c: 0xc0684de  jal         func_1A1378
label_14a880:
    if (ctx->pc == 0x14A880u) {
        ctx->pc = 0x14A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A87Cu;
        // 0x14a880: 0x8e44007c  lw          $a0, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A884u;
        goto label_14a884;
    }
    ctx->pc = 0x14A87Cu;
    SET_GPR_U32(ctx, 31, 0x14A884u);
    ctx->pc = 0x14A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A87Cu;
    // 0x14a880: 0x8e44007c  lw          $a0, 0x7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1378u, 0x14A87Cu, 0x14A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A884u;
label_14a884:
    // 0x14a884: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14a884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14a888:
    // 0x14a888: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_14a88c:
    if (ctx->pc == 0x14A88Cu) {
        ctx->pc = 0x14A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A888u;
        // 0x14a88c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A890u;
        goto label_14a890;
    }
    ctx->pc = 0x14A888u;
    {
        const bool branch_taken_0x14a888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A888u;
        // 0x14a88c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a888) {
            ctx->pc = 0x14A8B4u;
            return;
        }
    }
    ctx->pc = 0x14A890u;
label_14a890:
    // 0x14a890: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x14a890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_14a894:
    // 0x14a894: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x14a894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_14a898:
    // 0x14a898: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14a898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14a89c:
    // 0x14a89c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14a8a0:
    // 0x14a8a0: 0x60f809  jalr        $v1
label_14a8a4:
    if (ctx->pc == 0x14A8A4u) {
        ctx->pc = 0x14A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8A0u;
        // 0x14a8a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A8A8u;
        goto label_14a8a8;
    }
    ctx->pc = 0x14A8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14A8A8u);
        ctx->pc = 0x14A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8A0u;
        // 0x14a8a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A8A0u, 0x14A8A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14A8A8u;
label_14a8a8:
    // 0x14a8a8: 0x2644007c  addiu       $a0, $s2, 0x7C
    ctx->pc = 0x14a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
label_14a8ac:
    // 0x14a8ac: 0xc0683b6  jal         func_1A0ED8
label_14a8b0:
    if (ctx->pc == 0x14A8B0u) {
        ctx->pc = 0x14A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8ACu;
        // 0x14a8b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A8B4u;
        goto label_fallthrough_0x14a8ac;
    }
    ctx->pc = 0x14A8ACu;
    SET_GPR_U32(ctx, 31, 0x14A8B4u);
    ctx->pc = 0x14A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A8ACu;
    // 0x14a8b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x14A8ACu, 0x14A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x14a8ac:
    ctx->pc = 0x14A8B4u;
}
