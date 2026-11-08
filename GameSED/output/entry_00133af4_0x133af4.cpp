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

// Function: entry_00133af4
// Address: 0x133af4 - 0x133b60
void entry_00133af4_0x133af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133af4_0x133af4");
#endif

    switch (ctx->pc) {
        case 0x133afcu: goto label_133afc;
        case 0x133b5cu: goto label_133b5c;
        default: break;
    }

    ctx->pc = 0x133af4u;

    // 0x133af4: 0xc061422  jal         func_185088
    ctx->pc = 0x133AF4u;
    SET_GPR_U32(ctx, 31, 0x133AFCu);
    ctx->pc = 0x133AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AF4u;
    // 0x133af8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x133AF4u, 0x133AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AFCu;
label_133afc:
    // 0x133afc: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x133afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x133b00: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x133b00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x133b04: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x133b04u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x133b08: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x133b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x133b0c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x133b0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133b10: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x133b10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x133b14: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x133b14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x133b18: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x133b18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x133b1c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x133b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x133b20: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x133b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b24: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x133b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x133b28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x133b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x133b2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x133b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x133b30: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x133b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x133b34: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x133b34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x133b38: 0xda430000  lqc2        $vf3, 0x0($s2)
    ctx->pc = 0x133b38u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x133b3c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x133b3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x133b40: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x133b40u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x133b44: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x133b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x133b48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x133b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133b4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x133b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x133b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b54: 0xc05129a  jal         func_144A68
    ctx->pc = 0x133B54u;
    SET_GPR_U32(ctx, 31, 0x133B5Cu);
    ctx->pc = 0x133B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B54u;
    // 0x133b58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x133B54u, 0x133B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B5Cu;
label_133b5c:
    // 0x133b5c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x133b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x133b60u;
}
