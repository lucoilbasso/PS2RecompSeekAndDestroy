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

// Function: WSheetSetPointRoot__FP7WcSheetP9FVector32fP7Color32
// Address: 0x191610 - 0x19175c
void WSheetSetPointRoot__FP7WcSheetP9FVector32fP7Color32_0x191610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSheetSetPointRoot__FP7WcSheetP9FVector32fP7Color32_0x191610");
#endif

    switch (ctx->pc) {
        case 0x191664u: goto label_191664;
        case 0x191684u: goto label_191684;
        case 0x1916a0u: goto label_1916a0;
        default: break;
    }

    ctx->pc = 0x191610u;

    // 0x191610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x191610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x191614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x191614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x191618: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x191618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19161c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19161cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191620: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x191620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x191624: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x191624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191628: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x191628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x19162c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x19162cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191630: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x191630u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x191634: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x191634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x191638: 0x263001d0  addiu       $s0, $s1, 0x1D0
    ctx->pc = 0x191638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    // 0x19163c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x191640: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x191640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x191644: 0x14a00026  bnez        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x191644u;
    {
        const bool branch_taken_0x191644 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x191648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191644u;
        // 0x191648: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191644) {
            ctx->pc = 0x1916E0u;
            goto label_1916e0;
        }
    }
    ctx->pc = 0x19164Cu;
    // 0x19164c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x19164cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191650: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x191650u;
    {
        const bool branch_taken_0x191650 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x191654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191650u;
        // 0x191654: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191650) {
            ctx->pc = 0x19165Cu;
            goto label_19165c;
        }
    }
    ctx->pc = 0x191658u;
    // 0x191658: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x191658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19165c:
    // 0x19165c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x19165Cu;
    SET_GPR_U32(ctx, 31, 0x191664u);
    ctx->pc = 0x191660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19165Cu;
    // 0x191660: 0x240507f0  addiu       $a1, $zero, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x19165Cu, 0x191664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191664u;
label_191664:
    // 0x191664: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191668: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x191668u;
    {
        const bool branch_taken_0x191668 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x191668) {
            ctx->pc = 0x19166Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191668u;
            // 0x19166c: 0xaca007e0  sw          $zero, 0x7E0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191690u;
            goto label_191690;
        }
    }
    ctx->pc = 0x191670u;
    // 0x191670: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x191670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x191674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x191674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191678: 0x24a581b0  addiu       $a1, $a1, -0x7E50
    ctx->pc = 0x191678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934960));
    // 0x19167c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x19167Cu;
    SET_GPR_U32(ctx, 31, 0x191684u);
    ctx->pc = 0x191680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19167Cu;
    // 0x191680: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x19167Cu, 0x191684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191684u;
label_191684:
    // 0x191684: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x191684u;
    {
        const bool branch_taken_0x191684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191684u;
        // 0x191688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191684) {
            ctx->pc = 0x1916DCu;
            goto label_1916dc;
        }
    }
    ctx->pc = 0x19168Cu;
    // 0x19168c: 0x0  nop
    ctx->pc = 0x19168cu;
    // NOP
label_191690:
    // 0x191690: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x191690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x191694: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x191694u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191698: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x191698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19169c: 0x0  nop
    ctx->pc = 0x19169cu;
    // NOP
label_1916a0:
    // 0x1916a0: 0x54800002  bnel        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1916A0u;
    {
        const bool branch_taken_0x1916a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1916a0) {
            ctx->pc = 0x1916A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1916A0u;
            // 0x1916a4: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1916ACu;
            goto label_1916ac;
        }
    }
    ctx->pc = 0x1916A8u;
    // 0x1916a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1916a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1916ac:
    // 0x1916ac: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x1916acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x1916b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1916b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1916b4: 0x2882003f  slti        $v0, $a0, 0x3F
    ctx->pc = 0x1916b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x1916b8: 0x0  nop
    ctx->pc = 0x1916b8u;
    // NOP
    // 0x1916bc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1916BCu;
    {
        const bool branch_taken_0x1916bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1916C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916BCu;
        // 0x1916c0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1916bc) {
            ctx->pc = 0x1916A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1916a0;
        }
    }
    ctx->pc = 0x1916C4u;
    // 0x1916c4: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x1916c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x1916c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1916c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1916cc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1916ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1916d0: 0xaca307e0  sw          $v1, 0x7E0($a1)
    ctx->pc = 0x1916d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 3));
    // 0x1916d4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1916d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1916d8: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1916d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_1916dc:
    // 0x1916dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1916dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1916e0:
    // 0x1916e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1916e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1916e4: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1916e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1916e8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x1916e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1916ec: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x1916ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1916f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1916f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1916f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1916f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1916f8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1916f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1916fc: 0x8c82d630  lw          $v0, -0x29D0($a0)
    ctx->pc = 0x1916fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x191700: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x191700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x191704: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x191704u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x191708: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x191708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x19170c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x19170cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x191710: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x191710u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x191714: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x191714u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x191718: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x191718u;
    {
        const bool branch_taken_0x191718 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191718u;
        // 0x19171c: 0xe4b40014  swc1        $f20, 0x14($a1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x191718) {
            ctx->pc = 0x191728u;
            goto label_191728;
        }
    }
    ctx->pc = 0x191720u;
    // 0x191720: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x191720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x191724: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x191724u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_191728:
    // 0x191728: 0x8e230158  lw          $v1, 0x158($s1)
    ctx->pc = 0x191728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x19172c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19172cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x191730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191734: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x191734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x191738: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x191738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19173c: 0xae250158  sw          $a1, 0x158($s1)
    ctx->pc = 0x19173cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 5));
    // 0x191740: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x191740u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x191744: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x191744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x191748: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x191748u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19174c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19174cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x191750: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x191750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x191754: 0x3e00008  jr          $ra
    ctx->pc = 0x191754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191754u;
        // 0x191758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19175Cu;
}
