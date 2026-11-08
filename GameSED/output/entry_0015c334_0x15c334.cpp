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

// Function: entry_0015c334
// Address: 0x15c334 - 0x15c498
void entry_0015c334_0x15c334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c334_0x15c334");
#endif

    switch (ctx->pc) {
        case 0x15c354u: goto label_15c354;
        case 0x15c35cu: goto label_15c35c;
        case 0x15c37cu: goto label_15c37c;
        case 0x15c384u: goto label_15c384;
        case 0x15c3acu: goto label_15c3ac;
        case 0x15c3bcu: goto label_15c3bc;
        case 0x15c3d8u: goto label_15c3d8;
        default: break;
    }

    ctx->pc = 0x15c334u;

label_15c334:
    // 0x15c334: 0x8ee30010  lw          $v1, 0x10($s7)
    ctx->pc = 0x15c334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_15c338:
    // 0x15c338: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15c338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15c33c:
    // 0x15c33c: 0x2454a470  addiu       $s4, $v0, -0x5B90
    ctx->pc = 0x15c33cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943856));
label_15c340:
    // 0x15c340: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x15c340u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15c344:
    // 0x15c344: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15c344u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15c348:
    // 0x15c348: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15c348u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15c34c:
    // 0x15c34c: 0xc06bd28  jal         func_1AF4A0
label_15c350:
    if (ctx->pc == 0x15C350u) {
        ctx->pc = 0x15C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C34Cu;
        // 0x15c350: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C354u;
        goto label_15c354;
    }
    ctx->pc = 0x15C34Cu;
    SET_GPR_U32(ctx, 31, 0x15C354u);
    ctx->pc = 0x15C350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C34Cu;
    // 0x15c350: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15C34Cu, 0x15C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C354u;
label_15c354:
    // 0x15c354: 0xc06bd20  jal         func_1AF480
label_15c358:
    if (ctx->pc == 0x15C358u) {
        ctx->pc = 0x15C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C354u;
        // 0x15c358: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C35Cu;
        goto label_15c35c;
    }
    ctx->pc = 0x15C354u;
    SET_GPR_U32(ctx, 31, 0x15C35Cu);
    ctx->pc = 0x15C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C354u;
    // 0x15c358: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15C354u, 0x15C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C35Cu;
label_15c35c:
    // 0x15c35c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15c360:
    // 0x15c360: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x15c360u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15c364:
    // 0x15c364: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15c364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15c368:
    // 0x15c368: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15c368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15c36c:
    // 0x15c36c: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15c370:
    // 0x15c370: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x15c370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15c374:
    // 0x15c374: 0xc0682b2  jal         func_1A0AC8
label_15c378:
    if (ctx->pc == 0x15C378u) {
        ctx->pc = 0x15C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C374u;
        // 0x15c378: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C37Cu;
        goto label_15c37c;
    }
    ctx->pc = 0x15C374u;
    SET_GPR_U32(ctx, 31, 0x15C37Cu);
    ctx->pc = 0x15C378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C374u;
    // 0x15c378: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15C374u, 0x15C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C37Cu;
label_15c37c:
    // 0x15c37c: 0xc0682b6  jal         func_1A0AD8
label_15c380:
    if (ctx->pc == 0x15C380u) {
        ctx->pc = 0x15C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C37Cu;
        // 0x15c380: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C384u;
        goto label_15c384;
    }
    ctx->pc = 0x15C37Cu;
    SET_GPR_U32(ctx, 31, 0x15C384u);
    ctx->pc = 0x15C380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C37Cu;
    // 0x15c380: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15C37Cu, 0x15C384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C384u;
label_15c384:
    // 0x15c384: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15c384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c388:
    // 0x15c388: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15c388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c38c:
    // 0x15c38c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15c390:
    // 0x15c390: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x15c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15c394:
    // 0x15c394: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15c394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15c398:
    // 0x15c398: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15c398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_15c39c:
    // 0x15c39c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15c39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c3a0:
    // 0x15c3a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15c3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c3a4:
    // 0x15c3a4: 0xc062cb0  jal         func_18B2C0
label_15c3a8:
    if (ctx->pc == 0x15C3A8u) {
        ctx->pc = 0x15C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3A4u;
        // 0x15c3a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3ACu;
        goto label_15c3ac;
    }
    ctx->pc = 0x15C3A4u;
    SET_GPR_U32(ctx, 31, 0x15C3ACu);
    ctx->pc = 0x15C3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C3A4u;
    // 0x15c3a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15C3A4u, 0x15C3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C3ACu;
