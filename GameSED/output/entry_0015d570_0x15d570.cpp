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

// Function: entry_0015d570
// Address: 0x15d570 - 0x15d6d8
void entry_0015d570_0x15d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d570_0x15d570");
#endif

    switch (ctx->pc) {
        case 0x15d598u: goto label_15d598;
        case 0x15d5a0u: goto label_15d5a0;
        case 0x15d5c0u: goto label_15d5c0;
        case 0x15d5c8u: goto label_15d5c8;
        case 0x15d5f0u: goto label_15d5f0;
        case 0x15d600u: goto label_15d600;
        case 0x15d61cu: goto label_15d61c;
        default: break;
    }

    ctx->pc = 0x15d570u;

label_15d570:
    // 0x15d570: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15d570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15d574:
    // 0x15d574: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x15d574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15d578:
    // 0x15d578: 0x2456a738  addiu       $s6, $v0, -0x58C8
    ctx->pc = 0x15d578u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944568));
label_15d57c:
    // 0x15d57c: 0x8c720024  lw          $s2, 0x24($v1)
    ctx->pc = 0x15d57cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15d580:
    // 0x15d580: 0x26c2ffd8  addiu       $v0, $s6, -0x28
    ctx->pc = 0x15d580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967256));
label_15d584:
    // 0x15d584: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x15d584u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_15d588:
    // 0x15d588: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x15d588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_15d58c:
    // 0x15d58c: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15d58cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15d590:
    // 0x15d590: 0xc06bd28  jal         func_1AF4A0
label_15d594:
    if (ctx->pc == 0x15D594u) {
        ctx->pc = 0x15D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D590u;
        // 0x15d594: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D598u;
        goto label_15d598;
    }
    ctx->pc = 0x15D590u;
    SET_GPR_U32(ctx, 31, 0x15D598u);
    ctx->pc = 0x15D594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D590u;
    // 0x15d594: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15D590u, 0x15D598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D598u;
label_15d598:
    // 0x15d598: 0xc06bd20  jal         func_1AF480
label_15d59c:
    if (ctx->pc == 0x15D59Cu) {
        ctx->pc = 0x15D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D598u;
        // 0x15d59c: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D5A0u;
        goto label_15d5a0;
    }
    ctx->pc = 0x15D598u;
    SET_GPR_U32(ctx, 31, 0x15D5A0u);
    ctx->pc = 0x15D59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D598u;
    // 0x15d59c: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15D598u, 0x15D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5A0u;
label_15d5a0:
    // 0x15d5a0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x15d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_15d5a4:
    // 0x15d5a4: 0x8e500028  lw          $s0, 0x28($s2)
    ctx->pc = 0x15d5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_15d5a8:
    // 0x15d5a8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x15d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_15d5ac:
    // 0x15d5ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15d5b0:
    // 0x15d5b0: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15d5b4:
    // 0x15d5b4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15d5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15d5b8:
    // 0x15d5b8: 0xc0682b2  jal         func_1A0AC8
label_15d5bc:
    if (ctx->pc == 0x15D5BCu) {
        ctx->pc = 0x15D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5B8u;
        // 0x15d5bc: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D5C0u;
        goto label_15d5c0;
    }
    ctx->pc = 0x15D5B8u;
    SET_GPR_U32(ctx, 31, 0x15D5C0u);
    ctx->pc = 0x15D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D5B8u;
    // 0x15d5bc: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15D5B8u, 0x15D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5C0u;
label_15d5c0:
    // 0x15d5c0: 0xc0682b6  jal         func_1A0AD8
label_15d5c4:
    if (ctx->pc == 0x15D5C4u) {
        ctx->pc = 0x15D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5C0u;
        // 0x15d5c4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D5C8u;
        goto label_15d5c8;
    }
    ctx->pc = 0x15D5C0u;
    SET_GPR_U32(ctx, 31, 0x15D5C8u);
    ctx->pc = 0x15D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D5C0u;
    // 0x15d5c4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15D5C0u, 0x15D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5C8u;
label_15d5c8:
    // 0x15d5c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15d5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15d5cc:
    // 0x15d5cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15d5ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d5d0:
    // 0x15d5d0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15d5d4:
    // 0x15d5d4: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x15d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15d5d8:
    // 0x15d5d8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15d5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15d5dc:
    // 0x15d5dc: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_15d5e0:
    // 0x15d5e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d5e4:
    // 0x15d5e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15d5e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d5e8:
    // 0x15d5e8: 0xc062cb0  jal         func_18B2C0
