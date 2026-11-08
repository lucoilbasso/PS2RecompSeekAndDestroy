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

// Function: entry_0016c51c
// Address: 0x16c51c - 0x16c5e8
void entry_0016c51c_0x16c51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c51c_0x16c51c");
#endif

    switch (ctx->pc) {
        case 0x16c530u: goto label_16c530;
        case 0x16c538u: goto label_16c538;
        case 0x16c550u: goto label_16c550;
        case 0x16c5b4u: goto label_16c5b4;
        case 0x16c5ccu: goto label_16c5cc;
        case 0x16c5d4u: goto label_16c5d4;
        default: break;
    }

    ctx->pc = 0x16c51cu;

label_16c51c:
    // 0x16c51c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x16c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_16c520:
    // 0x16c520: 0x24041306  addiu       $a0, $zero, 0x1306
    ctx->pc = 0x16c520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4870));
label_16c524:
    // 0x16c524: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x16c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
label_16c528:
    // 0x16c528: 0xc0682b2  jal         func_1A0AC8
label_16c52c:
    if (ctx->pc == 0x16C52Cu) {
        ctx->pc = 0x16C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C528u;
        // 0x16c52c: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C530u;
        goto label_16c530;
    }
    ctx->pc = 0x16C528u;
    SET_GPR_U32(ctx, 31, 0x16C530u);
    ctx->pc = 0x16C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C528u;
    // 0x16c52c: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x16C528u, 0x16C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C530u;
label_16c530:
    // 0x16c530: 0xc0682b6  jal         func_1A0AD8
label_16c534:
    if (ctx->pc == 0x16C534u) {
        ctx->pc = 0x16C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C530u;
        // 0x16c534: 0x240402c0  addiu       $a0, $zero, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C538u;
        goto label_16c538;
    }
    ctx->pc = 0x16C530u;
    SET_GPR_U32(ctx, 31, 0x16C538u);
    ctx->pc = 0x16C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C530u;
    // 0x16c534: 0x240402c0  addiu       $a0, $zero, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x16C530u, 0x16C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C538u;
label_16c538:
    // 0x16c538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16c538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c53c:
    // 0x16c53c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_16c540:
    // 0x16c540: 0x2442f750  addiu       $v0, $v0, -0x8B0
    ctx->pc = 0x16c540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965072));
label_16c544:
    // 0x16c544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c548:
    // 0x16c548: 0xc061258  jal         func_184960
label_16c54c:
    if (ctx->pc == 0x16C54Cu) {
        ctx->pc = 0x16C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C548u;
        // 0x16c54c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C550u;
        goto label_16c550;
    }
    ctx->pc = 0x16C548u;
    SET_GPR_U32(ctx, 31, 0x16C550u);
    ctx->pc = 0x16C54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C548u;
    // 0x16c54c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x16C548u, 0x16C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C550u;
label_16c550:
    // 0x16c550: 0x24020306  addiu       $v0, $zero, 0x306
    ctx->pc = 0x16c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_16c554:
    // 0x16c554: 0xc780846c  lwc1        $f0, -0x7B94($gp)
    ctx->pc = 0x16c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c558:
    // 0x16c558: 0x26030230  addiu       $v1, $s0, 0x230
    ctx->pc = 0x16c558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_16c55c:
    // 0x16c55c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16c55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_16c560:
    // 0x16c560: 0xe600020c  swc1        $f0, 0x20C($s0)
    ctx->pc = 0x16c560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
label_16c564:
    // 0x16c564: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x16c564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
label_16c568:
    // 0x16c568: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x16c568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_16c56c:
    // 0x16c56c: 0xae120154  sw          $s2, 0x154($s0)
    ctx->pc = 0x16c56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 18));