label_15c3ac:
    // 0x15c3ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c3b0:
    // 0x15c3b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c3b4:
    // 0x15c3b4: 0xc06825c  jal         func_1A0970
label_15c3b8:
    if (ctx->pc == 0x15C3B8u) {
        ctx->pc = 0x15C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3B4u;
        // 0x15c3b8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3BCu;
        goto label_15c3bc;
    }
    ctx->pc = 0x15C3B4u;
    SET_GPR_U32(ctx, 31, 0x15C3BCu);
    ctx->pc = 0x15C3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C3B4u;
    // 0x15c3b8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15C3B4u, 0x15C3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C3BCu;
label_15c3bc:
    // 0x15c3bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15c3c0:
    // 0x15c3c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c3c4:
    // 0x15c3c4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15c3c8:
    // 0x15c3c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c3c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c3cc:
    // 0x15c3cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c3d0:
    // 0x15c3d0: 0x60f809  jalr        $v1
label_15c3d4:
    if (ctx->pc == 0x15C3D4u) {
        ctx->pc = 0x15C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3D0u;
        // 0x15c3d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3D8u;
        goto label_15c3d8;
    }
    ctx->pc = 0x15C3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C3D8u);
        ctx->pc = 0x15C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3D0u;
        // 0x15c3d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C3D0u, 0x15C3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C3D8u;
label_15c3d8:
    // 0x15c3d8: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15c3d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15c3dc:
    // 0x15c3dc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15c3e0:
    if (ctx->pc == 0x15C3E0u) {
        ctx->pc = 0x15C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3DCu;
        // 0x15c3e0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3E4u;
        goto label_15c3e4;
    }
    ctx->pc = 0x15C3DCu;
    {
        const bool branch_taken_0x15c3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3DCu;
        // 0x15c3e0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3dc) {
            ctx->pc = 0x15C498u;
            return;
        }
    }
    ctx->pc = 0x15C3E4u;
label_15c3e4:
    // 0x15c3e4: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15c3e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15c3e8:
    // 0x15c3e8: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15c3e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15c3ec:
    // 0x15c3ec: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15c3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15c3f0:
    // 0x15c3f0: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15c3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15c3f4:
    // 0x15c3f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15c3f8:
    // 0x15c3f8: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15c3fc:
    // 0x15c3fc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15c400:
    // 0x15c400: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15c400u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15c404:
    // 0x15c404: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15c404u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15c408:
    // 0x15c408: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15c40c:
    // 0x15c40c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15c410:
    // 0x15c410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15c410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15c414:
    // 0x15c414: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15c414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15c418:
    // 0x15c418: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15c418u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15c41c:
    // 0x15c41c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c41cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15c420:
    // 0x15c420: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15c420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15c424:
    // 0x15c424: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15c424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15c428:
    // 0x15c428: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15c428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15c42c:
    // 0x15c42c: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15c42cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15c430:
    // 0x15c430: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15c430u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15c434:
    // 0x15c434: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15c434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15c438:
    // 0x15c438: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15c438u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15c43c:
    // 0x15c43c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15c43cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15c440:
    // 0x15c440: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15c440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15c444:
    // 0x15c444: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15c444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15c448:
    // 0x15c448: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15c448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15c44c:
    // 0x15c44c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15c44cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15c450:
    // 0x15c450: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15c450u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15c454:
    // 0x15c454: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15c454u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15c458:
    // 0x15c458: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15c458u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15c45c:
    // 0x15c45c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15c45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15c460:
    // 0x15c460: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15c460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15c464:
    // 0x15c464: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15c464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c468:
    // 0x15c468: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15c468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15c46c:
    // 0x15c46c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15c46cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15c470:
    // 0x15c470: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15c470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15c474:
    // 0x15c474: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15c474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15c478:
    // 0x15c478: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15c478u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15c47c:
    // 0x15c47c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15c47cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15c480:
    // 0x15c480: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15c480u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15c484:
    // 0x15c484: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15c484u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15c488:
    // 0x15c488: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15c488u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15c48c:
    // 0x15c48c: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15c48cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15c490:
    // 0x15c490: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15c490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15c494:
    // 0x15c494: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15c494u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15c498u;
}
