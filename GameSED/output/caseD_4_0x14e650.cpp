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

// Function: caseD_4
// Address: 0x14e650 - 0x14e6d0
void caseD_4_0x14e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x14e650");
#endif

    switch (ctx->pc) {
        case 0x14e658u: goto label_14e658;
        case 0x14e694u: goto label_14e694;
        default: break;
    }

    ctx->pc = 0x14e650u;

    // 0x14e650: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14E650u;
    SET_GPR_U32(ctx, 31, 0x14E658u);
    ctx->pc = 0x14E654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E650u;
    // 0x14e654: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14E650u, 0x14E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E658u;
label_14e658:
    // 0x14e658: 0x8c520058  lw          $s2, 0x58($v0)
    ctx->pc = 0x14e658u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x14e65c: 0x124000e3  beqz        $s2, . + 4 + (0xE3 << 2)
    ctx->pc = 0x14E65Cu;
    {
        const bool branch_taken_0x14e65c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E65Cu;
        // 0x14e660: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e65c) {
            ctx->pc = 0x14E9ECu;
            return;
        }
    }
    ctx->pc = 0x14E664u;
    // 0x14e664: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x14e664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x14e668: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14e66c: 0x144000e0  bnez        $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x14E66Cu;
    {
        const bool branch_taken_0x14e66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E66Cu;
        // 0x14e670: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e66c) {
            ctx->pc = 0x14E9F0u;
            return;
        }
    }
    ctx->pc = 0x14E674u;
    // 0x14e674: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14e674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x14e678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e67c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14e680: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x14e680u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
    // 0x14e684: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x14e684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14e688: 0x8e109a1c  lw          $s0, -0x65E4($s0)
    ctx->pc = 0x14e688u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941212)));
    // 0x14e68c: 0xc0532f2  jal         func_14CBC8
    ctx->pc = 0x14E68Cu;
    SET_GPR_U32(ctx, 31, 0x14E694u);
    ctx->pc = 0x14E690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E68Cu;
    // 0x14e690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x14E68Cu, 0x14E694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E694u;
label_14e694:
    // 0x14e694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14e694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e698: 0x24035999  addiu       $v1, $zero, 0x5999
    ctx->pc = 0x14e698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22937));
    // 0x14e69c: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x14e69cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
    // 0x14e6a0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x14e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x14e6a4: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x14e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x14e6a8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x14e6a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x14e6ac: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x14e6acu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x14e6b0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x14e6b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x14e6b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e6b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e6b8: 0x32440100  andi        $a0, $s2, 0x100
    ctx->pc = 0x14e6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
    // 0x14e6bc: 0x108000cb  beqz        $a0, . + 4 + (0xCB << 2)
    ctx->pc = 0x14E6BCu;
    {
        const bool branch_taken_0x14e6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6BCu;
        // 0x14e6c0: 0xe4a00018  swc1        $f0, 0x18($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6bc) {
            ctx->pc = 0x14E9ECu;
            return;
        }
    }
    ctx->pc = 0x14E6C4u;
    // 0x14e6c4: 0x24022666  addiu       $v0, $zero, 0x2666
    ctx->pc = 0x14e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9830));
    // 0x14e6c8: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x14E6C8u;
    {
        const bool branch_taken_0x14e6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6C8u;
        // 0x14e6cc: 0xaca2001c  sw          $v0, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6c8) {
            ctx->pc = 0x14E9ECu;
            return;
        }
    }
    ctx->pc = 0x14E6D0u;
}
