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

// Function: entry_0016bf50
// Address: 0x16bf50 - 0x16c044
void entry_0016bf50_0x16bf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bf50_0x16bf50");
#endif

    switch (ctx->pc) {
        case 0x16bfb8u: goto label_16bfb8;
        case 0x16bfd8u: goto label_16bfd8;
        case 0x16c020u: goto label_16c020;
        case 0x16c040u: goto label_16c040;
        default: break;
    }

    ctx->pc = 0x16bf50u;

    // 0x16bf50: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x16bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x16bf54: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x16bf54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x16bf58: 0x2463a430  addiu       $v1, $v1, -0x5BD0
    ctx->pc = 0x16bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943792));
    // 0x16bf5c: 0x24c60160  addiu       $a2, $a2, 0x160
    ctx->pc = 0x16bf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 352));
    // 0x16bf60: 0x8c641400  lw          $a0, 0x1400($v1)
    ctx->pc = 0x16bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x16bf64: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x16bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x16bf68: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x16bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x16bf6c: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x16bf6cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16bf70: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16bf70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bf74: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x16bf74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16bf78: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x16bf78u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16bf7c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x16bf7cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x16bf80: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16bf80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16bf84: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16bf84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16bf88: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16bf88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16bf8c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16bf8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16bf90: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x16bf90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16bf94: 0x8c641400  lw          $a0, 0x1400($v1)
    ctx->pc = 0x16bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5120)));
    // 0x16bf98: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x16bf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16bf9c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x16bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x16bfa0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x16bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16bfa4: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x16bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x16bfa8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x16bfa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16bfac: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x16bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x16bfb0: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x16BFB0u;
    SET_GPR_U32(ctx, 31, 0x16BFB8u);
    ctx->pc = 0x16BFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFB0u;
    // 0x16bfb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x16BFB0u, 0x16BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFB8u;
label_16bfb8:
    // 0x16bfb8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x16BFB8u;
    {
        const bool branch_taken_0x16bfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFB8u;
        // 0x16bfbc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bfb8) {
            ctx->pc = 0x16C0E4u;
            return;
        }
    }
    ctx->pc = 0x16BFC0u;
    // 0x16bfc0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16bfc4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x16bfc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16bfc8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BFC8u;
    {
        const bool branch_taken_0x16bfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFC8u;
        // 0x16bfcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bfc8) {
            ctx->pc = 0x16BFDCu;
            goto label_16bfdc;
        }
    }
    ctx->pc = 0x16BFD0u;
    // 0x16bfd0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16BFD0u;
    SET_GPR_U32(ctx, 31, 0x16BFD8u);
    ctx->pc = 0x16BFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFD0u;
    // 0x16bfd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16BFD0u, 0x16BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFD8u;
label_16bfd8:
    // 0x16bfd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16bfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16bfdc:
    // 0x16bfdc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x16bfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x16bfe0: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x16bfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x16bfe4: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x16bfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x16bfe8: 0x24c6a430  addiu       $a2, $a2, -0x5BD0
    ctx->pc = 0x16bfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943792));
    // 0x16bfec: 0x24a50160  addiu       $a1, $a1, 0x160
    ctx->pc = 0x16bfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
    // 0x16bff0: 0x8cc41400  lw          $a0, 0x1400($a2)
    ctx->pc = 0x16bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x16bff4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x16bff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16bff8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x16bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x16bffc: 0x8cc31400  lw          $v1, 0x1400($a2)
    ctx->pc = 0x16bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x16c000: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x16c000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x16c004: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x16c004u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x16c008: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x16c008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x16c00c: 0x8cc21400  lw          $v0, 0x1400($a2)
    ctx->pc = 0x16c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x16c010: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x16C010u;
    {
        const bool branch_taken_0x16c010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C010u;
        // 0x16c014: 0xac440044  sw          $a0, 0x44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c010) {
            ctx->pc = 0x16C0E0u;
            return;
        }
    }
    ctx->pc = 0x16C018u;
    // 0x16c018: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x16C018u;
    SET_GPR_U32(ctx, 31, 0x16C020u);
    ctx->pc = 0x16C01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C018u;
    // 0x16c01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C018u, 0x16C020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C020u;
label_16c020:
    // 0x16c020: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x16c020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x16c024: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16c024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c028: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16c028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16c02c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c030: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C030u;
    {
        const bool branch_taken_0x16c030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x16c030) {
            ctx->pc = 0x16C034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C030u;
            // 0x16c034: 0x111823  negu        $v1, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C044u;
            return;
        }
    }
    ctx->pc = 0x16C038u;
    // 0x16c038: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x16C038u;
    SET_GPR_U32(ctx, 31, 0x16C040u);
    ctx->pc = 0x16C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C038u;
    // 0x16c03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C038u, 0x16C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C040u;
label_16c040:
    // 0x16c040: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16c040u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16c044u;
}
