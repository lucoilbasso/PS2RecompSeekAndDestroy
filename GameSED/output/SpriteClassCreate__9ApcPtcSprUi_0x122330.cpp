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

// Function: SpriteClassCreate__9ApcPtcSprUi
// Address: 0x122330 - 0x122418
void SpriteClassCreate__9ApcPtcSprUi_0x122330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpriteClassCreate__9ApcPtcSprUi_0x122330");
#endif

    switch (ctx->pc) {
        case 0x122330u: goto label_122330;
        case 0x122334u: goto label_122334;
        case 0x122338u: goto label_122338;
        case 0x12233cu: goto label_12233c;
        case 0x122340u: goto label_122340;
        case 0x122344u: goto label_122344;
        case 0x122348u: goto label_122348;
        case 0x12234cu: goto label_12234c;
        case 0x122350u: goto label_122350;
        case 0x122354u: goto label_122354;
        case 0x122358u: goto label_122358;
        case 0x12235cu: goto label_12235c;
        case 0x122360u: goto label_122360;
        case 0x122364u: goto label_122364;
        case 0x122368u: goto label_122368;
        case 0x12236cu: goto label_12236c;
        case 0x122370u: goto label_122370;
        case 0x122374u: goto label_122374;
        case 0x122378u: goto label_122378;
        case 0x12237cu: goto label_12237c;
        case 0x122380u: goto label_122380;
        case 0x122384u: goto label_122384;
        case 0x122388u: goto label_122388;
        case 0x12238cu: goto label_12238c;
        case 0x122390u: goto label_122390;
        case 0x122394u: goto label_122394;
        case 0x122398u: goto label_122398;
        case 0x12239cu: goto label_12239c;
        case 0x1223a0u: goto label_1223a0;
        case 0x1223a4u: goto label_1223a4;
        case 0x1223a8u: goto label_1223a8;
        case 0x1223acu: goto label_1223ac;
        case 0x1223b0u: goto label_1223b0;
        case 0x1223b4u: goto label_1223b4;
        case 0x1223b8u: goto label_1223b8;
        case 0x1223bcu: goto label_1223bc;
        case 0x1223c0u: goto label_1223c0;
        case 0x1223c4u: goto label_1223c4;
        case 0x1223c8u: goto label_1223c8;
        case 0x1223ccu: goto label_1223cc;
        case 0x1223d0u: goto label_1223d0;
        case 0x1223d4u: goto label_1223d4;
        case 0x1223d8u: goto label_1223d8;
        case 0x1223dcu: goto label_1223dc;
        case 0x1223e0u: goto label_1223e0;
        case 0x1223e4u: goto label_1223e4;
        case 0x1223e8u: goto label_1223e8;
        case 0x1223ecu: goto label_1223ec;
        case 0x1223f0u: goto label_1223f0;
        case 0x1223f4u: goto label_1223f4;
        case 0x1223f8u: goto label_1223f8;
        case 0x1223fcu: goto label_1223fc;
        case 0x122400u: goto label_122400;
        case 0x122404u: goto label_122404;
        case 0x122408u: goto label_122408;
        case 0x12240cu: goto label_12240c;
        case 0x122410u: goto label_122410;
        case 0x122414u: goto label_122414;
        default: break;
    }

    ctx->pc = 0x122330u;

label_122330:
    // 0x122330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x122330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_122334:
    // 0x122334: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x122334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_122338:
    // 0x122338: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12233c:
    // 0x12233c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12233cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_122340:
    // 0x122340: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x122340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_122344:
    // 0x122344: 0xc0682b2  jal         func_1A0AC8
label_122348:
    if (ctx->pc == 0x122348u) {
        ctx->pc = 0x122348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122344u;
        // 0x122348: 0x240401f6  addiu       $a0, $zero, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12234Cu;
        goto label_12234c;
    }
    ctx->pc = 0x122344u;
    SET_GPR_U32(ctx, 31, 0x12234Cu);
    ctx->pc = 0x122348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122344u;
    // 0x122348: 0x240401f6  addiu       $a0, $zero, 0x1F6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x122344u, 0x12234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12234Cu;
