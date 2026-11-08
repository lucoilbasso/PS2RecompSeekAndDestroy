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

// Function: entry_0012b878
// Address: 0x12b878 - 0x12b930
void entry_0012b878_0x12b878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b878_0x12b878");
#endif

    switch (ctx->pc) {
        case 0x12b900u: goto label_12b900;
        default: break;
    }

    ctx->pc = 0x12b878u;

    // 0x12b878: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x12b878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x12b87c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12b87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b880: 0x24848f40  addiu       $a0, $a0, -0x70C0
    ctx->pc = 0x12b880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938432));
    // 0x12b884: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x12b884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b888: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x12b888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x12b88c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x12b88cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b890: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12b890u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12b894: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12b894u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12b898: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12b898u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b89c: 0xfbc10000  sqc2        $vf1, 0x0($fp)
    ctx->pc = 0x12b89cu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b8a0: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x12b8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x12b8a4: 0x24a58f50  addiu       $a1, $a1, -0x70B0
    ctx->pc = 0x12b8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938448));
    // 0x12b8a8: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x12b8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x12b8ac: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x12b8acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12b8b0: 0x7de20000  sq          $v0, 0x0($t7)
    ctx->pc = 0x12b8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 2));
    // 0x12b8b4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12b8b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b8b8: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12b8b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b8bc: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12b8bcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b8c0: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12b8c0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b8c4: 0xfae40000  sqc2        $vf4, 0x0($s7)
    ctx->pc = 0x12b8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12b8c8: 0xfae50010  sqc2        $vf5, 0x10($s7)
    ctx->pc = 0x12b8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12b8cc: 0xfae60020  sqc2        $vf6, 0x20($s7)
    ctx->pc = 0x12b8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12b8d0: 0xfae70030  sqc2        $vf7, 0x30($s7)
    ctx->pc = 0x12b8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12b8d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x12b8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b8d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12b8dc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12b8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8e0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x12b8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12b8e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8e8: 0x7fa90100  sq          $t1, 0x100($sp)
    ctx->pc = 0x12b8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 9));
    // 0x12b8ec: 0x7faa0110  sq          $t2, 0x110($sp)
    ctx->pc = 0x12b8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 10));
    // 0x12b8f0: 0x7fab0120  sq          $t3, 0x120($sp)
    ctx->pc = 0x12b8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 11));
    // 0x12b8f4: 0x7faf0130  sq          $t7, 0x130($sp)
    ctx->pc = 0x12b8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 15));
    // 0x12b8f8: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x12B8F8u;
    SET_GPR_U32(ctx, 31, 0x12B900u);
    ctx->pc = 0x12B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B8F8u;
    // 0x12b8fc: 0x7fb90140  sq          $t9, 0x140($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x12B8F8u, 0x12B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B900u;
label_12b900:
    // 0x12b900: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x12b900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x12b904: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12b904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b908: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x12b908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x12b90c: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x12b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x12b910: 0x7bb90140  lq          $t9, 0x140($sp)
    ctx->pc = 0x12b910u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x12b914: 0x7baf0130  lq          $t7, 0x130($sp)
    ctx->pc = 0x12b914u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x12b918: 0xc2282b  sltu        $a1, $a2, $v0
    ctx->pc = 0x12b918u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12b91c: 0x7bab0120  lq          $t3, 0x120($sp)
    ctx->pc = 0x12b91cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12b920: 0x7baa0110  lq          $t2, 0x110($sp)
    ctx->pc = 0x12b920u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12b924: 0x7ba90100  lq          $t1, 0x100($sp)
    ctx->pc = 0x12b924u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12b928: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x12b928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x12b92c: 0x0  nop
    ctx->pc = 0x12b92cu;
    // NOP
    ctx->pc = 0x12b930u;
}