label_15d5ec:
    if (ctx->pc == 0x15D5ECu) {
        ctx->pc = 0x15D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5E8u;
        // 0x15d5ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D5F0u;
        goto label_15d5f0;
    }
    ctx->pc = 0x15D5E8u;
    SET_GPR_U32(ctx, 31, 0x15D5F0u);
    ctx->pc = 0x15D5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D5E8u;
    // 0x15d5ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15D5E8u, 0x15D5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5F0u;
label_15d5f0:
    // 0x15d5f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d5f4:
    // 0x15d5f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d5f8:
    // 0x15d5f8: 0xc06825c  jal         func_1A0970
label_15d5fc:
    if (ctx->pc == 0x15D5FCu) {
        ctx->pc = 0x15D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5F8u;
        // 0x15d5fc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D600u;
        goto label_15d600;
    }
    ctx->pc = 0x15D5F8u;
    SET_GPR_U32(ctx, 31, 0x15D600u);
    ctx->pc = 0x15D5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D5F8u;
    // 0x15d5fc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15D5F8u, 0x15D600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D600u;
label_15d600:
    // 0x15d600: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15d600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15d604:
    // 0x15d604: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d608:
    // 0x15d608: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15d60c:
    // 0x15d60c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d60cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d610:
    // 0x15d610: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d614:
    // 0x15d614: 0x60f809  jalr        $v1
label_15d618:
    if (ctx->pc == 0x15D618u) {
        ctx->pc = 0x15D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D614u;
        // 0x15d618: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D61Cu;
        goto label_15d61c;
    }
    ctx->pc = 0x15D614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D61Cu);
        ctx->pc = 0x15D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D614u;
        // 0x15d618: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D614u, 0x15D61Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D61Cu;
label_15d61c:
    // 0x15d61c: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15d61cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15d620:
    // 0x15d620: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_15d624:
    if (ctx->pc == 0x15D624u) {
        ctx->pc = 0x15D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D620u;
        // 0x15d624: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D628u;
        goto label_15d628;
    }
    ctx->pc = 0x15D620u;
    {
        const bool branch_taken_0x15d620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D620u;
        // 0x15d624: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d620) {
            ctx->pc = 0x15D6D8u;
            return;
        }
    }
    ctx->pc = 0x15D628u;
label_15d628:
    // 0x15d628: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15d628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15d62c:
    // 0x15d62c: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15d62cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15d630:
    // 0x15d630: 0x26080180  addiu       $t0, $s0, 0x180
    ctx->pc = 0x15d630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15d634:
    // 0x15d634: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15d634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15d638:
    // 0x15d638: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15d638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15d63c:
    // 0x15d63c: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15d63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15d640:
    // 0x15d640: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15d640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15d644:
    // 0x15d644: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15d644u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15d648:
    // 0x15d648: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15d648u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15d64c:
    // 0x15d64c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15d650:
    // 0x15d650: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x15d650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15d654:
    // 0x15d654: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15d654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15d658:
    // 0x15d658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d65c:
    // 0x15d65c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15d65cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15d660:
    // 0x15d660: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15d664:
    // 0x15d664: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15d664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15d668:
    // 0x15d668: 0xa4e4000e  sh          $a0, 0xE($a3)
    ctx->pc = 0x15d668u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 4));
label_15d66c:
    // 0x15d66c: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x15d66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_15d670:
    // 0x15d670: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15d670u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15d674:
    // 0x15d674: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x15d674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_15d678:
    // 0x15d678: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15d678u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15d67c:
    // 0x15d67c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15d67cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d680:
    // 0x15d680: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15d680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d684:
    // 0x15d684: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x15d684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d688:
    // 0x15d688: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d68c:
    // 0x15d68c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d68cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d690:
    // 0x15d690: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d690u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d694:
    // 0x15d694: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d694u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d698:
    // 0x15d698: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x15d698u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_15d69c:
    // 0x15d69c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15d69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15d6a0:
    // 0x15d6a0: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x15d6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15d6a4:
    // 0x15d6a4: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x15d6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d6a8:
    // 0x15d6a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15d6a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d6ac:
    // 0x15d6ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15d6acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d6b0:
    // 0x15d6b0: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x15d6b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d6b4:
    // 0x15d6b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d6b8:
    // 0x15d6b8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d6b8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d6bc:
    // 0x15d6bc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d6bcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d6c0:
    // 0x15d6c0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d6c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d6c4:
    // 0x15d6c4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15d6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15d6c8:
    // 0x15d6c8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d6c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15d6cc:
    // 0x15d6cc: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x15d6ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_15d6d0:
    // 0x15d6d0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15d6d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15d6d4:
    // 0x15d6d4: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15d6d8u;
}