label_12234c:
    // 0x12234c: 0xc0682b6  jal         func_1A0AD8
label_122350:
    if (ctx->pc == 0x122350u) {
        ctx->pc = 0x122350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12234Cu;
        // 0x122350: 0x24040170  addiu       $a0, $zero, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122354u;
        goto label_122354;
    }
    ctx->pc = 0x12234Cu;
    SET_GPR_U32(ctx, 31, 0x122354u);
    ctx->pc = 0x122350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12234Cu;
    // 0x122350: 0x24040170  addiu       $a0, $zero, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x12234Cu, 0x122354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122354u;
label_122354:
    // 0x122354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x122354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122358:
    // 0x122358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12235c:
    // 0x12235c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x12235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_122360:
    // 0x122360: 0x2442e978  addiu       $v0, $v0, -0x1688
    ctx->pc = 0x122360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961528));
label_122364:
    // 0x122364: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x122364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
label_122368:
    // 0x122368: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x122368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
label_12236c:
    // 0x12236c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12236cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122370:
    // 0x122370: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x122370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_122374:
    // 0x122374: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x122374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_122378:
    // 0x122378: 0x26020168  addiu       $v0, $s0, 0x168
    ctx->pc = 0x122378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
label_12237c:
    // 0x12237c: 0x0  nop
    ctx->pc = 0x12237cu;
    // NOP
label_122380:
    // 0x122380: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x122380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_122384:
    // 0x122384: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x122384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
label_122388:
    // 0x122388: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x122388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_12238c:
    // 0x12238c: 0x0  nop
    ctx->pc = 0x12238cu;
    // NOP
label_122390:
    // 0x122390: 0x0  nop
    ctx->pc = 0x122390u;
    // NOP
label_122394:
    // 0x122394: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
label_122398:
    if (ctx->pc == 0x122398u) {
        ctx->pc = 0x122398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122394u;
        // 0x122398: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12239Cu;
        goto label_12239c;
    }
    ctx->pc = 0x122394u;
    {
        const bool branch_taken_0x122394 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x122398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122394u;
        // 0x122398: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122394) {
            ctx->pc = 0x122380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122380;
        }
    }
    ctx->pc = 0x12239Cu;
label_12239c:
    // 0x12239c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_1223a0:
    if (ctx->pc == 0x1223A0u) {
        ctx->pc = 0x1223A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12239Cu;
        // 0x1223a0: 0xac800150  sw          $zero, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223A4u;
        goto label_1223a4;
    }
    ctx->pc = 0x12239Cu;
    {
        const bool branch_taken_0x12239c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1223A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12239Cu;
        // 0x1223a0: 0xac800150  sw          $zero, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12239c) {
            ctx->pc = 0x1223C0u;
            goto label_1223c0;
        }
    }
    ctx->pc = 0x1223A4u;
label_1223a4:
    // 0x1223a4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1223a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1223a8:
    // 0x1223a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1223a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1223ac:
    // 0x1223ac: 0x24a55be8  addiu       $a1, $a1, 0x5BE8
    ctx->pc = 0x1223acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23528));
label_1223b0:
    // 0x1223b0: 0xc068186  jal         func_1A0618
label_1223b4:
    if (ctx->pc == 0x1223B4u) {
        ctx->pc = 0x1223B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223B0u;
        // 0x1223b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223B8u;
        goto label_1223b8;
    }
    ctx->pc = 0x1223B0u;
    SET_GPR_U32(ctx, 31, 0x1223B8u);
    ctx->pc = 0x1223B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223B0u;
    // 0x1223b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1223B0u, 0x1223B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223B8u;
label_1223b8:
    // 0x1223b8: 0x10000012  b           . + 4 + (0x12 << 2)
