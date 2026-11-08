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

// Function: WSpriteChangeScaling__FP8WcSpritei
// Address: 0x18a5c8 - 0x18a688
void WSpriteChangeScaling__FP8WcSpritei_0x18a5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSpriteChangeScaling__FP8WcSpritei_0x18a5c8");
#endif

    switch (ctx->pc) {
        case 0x18a63cu: goto label_18a63c;
        case 0x18a674u: goto label_18a674;
        default: break;
    }

    ctx->pc = 0x18a5c8u;

    // 0x18a5c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a5cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18a5d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18a5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18a5d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18a5d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a5e0: 0x96020200  lhu         $v0, 0x200($s0)
    ctx->pc = 0x18a5e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18a5e4: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x18a5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x18a5e8: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x18a5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x18a5ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A5ECu;
    {
        const bool branch_taken_0x18a5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5ECu;
        // 0x18a5f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5ec) {
            ctx->pc = 0x18A610u;
            goto label_18a610;
        }
    }
    ctx->pc = 0x18A5F4u;
    // 0x18a5f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a5f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a5f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18a5f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18a600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a604: 0x8061372  j           func_184DC8
    ctx->pc = 0x18A604u;
    ctx->pc = 0x18A608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A604u;
    // 0x18a608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184DC8u;
    Magnify__8WcEntityiib_0x184dc8(rdram, ctx, runtime); return;
    ctx->pc = 0x18A60Cu;
    // 0x18a60c: 0x0  nop
    ctx->pc = 0x18a60cu;
    // NOP
label_18a610:
    // 0x18a610: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x18A610u;
    {
        const bool branch_taken_0x18a610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a610) {
            ctx->pc = 0x18A614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A610u;
            // 0x18a614: 0x96020200  lhu         $v0, 0x200($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A640u;
            goto label_18a640;
        }
    }
    ctx->pc = 0x18A618u;
    // 0x18a618: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x18a618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a61c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18a61cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18a620: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x18a620u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18a624: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x18a624u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a628: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x18a628u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a62c: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x18a62cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x18a630: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18a630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a634: 0xc061372  jal         func_184DC8
    ctx->pc = 0x18A634u;
    SET_GPR_U32(ctx, 31, 0x18A63Cu);
    ctx->pc = 0x18A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A634u;
    // 0x18a638: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184DC8u, 0x18A634u, 0x18A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A63Cu;
label_18a63c:
    // 0x18a63c: 0x96020200  lhu         $v0, 0x200($s0)
    ctx->pc = 0x18a63cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
label_18a640:
    // 0x18a640: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x18a640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x18a644: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x18A644u;
    {
        const bool branch_taken_0x18a644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a644) {
            ctx->pc = 0x18A648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A644u;
            // 0x18a648: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A678u;
            goto label_18a678;
        }
    }
    ctx->pc = 0x18A64Cu;
    // 0x18a64c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x18a64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a650: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18a650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18a654: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x18a654u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18a658: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x18a658u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a65c: 0x48262800  qmfc2.ni    $a2, $vf5
    ctx->pc = 0x18a65cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a660: 0x63000  sll         $a2, $a2, 0
    ctx->pc = 0x18a660u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
    // 0x18a664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a668: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18a668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a66c: 0xc061372  jal         func_184DC8
    ctx->pc = 0x18A66Cu;
    SET_GPR_U32(ctx, 31, 0x18A674u);
    ctx->pc = 0x18A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A66Cu;
    // 0x18a670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184DC8u, 0x18A66Cu, 0x18A674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A674u;
label_18a674:
    // 0x18a674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a678:
    // 0x18a678: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18a67c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a680: 0x3e00008  jr          $ra
    ctx->pc = 0x18A680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A680u;
        // 0x18a684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A688u;
}