label_16c570:
    // 0x16c570: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x16c570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_16c574:
    // 0x16c574: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x16c574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_16c578:
    // 0x16c578: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x16c578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_16c57c:
    // 0x16c57c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x16c57cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16c580:
    // 0x16c580: 0x26020240  addiu       $v0, $s0, 0x240
    ctx->pc = 0x16c580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_16c584:
    // 0x16c584: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16c584u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16c588:
    // 0x16c588: 0x26030290  addiu       $v1, $s0, 0x290
    ctx->pc = 0x16c588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_16c58c:
    // 0x16c58c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x16c58cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16c590:
    // 0x16c590: 0x260202a0  addiu       $v0, $s0, 0x2A0
    ctx->pc = 0x16c590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
label_16c594:
    // 0x16c594: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16c594u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16c598:
    // 0x16c598: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x16c598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16c59c:
    // 0x16c59c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x16c59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c5a0:
    // 0x16c5a0: 0x246300a8  addiu       $v1, $v1, 0xA8
    ctx->pc = 0x16c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 168));
label_16c5a4:
    // 0x16c5a4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x16c5a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_16c5a8:
    // 0x16c5a8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x16c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_16c5ac:
    // 0x16c5ac: 0xa0f809  jalr        $a1
label_16c5b0:
    if (ctx->pc == 0x16C5B0u) {
        ctx->pc = 0x16C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5ACu;
        // 0x16c5b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5B4u;
        goto label_16c5b4;
    }
    ctx->pc = 0x16C5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x16C5B4u);
        ctx->pc = 0x16C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5ACu;
        // 0x16c5b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C5ACu, 0x16C5B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C5B4u;
label_16c5b4:
    // 0x16c5b4: 0x24021306  addiu       $v0, $zero, 0x1306
    ctx->pc = 0x16c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4870));
label_16c5b8:
    // 0x16c5b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_16c5bc:
    // 0x16c5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c5c0:
    // 0x16c5c0: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x16c5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
label_16c5c4:
    // 0x16c5c4: 0xc06825c  jal         func_1A0970
label_16c5c8:
    if (ctx->pc == 0x16C5C8u) {
        ctx->pc = 0x16C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5C4u;
        // 0x16c5c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5CCu;
        goto label_16c5cc;
    }
    ctx->pc = 0x16C5C4u;
    SET_GPR_U32(ctx, 31, 0x16C5CCu);
    ctx->pc = 0x16C5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C5C4u;
    // 0x16c5c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x16C5C4u, 0x16C5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C5CCu;
label_16c5cc:
    // 0x16c5cc: 0xc06a26e  jal         func_1A89B8
label_16c5d0:
    if (ctx->pc == 0x16C5D0u) {
        ctx->pc = 0x16C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5CCu;
        // 0x16c5d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5D4u;
        goto label_16c5d4;
    }
    ctx->pc = 0x16C5CCu;
    SET_GPR_U32(ctx, 31, 0x16C5D4u);
    ctx->pc = 0x16C5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C5CCu;
    // 0x16c5d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16C5CCu, 0x16C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C5D4u;
label_16c5d4:
    // 0x16c5d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_16c5d8:
    if (ctx->pc == 0x16C5D8u) {
        ctx->pc = 0x16C5DCu;
        goto label_16c5dc;
    }
    ctx->pc = 0x16C5D4u;
    {
        const bool branch_taken_0x16c5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c5d4) {
            ctx->pc = 0x16C5E8u;
            return;
        }
    }
    ctx->pc = 0x16C5DCu;
label_16c5dc:
    // 0x16c5dc: 0x10000011  b           . + 4 + (0x11 << 2)
label_16c5e0:
    if (ctx->pc == 0x16C5E0u) {
        ctx->pc = 0x16C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5DCu;
        // 0x16c5e0: 0x8e4201b4  lw          $v0, 0x1B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5E4u;
        goto label_16c5e4;
    }
    ctx->pc = 0x16C5DCu;
    {
        const bool branch_taken_0x16c5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5DCu;
        // 0x16c5e0: 0x8e4201b4  lw          $v0, 0x1B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5dc) {
            ctx->pc = 0x16C624u;
            return;
        }
    }
    ctx->pc = 0x16C5E4u;
label_16c5e4:
    // 0x16c5e4: 0x0  nop
    ctx->pc = 0x16c5e4u;
    // NOP
    ctx->pc = 0x16c5e8u;
}