label_1223bc:
    if (ctx->pc == 0x1223BCu) {
        ctx->pc = 0x1223BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223B8u;
        // 0x1223bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223C0u;
        goto label_1223c0;
    }
    ctx->pc = 0x1223B8u;
    {
        const bool branch_taken_0x1223b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1223BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223B8u;
        // 0x1223bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1223b8) {
            ctx->pc = 0x122404u;
            goto label_122404;
        }
    }
    ctx->pc = 0x1223C0u;
label_1223c0:
    // 0x1223c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1223c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1223c4:
    // 0x1223c4: 0xc04885a  jal         func_122168
label_1223c8:
    if (ctx->pc == 0x1223C8u) {
        ctx->pc = 0x1223C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223C4u;
        // 0x1223c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223CCu;
        goto label_1223cc;
    }
    ctx->pc = 0x1223C4u;
    SET_GPR_U32(ctx, 31, 0x1223CCu);
    ctx->pc = 0x1223C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223C4u;
    // 0x1223c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122168u, 0x1223C4u, 0x1223CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223CCu;
label_1223cc:
    // 0x1223cc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1223d0:
    if (ctx->pc == 0x1223D0u) {
        ctx->pc = 0x1223D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223CCu;
        // 0x1223d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223D4u;
        goto label_1223d4;
    }
    ctx->pc = 0x1223CCu;
    {
        const bool branch_taken_0x1223cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1223cc) {
            ctx->pc = 0x1223D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1223CCu;
            // 0x1223d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1223F8u;
            goto label_1223f8;
        }
    }
    ctx->pc = 0x1223D4u;
label_1223d4:
    // 0x1223d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1223d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1223d8:
    // 0x1223d8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1223d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1223dc:
    // 0x1223dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1223dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1223e0:
    // 0x1223e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1223e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1223e4:
    // 0x1223e4: 0x60f809  jalr        $v1
label_1223e8:
    if (ctx->pc == 0x1223E8u) {
        ctx->pc = 0x1223E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223E4u;
        // 0x1223e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223ECu;
        goto label_1223ec;
    }
    ctx->pc = 0x1223E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1223ECu);
        ctx->pc = 0x1223E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223E4u;
        // 0x1223e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1223E4u, 0x1223ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1223ECu;
label_1223ec:
    // 0x1223ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_1223f0:
    if (ctx->pc == 0x1223F0u) {
        ctx->pc = 0x1223F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223ECu;
        // 0x1223f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223F4u;
        goto label_1223f4;
    }
    ctx->pc = 0x1223ECu;
    {
        const bool branch_taken_0x1223ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1223F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223ECu;
        // 0x1223f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1223ec) {
            ctx->pc = 0x122404u;
            goto label_122404;
        }
    }
    ctx->pc = 0x1223F4u;
label_1223f4:
    // 0x1223f4: 0x0  nop
    ctx->pc = 0x1223f4u;
    // NOP
label_1223f8:
    // 0x1223f8: 0xc06825c  jal         func_1A0970
label_1223fc:
    if (ctx->pc == 0x1223FCu) {
        ctx->pc = 0x1223FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223F8u;
        // 0x1223fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122400u;
        goto label_122400;
    }
    ctx->pc = 0x1223F8u;
    SET_GPR_U32(ctx, 31, 0x122400u);
    ctx->pc = 0x1223FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223F8u;
    // 0x1223fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1223F8u, 0x122400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122400u;
label_122400:
    // 0x122400: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x122400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122404:
    // 0x122404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122408:
    // 0x122408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x122408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12240c:
    // 0x12240c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12240cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_122410:
    // 0x122410: 0x3e00008  jr          $ra
label_122414:
    if (ctx->pc == 0x122414u) {
        ctx->pc = 0x122414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122410u;
        // 0x122414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122418u;
        goto label_fallthrough_0x122410;
    }
    ctx->pc = 0x122410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122410u;
        // 0x122414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x122410:
    ctx->pc = 0x122418u;
}
