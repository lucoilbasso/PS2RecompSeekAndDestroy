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

// Function: entry_0015f868
// Address: 0x15f868 - 0x15f940
void entry_0015f868_0x15f868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f868_0x15f868");
#endif

    switch (ctx->pc) {
        case 0x15f8a4u: goto label_15f8a4;
        case 0x15f8d0u: goto label_15f8d0;
        case 0x15f8f0u: goto label_15f8f0;
        case 0x15f90cu: goto label_15f90c;
        case 0x15f91cu: goto label_15f91c;
        default: break;
    }

    ctx->pc = 0x15f868u;

label_15f868:
    // 0x15f868: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15f868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f86c:
    // 0x15f86c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x15f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15f870:
    // 0x15f870: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15f870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f874:
    // 0x15f874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f878:
    // 0x15f878: 0x8e870020  lw          $a3, 0x20($s4)
    ctx->pc = 0x15f878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15f87c:
    // 0x15f87c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x15f87cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_15f880:
    // 0x15f880: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15f880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15f884:
    // 0x15f884: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x15f884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_15f888:
    // 0x15f888: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15f888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15f88c:
    // 0x15f88c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x15f88cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_15f890:
    // 0x15f890: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15f890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15f894:
    // 0x15f894: 0xae07012c  sw          $a3, 0x12C($s0)
    ctx->pc = 0x15f894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 7));
label_15f898:
    // 0x15f898: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x15f898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_15f89c:
    // 0x15f89c: 0x40f809  jalr        $v0
label_15f8a0:
    if (ctx->pc == 0x15F8A0u) {
        ctx->pc = 0x15F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F89Cu;
        // 0x15f8a0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F8A4u;
        goto label_15f8a4;
    }
    ctx->pc = 0x15F89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15F8A4u);
        ctx->pc = 0x15F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F89Cu;
        // 0x15f8a0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F89Cu, 0x15F8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F8A4u;
label_15f8a4:
    // 0x15f8a4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15f8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f8a8:
    // 0x15f8a8: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15f8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15f8ac:
    // 0x15f8ac: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15f8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15f8b0:
    // 0x15f8b0: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15f8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15f8b4:
    // 0x15f8b4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15f8b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15f8b8:
    // 0x15f8b8: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15f8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15f8bc:
    // 0x15f8bc: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15f8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15f8c0:
    // 0x15f8c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15f8c4:
    // 0x15f8c4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x15f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_15f8c8:
    // 0x15f8c8: 0xe0f809  jalr        $a3
label_15f8cc:
    if (ctx->pc == 0x15F8CCu) {
        ctx->pc = 0x15F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8C8u;
        // 0x15f8cc: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F8D0u;
        goto label_15f8d0;
    }
    ctx->pc = 0x15F8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15F8D0u);
        ctx->pc = 0x15F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8C8u;
        // 0x15f8cc: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F8C8u, 0x15F8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F8D0u;
label_15f8d0:
    // 0x15f8d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f8d4:
    // 0x15f8d4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x15f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_15f8d8:
    // 0x15f8d8: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15f8dc:
    // 0x15f8dc: 0x2465aa34  addiu       $a1, $v1, -0x55CC
    ctx->pc = 0x15f8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945332));
label_15f8e0:
    // 0x15f8e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f8e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f8e4:
    // 0x15f8e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f8e8:
    // 0x15f8e8: 0x60f809  jalr        $v1
label_15f8ec:
    if (ctx->pc == 0x15F8ECu) {
        ctx->pc = 0x15F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8E8u;
        // 0x15f8ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F8F0u;
        goto label_15f8f0;
    }
    ctx->pc = 0x15F8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F8F0u);
        ctx->pc = 0x15F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8E8u;
        // 0x15f8ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F8E8u, 0x15F8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F8F0u;
label_15f8f0:
    // 0x15f8f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f8f4:
    // 0x15f8f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f8f8:
    // 0x15f8f8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15f8fc:
    // 0x15f8fc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f8fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f900:
    // 0x15f900: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f904:
    // 0x15f904: 0x60f809  jalr        $v1
label_15f908:
    if (ctx->pc == 0x15F908u) {
        ctx->pc = 0x15F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F904u;
        // 0x15f908: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F90Cu;
        goto label_15f90c;
    }
    ctx->pc = 0x15F904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F90Cu);
        ctx->pc = 0x15F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F904u;
        // 0x15f908: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F904u, 0x15F90Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F90Cu;
label_15f90c:
    // 0x15f90c: 0x6c3ff80  bgezl       $s6, . + 4 + (-0x80 << 2)
label_15f910:
    if (ctx->pc == 0x15F910u) {
        ctx->pc = 0x15F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F90Cu;
        // 0x15f910: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F914u;
        goto label_15f914;
    }
    ctx->pc = 0x15F90Cu;
    {
        const bool branch_taken_0x15f90c = (GPR_S32(ctx, 22) >= 0);
        if (branch_taken_0x15f90c) {
            ctx->pc = 0x15F910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F90Cu;
            // 0x15f910: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F710u;
            return;
        }
    }
    ctx->pc = 0x15F914u;
label_15f914:
    // 0x15f914: 0xc05bedc  jal         func_16FB70
label_15f918:
    if (ctx->pc == 0x15F918u) {
        ctx->pc = 0x15F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F914u;
        // 0x15f918: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F91Cu;
        goto label_15f91c;
    }
    ctx->pc = 0x15F914u;
    SET_GPR_U32(ctx, 31, 0x15F91Cu);
    ctx->pc = 0x15F918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F914u;
    // 0x15f918: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x15F914u, 0x15F91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F91Cu;
label_15f91c:
    // 0x15f91c: 0xaebe0f28  sw          $fp, 0xF28($s5)
    ctx->pc = 0x15f91cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3880), GPR_U32(ctx, 30));
label_15f920:
    // 0x15f920: 0x96a20016  lhu         $v0, 0x16($s5)
    ctx->pc = 0x15f920u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
label_15f924:
    // 0x15f924: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15f924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15f928:
    // 0x15f928: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x15f928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_15f92c:
    // 0x15f92c: 0xaea00fbc  sw          $zero, 0xFBC($s5)
    ctx->pc = 0x15f92cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4028), GPR_U32(ctx, 0));
label_15f930:
    // 0x15f930: 0xaea30f2c  sw          $v1, 0xF2C($s5)
    ctx->pc = 0x15f930u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3884), GPR_U32(ctx, 3));
label_15f934:
    // 0x15f934: 0x10000009  b           . + 4 + (0x9 << 2)
label_15f938:
    if (ctx->pc == 0x15F938u) {
        ctx->pc = 0x15F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F934u;
        // 0x15f938: 0xa6a20016  sh          $v0, 0x16($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F93Cu;
        goto label_15f93c;
    }
    ctx->pc = 0x15F934u;
    {
        const bool branch_taken_0x15f934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F934u;
        // 0x15f938: 0xa6a20016  sh          $v0, 0x16($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f934) {
            ctx->pc = 0x15F95Cu;
            return;
        }
    }
    ctx->pc = 0x15F93Cu;
label_15f93c:
    // 0x15f93c: 0x0  nop
    ctx->pc = 0x15f93cu;
    // NOP
    ctx->pc = 0x15f940u;
}
