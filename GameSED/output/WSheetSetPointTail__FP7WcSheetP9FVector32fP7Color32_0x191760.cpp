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

// Function: WSheetSetPointTail__FP7WcSheetP9FVector32fP7Color32
// Address: 0x191760 - 0x1918ec
void WSheetSetPointTail__FP7WcSheetP9FVector32fP7Color32_0x191760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSheetSetPointTail__FP7WcSheetP9FVector32fP7Color32_0x191760");
#endif

    switch (ctx->pc) {
        case 0x1917b4u: goto label_1917b4;
        case 0x1917d4u: goto label_1917d4;
        case 0x1917e0u: goto label_1917e0;
        case 0x1917f8u: goto label_1917f8;
        case 0x191898u: goto label_191898;
        default: break;
    }

    ctx->pc = 0x191760u;

    // 0x191760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x191760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x191764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x191764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x191768: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x191768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19176c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19176cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191770: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x191770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x191774: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x191774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191778: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x191778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x19177c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x19177cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191780: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x191780u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x191784: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x191784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x191788: 0x263001d0  addiu       $s0, $s1, 0x1D0
    ctx->pc = 0x191788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    // 0x19178c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19178cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x191790: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x191790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x191794: 0x14a00028  bnez        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x191794u;
    {
        const bool branch_taken_0x191794 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x191798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191794u;
        // 0x191798: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191794) {
            ctx->pc = 0x191838u;
            goto label_191838;
        }
    }
    ctx->pc = 0x19179Cu;
    // 0x19179c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x19179cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917a0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1917A0u;
    {
        const bool branch_taken_0x1917a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917A0u;
        // 0x1917a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917a0) {
            ctx->pc = 0x1917ACu;
            goto label_1917ac;
        }
    }
    ctx->pc = 0x1917A8u;
    // 0x1917a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1917a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1917ac:
    // 0x1917ac: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1917ACu;
    SET_GPR_U32(ctx, 31, 0x1917B4u);
    ctx->pc = 0x1917B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917ACu;
    // 0x1917b0: 0x240507f0  addiu       $a1, $zero, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1917ACu, 0x1917B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917B4u;
label_1917b4:
    // 0x1917b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1917b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917b8: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1917B8u;
    {
        const bool branch_taken_0x1917b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1917b8) {
            ctx->pc = 0x1917BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1917B8u;
            // 0x1917bc: 0xaca007e0  sw          $zero, 0x7E0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1917E8u;
            goto label_1917e8;
        }
    }
    ctx->pc = 0x1917C0u;
    // 0x1917c0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1917c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1917c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1917c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917c8: 0x24a581b0  addiu       $a1, $a1, -0x7E50
    ctx->pc = 0x1917c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934960));
    // 0x1917cc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1917CCu;
    SET_GPR_U32(ctx, 31, 0x1917D4u);
    ctx->pc = 0x1917D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917CCu;
    // 0x1917d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1917CCu, 0x1917D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917D4u;
label_1917d4:
    // 0x1917d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1917D4u;
    {
        const bool branch_taken_0x1917d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917D4u;
        // 0x1917d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917d4) {
            ctx->pc = 0x191834u;
            goto label_191834;
        }
    }
    ctx->pc = 0x1917DCu;
    // 0x1917dc: 0x0  nop
    ctx->pc = 0x1917dcu;
    // NOP
label_1917e0:
    // 0x1917e0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1917E0u;
    {
        const bool branch_taken_0x1917e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917E0u;
        // 0x1917e4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917e0) {
            ctx->pc = 0x1918C0u;
            goto label_1918c0;
        }
    }
    ctx->pc = 0x1917E8u;
label_1917e8:
    // 0x1917e8: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1917e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1917ec: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1917ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1917f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917f4: 0x0  nop
    ctx->pc = 0x1917f4u;
    // NOP
label_1917f8:
    // 0x1917f8: 0x54800002  bnel        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1917F8u;
    {
        const bool branch_taken_0x1917f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1917f8) {
            ctx->pc = 0x1917FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1917F8u;
            // 0x1917fc: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191804u;
            goto label_191804;
        }
    }
    ctx->pc = 0x191800u;
    // 0x191800: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x191800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_191804:
    // 0x191804: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x191804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x191808: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x191808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19180c: 0x2882003f  slti        $v0, $a0, 0x3F
    ctx->pc = 0x19180cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x191810: 0x0  nop
    ctx->pc = 0x191810u;
    // NOP
    // 0x191814: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x191814u;
    {
        const bool branch_taken_0x191814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191814u;
        // 0x191818: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191814) {
            ctx->pc = 0x1917F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1917f8;
        }
    }
    ctx->pc = 0x19181Cu;
    // 0x19181c: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x19181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x191820: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x191820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x191824: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x191824u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x191828: 0xaca307e0  sw          $v1, 0x7E0($a1)
    ctx->pc = 0x191828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 3));
    // 0x19182c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x19182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x191830: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x191830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_191834:
    // 0x191834: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191838:
    // 0x191838: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x191838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19183c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x19183cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x191840: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x191840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x191844: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x191844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x191848: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19184c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19184cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x191850: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x191850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x191854: 0x8c82d630  lw          $v0, -0x29D0($a0)
    ctx->pc = 0x191854u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x191858: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x191858u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x19185c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19185cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x191860: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x191860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x191864: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x191864u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x191868: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x191868u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19186c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x19186cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x191870: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x191870u;
    {
        const bool branch_taken_0x191870 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x191874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191870u;
        // 0x191874: 0xe4b40014  swc1        $f20, 0x14($a1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x191870) {
            ctx->pc = 0x191880u;
            goto label_191880;
        }
    }
    ctx->pc = 0x191878u;
    // 0x191878: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x191878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x19187c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19187cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_191880:
    // 0x191880: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x191880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x191884: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191884u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191888: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x191888u;
    {
        const bool branch_taken_0x191888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191888u;
        // 0x19188c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191888) {
            ctx->pc = 0x1918BCu;
            goto label_1918bc;
        }
    }
    ctx->pc = 0x191890u;
    // 0x191890: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x191890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191894: 0x0  nop
    ctx->pc = 0x191894u;
    // NOP
label_191898:
    // 0x191898: 0x1046ffd1  beq         $v0, $a2, . + 4 + (-0x2F << 2)
    ctx->pc = 0x191898u;
    {
        const bool branch_taken_0x191898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x19189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191898u;
        // 0x19189c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191898) {
            ctx->pc = 0x1917E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1917e0;
        }
    }
    ctx->pc = 0x1918A0u;
    // 0x1918a0: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x1918a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1918a4: 0x0  nop
    ctx->pc = 0x1918a4u;
    // NOP
    // 0x1918a8: 0x0  nop
    ctx->pc = 0x1918a8u;
    // NOP
    // 0x1918ac: 0x0  nop
    ctx->pc = 0x1918acu;
    // NOP
    // 0x1918b0: 0x0  nop
    ctx->pc = 0x1918b0u;
    // NOP
    // 0x1918b4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1918B4u;
    {
        const bool branch_taken_0x1918b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1918B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918B4u;
        // 0x1918b8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918b4) {
            ctx->pc = 0x191898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191898;
        }
    }
    ctx->pc = 0x1918BCu;
label_1918bc:
    // 0x1918bc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1918bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1918c0:
    // 0x1918c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1918c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1918c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1918c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1918c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1918c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1918cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1918ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1918d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1918d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1918d4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1918d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1918d8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1918d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1918dc: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x1918dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x1918e0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1918e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1918e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1918E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1918E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918E4u;
        // 0x1918e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1918E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1918ECu;
}
