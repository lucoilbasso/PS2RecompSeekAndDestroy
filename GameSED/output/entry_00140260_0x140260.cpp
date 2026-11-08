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

// Function: entry_00140260
// Address: 0x140260 - 0x140308
void entry_00140260_0x140260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140260_0x140260");
#endif

    switch (ctx->pc) {
        case 0x14028cu: goto label_14028c;
        case 0x140300u: goto label_140300;
        default: break;
    }

    ctx->pc = 0x140260u;

    // 0x140260: 0x12800029  beqz        $s4, . + 4 + (0x29 << 2)
    ctx->pc = 0x140260u;
    {
        const bool branch_taken_0x140260 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x140260) {
            ctx->pc = 0x140308u;
            return;
        }
    }
    ctx->pc = 0x140268u;
    // 0x140268: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x140268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14026c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x14026cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x140270: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x140270u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x140274: 0x48302800  qmfc2.ni    $s0, $vf5
    ctx->pc = 0x140274u;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x140278: 0x108000  sll         $s0, $s0, 0
    ctx->pc = 0x140278u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
    // 0x14027c: 0xc64d0078  lwc1        $f13, 0x78($s2)
    ctx->pc = 0x14027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x140280: 0xc64c0074  lwc1        $f12, 0x74($s2)
    ctx->pc = 0x140280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x140284: 0xc067a02  jal         func_19E808
    ctx->pc = 0x140284u;
    SET_GPR_U32(ctx, 31, 0x14028Cu);
    ctx->pc = 0x140288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140284u;
    // 0x140288: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x140284u, 0x14028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14028Cu;
label_14028c:
    // 0x14028c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14028cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140290: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x140290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x140294: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x140294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x140298: 0x720380c8  pmaxw       $s0, $s0, $v1
    ctx->pc = 0x140298u;
    SET_GPR_VEC(ctx, 16, PS2_PMAXW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x14029c: 0x108000  sll         $s0, $s0, 0
    ctx->pc = 0x14029cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
    // 0x1402a0: 0x720480e8  pminw       $s0, $s0, $a0
    ctx->pc = 0x1402a0u;
    SET_GPR_VEC(ctx, 16, PS2_PMINW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x1402a4: 0x108000  sll         $s0, $s0, 0
    ctx->pc = 0x1402a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
    // 0x1402a8: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x1402a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1402ac: 0x8e430160  lw          $v1, 0x160($s2)
    ctx->pc = 0x1402acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x1402b0: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x1402b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1402b4: 0x70640000  madd        $zero, $v1, $a0
    ctx->pc = 0x1402b4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x1402b8: 0x70008030  pmfhl.lw    $s0
    ctx->pc = 0x1402b8u;
    SET_GPR_VEC(ctx, 16, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x1402bc: 0x1083fb  dsra        $s0, $s0, 15
    ctx->pc = 0x1402bcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> 15);
    // 0x1402c0: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x1402c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x1402c4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1402c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1402c8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1402C8u;
    {
        const bool branch_taken_0x1402c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1402c8) {
            ctx->pc = 0x1402CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1402C8u;
            // 0x1402cc: 0xae5000f0  sw          $s0, 0xF0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140308u;
            return;
        }
    }
    ctx->pc = 0x1402D0u;
    // 0x1402d0: 0x8e220690  lw          $v0, 0x690($s1)
    ctx->pc = 0x1402d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x1402d4: 0x8c431a64  lw          $v1, 0x1A64($v0)
    ctx->pc = 0x1402d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6756)));
    // 0x1402d8: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1402d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1402dc: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1402dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1402e0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1402e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1402e4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1402e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1402e8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1402e8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1402ec: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x1402ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1402f0: 0x46006b45  abs.s       $f13, $f13
    ctx->pc = 0x1402f0u;
    ctx->f[13] = FPU_ABS_S(ctx->f[13]);
    // 0x1402f4: 0x460d0340  add.s       $f13, $f0, $f13
    ctx->pc = 0x1402f4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x1402f8: 0xc067a02  jal         func_19E808
    ctx->pc = 0x1402F8u;
    SET_GPR_U32(ctx, 31, 0x140300u);
    ctx->pc = 0x1402FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1402F8u;
    // 0x1402fc: 0xc7ac0004  lwc1        $f12, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x1402F8u, 0x140300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140300u;
label_140300:
    // 0x140300: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x140300u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x140304: 0xae5000f0  sw          $s0, 0xF0($s2)
    ctx->pc = 0x140304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 16));
    ctx->pc = 0x140308u;
}
