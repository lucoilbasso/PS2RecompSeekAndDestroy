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

// Function: EffectRainDraw__FP16ST_EffectSpecialP9ApcPtcSplff
// Address: 0x125d28 - 0x1261d4
void EffectRainDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x125d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectRainDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x125d28");
#endif

    switch (ctx->pc) {
        case 0x125d98u: goto label_125d98;
        case 0x125e08u: goto label_125e08;
        case 0x125e1cu: goto label_125e1c;
        case 0x125e38u: goto label_125e38;
        case 0x125e50u: goto label_125e50;
        case 0x125ee0u: goto label_125ee0;
        case 0x125f60u: goto label_125f60;
        case 0x125f68u: goto label_125f68;
        case 0x125f8cu: goto label_125f8c;
        case 0x1260f0u: goto label_1260f0;
        case 0x1260f8u: goto label_1260f8;
        case 0x126118u: goto label_126118;
        case 0x126120u: goto label_126120;
        case 0x126144u: goto label_126144;
        default: break;
    }

    ctx->pc = 0x125d28u;

    // 0x125d28: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x125d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x125d2c: 0x2402ffa0  addiu       $v0, $zero, -0x60
    ctx->pc = 0x125d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967200));
    // 0x125d30: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x125d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x125d34: 0xafa400f4  sw          $a0, 0xF4($sp)
    ctx->pc = 0x125d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 4));
    // 0x125d38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d3c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x125d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x125d40: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x125d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x125d44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x125d44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d48: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x125d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x125d4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x125d4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d50: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x125d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x125d54: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x125d54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d58: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x125d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x125d5c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x125d5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d60: 0xa3a20082  sb          $v0, 0x82($sp)
    ctx->pc = 0x125d60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 130), (uint8_t)GPR_U32(ctx, 2));
    // 0x125d64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x125d64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d68: 0xa3a30083  sb          $v1, 0x83($sp)
    ctx->pc = 0x125d68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 3));
    // 0x125d6c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x125d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x125d70: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x125d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x125d74: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x125d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x125d78: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x125d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x125d7c: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x125d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x125d80: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x125d80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x125d84: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x125d84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x125d88: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x125d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
    // 0x125d8c: 0xa3a00080  sb          $zero, 0x80($sp)
    ctx->pc = 0x125d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x125d90: 0xc06ef40  jal         func_1BBD00
    ctx->pc = 0x125D90u;
    SET_GPR_U32(ctx, 31, 0x125D98u);
    ctx->pc = 0x125D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125D90u;
    // 0x125d94: 0xa3a00081  sb          $zero, 0x81($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 129), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD00u, 0x125D90u, 0x125D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D98u;
label_125d98:
    // 0x125d98: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x125d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x125d9c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x125d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x125da0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x125DA0u;
    {
        const bool branch_taken_0x125da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DA0u;
        // 0x125da4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125da0) {
            ctx->pc = 0x125E0Cu;
            goto label_125e0c;
        }
    }
    ctx->pc = 0x125DA8u;
    // 0x125da8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x125da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x125dac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x125dacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125db0: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x125db0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x125db4: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x125db4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x125db8: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x125db8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x125dbc: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x125dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x125dc0: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x125dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x125dc4: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x125dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x125dc8: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x125dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x125dcc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x125dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125dd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125dd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x125dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x125dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x125dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125ddc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x125ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125de0: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x125de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x125de4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x125de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x125de8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x125de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x125dec: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x125decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x125df0: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x125df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x125df4: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x125df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x125df8: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x125df8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x125dfc: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x125dfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x125e00: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x125E00u;
    SET_GPR_U32(ctx, 31, 0x125E08u);
    ctx->pc = 0x125E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E00u;
    // 0x125e04: 0xe7a100b4  swc1        $f1, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x125E00u, 0x125E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E08u;
label_125e08:
    // 0x125e08: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x125e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_125e0c:
    // 0x125e0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x125e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e14: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x125E14u;
    SET_GPR_U32(ctx, 31, 0x125E1Cu);
    ctx->pc = 0x125E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E14u;
    // 0x125e18: 0x24a5eb70  addiu       $a1, $a1, -0x1490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x125E14u, 0x125E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E1Cu;
label_125e1c:
    // 0x125e1c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x125e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x125e20: 0x24a5ebf0  addiu       $a1, $a1, -0x1410
    ctx->pc = 0x125e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962160));
    // 0x125e24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e28: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x125e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x125e2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x125e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x125e30: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x125E30u;
    SET_GPR_U32(ctx, 31, 0x125E38u);
    ctx->pc = 0x125E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E30u;
    // 0x125e34: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x125E30u, 0x125E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E38u;
label_125e38:
    // 0x125e38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x125e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x125e3c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x125e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x125e40: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x125e40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e44: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x125e44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x125e48: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x125e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x125e4c: 0x0  nop
    ctx->pc = 0x125e4cu;
    // NOP
label_125e50:
    // 0x125e50: 0x161180  sll         $v0, $s6, 6
    ctx->pc = 0x125e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x125e54: 0x8c8901b0  lw          $t1, 0x1B0($a0)
    ctx->pc = 0x125e54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x125e58: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x125e58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x125e5c: 0x25230010  addiu       $v1, $t1, 0x10
    ctx->pc = 0x125e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x125e60: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x125e60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x125e64: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x125e64u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x125e68: 0x8d2a0020  lw          $t2, 0x20($t1)
    ctx->pc = 0x125e68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x125e6c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x125e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x125e70: 0xc5220024  lwc1        $f2, 0x24($t1)
    ctx->pc = 0x125e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125e74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e78: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x125e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125e7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e80: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x125e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125e84: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x125e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e88: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x125e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x125e8c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x125e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125e90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x125e90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e94: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x125e94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x125e98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x125e98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x125e9c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x125e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x125ea0: 0xc5220024  lwc1        $f2, 0x24($t1)
    ctx->pc = 0x125ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125ea4: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x125ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125ea8: 0xc5210014  lwc1        $f1, 0x14($t1)
    ctx->pc = 0x125ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125eac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x125eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x125eb0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x125eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x125eb4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x125eb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x125eb8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x125eb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x125ebc: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x125ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125ec0: 0xc5220024  lwc1        $f2, 0x24($t1)
    ctx->pc = 0x125ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125ec4: 0xc5210018  lwc1        $f1, 0x18($t1)
    ctx->pc = 0x125ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125ec8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x125ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x125ecc: 0xe7b5007c  swc1        $f21, 0x7C($sp)
    ctx->pc = 0x125eccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x125ed0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x125ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x125ed4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x125ed4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x125ed8: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x125ED8u;
    SET_GPR_U32(ctx, 31, 0x125EE0u);
    ctx->pc = 0x125EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125ED8u;
    // 0x125edc: 0xe7a10078  swc1        $f1, 0x78($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x125ED8u, 0x125EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125EE0u;
label_125ee0:
    // 0x125ee0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x125ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125ee4: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x125ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x125ee8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x125ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125eec: 0x3484f000  ori         $a0, $a0, 0xF000
    ctx->pc = 0x125eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
    // 0x125ef0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x125ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x125ef4: 0x24a5f000  addiu       $a1, $a1, -0x1000
    ctx->pc = 0x125ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963200));
    // 0x125ef8: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x125ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x125efc: 0x85882b  sltu        $s1, $a0, $a1
    ctx->pc = 0x125efcu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x125f00: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x125f00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x125f04: 0x24639c00  addiu       $v1, $v1, -0x6400
    ctx->pc = 0x125f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941696));
    // 0x125f08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125f0c: 0x2c633801  sltiu       $v1, $v1, 0x3801
    ctx->pc = 0x125f0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x125f10: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x125f10u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x125f14: 0x83880a  movz        $s1, $a0, $v1
    ctx->pc = 0x125f14u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x125f18: 0x16200040  bnez        $s1, . + 4 + (0x40 << 2)
    ctx->pc = 0x125F18u;
    {
        const bool branch_taken_0x125f18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x125F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F18u;
        // 0x125f1c: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f18) {
            ctx->pc = 0x12601Cu;
            goto label_12601c;
        }
    }
    ctx->pc = 0x125F20u;
    // 0x125f20: 0x16a00035  bnez        $s5, . + 4 + (0x35 << 2)
    ctx->pc = 0x125F20u;
    {
        const bool branch_taken_0x125f20 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x125F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F20u;
        // 0x125f24: 0x7ba20040  lq          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f20) {
            ctx->pc = 0x125FF8u;
            goto label_125ff8;
        }
    }
    ctx->pc = 0x125F28u;
    // 0x125f28: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x125f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x125f2c: 0x2472d650  addiu       $s2, $v1, -0x29B0
    ctx->pc = 0x125f2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x125f30: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x125f30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x125f34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x125F34u;
    {
        const bool branch_taken_0x125f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F34u;
        // 0x125f38: 0x8fb300f8  lw          $s3, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f34) {
            ctx->pc = 0x125F58u;
            goto label_125f58;
        }
    }
    ctx->pc = 0x125F3Cu;
    // 0x125f3c: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x125f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x125f40: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x125f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x125f44: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x125f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x125f48: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x125f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x125f4c: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x125f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x125f50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x125F50u;
    {
        const bool branch_taken_0x125f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F50u;
        // 0x125f54: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f50) {
            ctx->pc = 0x125F8Cu;
            goto label_125f8c;
        }
    }
    ctx->pc = 0x125F58u;
label_125f58:
    // 0x125f58: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x125F58u;
    SET_GPR_U32(ctx, 31, 0x125F60u);
    ctx->pc = 0x125F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F58u;
    // 0x125f5c: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x125F58u, 0x125F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F60u;
label_125f60:
    // 0x125f60: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x125F60u;
    SET_GPR_U32(ctx, 31, 0x125F68u);
    ctx->pc = 0x125F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F60u;
    // 0x125f64: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x125F60u, 0x125F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F68u;
label_125f68:
    // 0x125f68: 0x8e50008c  lw          $s0, 0x8C($s2)
    ctx->pc = 0x125f68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x125f6c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x125f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x125f70: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x125f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x125f74: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x125f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x125f78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x125f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125f7c: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x125f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x125f80: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x125f80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
    // 0x125f84: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x125F84u;
    SET_GPR_U32(ctx, 31, 0x125F8Cu);
    ctx->pc = 0x125F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F84u;
    // 0x125f88: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x125F84u, 0x125F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F8Cu;
label_125f8c:
    // 0x125f8c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x125f8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f90: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x125f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x125f94: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x125f94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x125f98: 0x34c68002  ori         $a2, $a2, 0x8002
    ctx->pc = 0x125f98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32770);
    // 0x125f9c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x125f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x125fa0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x125fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x125fa4: 0xae13001c  sw          $s3, 0x1C($s0)
    ctx->pc = 0x125fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
    // 0x125fa8: 0x24080048  addiu       $t0, $zero, 0x48
    ctx->pc = 0x125fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x125fac: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x125facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x125fb0: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x125fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x125fb4: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x125fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x125fb8: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x125fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x125fbc: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x125fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x125fc0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x125fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x125fc4: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x125fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x125fc8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x125fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x125fcc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x125fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x125fd0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x125fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125fd4: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x125fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x125fd8: 0x24730050  addiu       $s3, $v1, 0x50
    ctx->pc = 0x125fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x125fdc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x125fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x125fe0: 0x24770040  addiu       $s7, $v1, 0x40
    ctx->pc = 0x125fe0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x125fe4: 0xe4950004  swc1        $f21, 0x4($a0)
    ctx->pc = 0x125fe4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x125fe8: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x125fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x125fec: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x125fecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x125ff0: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x125ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x125ff4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x125ff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_125ff8:
    // 0x125ff8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x125ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ffc: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x125ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x126000: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x126000u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x126004: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x126004u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x126008: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x126008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12600c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x12600cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x126010: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x126010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x126014: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x126014u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x126018: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x126018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_12601c:
    // 0x12601c: 0x16c20007  bne         $s6, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12601Cu;
    {
        const bool branch_taken_0x12601c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x126020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12601Cu;
        // 0x126020: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12601c) {
            ctx->pc = 0x12603Cu;
            goto label_12603c;
        }
    }
    ctx->pc = 0x126024u;
    // 0x126024: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x126024u;
    {
        const bool branch_taken_0x126024 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x126028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126024u;
        // 0x126028: 0x3aa30078  xori        $v1, $s5, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)120);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126024) {
            ctx->pc = 0x126040u;
            goto label_126040;
        }
    }
    ctx->pc = 0x12602Cu;
    // 0x12602c: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x12602Cu;
    {
        const bool branch_taken_0x12602c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x126030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12602Cu;
        // 0x126030: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12602c) {
            ctx->pc = 0x126038u;
            goto label_126038;
        }
    }
    ctx->pc = 0x126034u;
    // 0x126034: 0x53880b  movn        $s1, $v0, $s3
    ctx->pc = 0x126034u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_126038:
    // 0x126038: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x126038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12603c:
    // 0x12603c: 0x3aa30078  xori        $v1, $s5, 0x78
    ctx->pc = 0x12603cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)120);
label_126040:
    // 0x126040: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x126040u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x126044: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x126044u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x126048: 0x54800051  bnel        $a0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x126048u;
    {
        const bool branch_taken_0x126048 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x126048) {
            ctx->pc = 0x12604Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126048u;
            // 0x12604c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126190u;
            goto label_126190;
        }
    }
    ctx->pc = 0x126050u;
    // 0x126050: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x126050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x126054: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x126054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x126058: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x126058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x12605c: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x12605cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x126060: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x126060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x126064: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x126064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x126068: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x126068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12606c: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x12606cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126070: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x126070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x126074: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x126074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x126078: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x126078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12607c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x126080: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x126080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x126084: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x126084u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x126088: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x126088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12608c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x12608cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x126090: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x126090u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x126094: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x126094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x126098: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x126098u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x12609c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x12609cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1260a0: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x1260a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x1260a4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1260a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1260a8: 0x2651823  subu        $v1, $s3, $a1
    ctx->pc = 0x1260a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1260ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1260acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1260b0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1260b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1260b4: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1260b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1260b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1260b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1260bc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1260bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1260c0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1260c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1260c4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1260c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1260c8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1260c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1260cc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1260ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1260d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1260d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1260d4: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1260d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1260d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1260d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1260dc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1260dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1260e0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1260e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1260e4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1260e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1260e8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1260E8u;
    SET_GPR_U32(ctx, 31, 0x1260F0u);
    ctx->pc = 0x1260ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1260E8u;
    // 0x1260ec: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1260E8u, 0x1260F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1260F0u;
label_1260f0:
    // 0x1260f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1260f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1260f4: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1260f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_1260f8:
    // 0x1260f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1260f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1260fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1260fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x126100: 0x0  nop
    ctx->pc = 0x126100u;
    // NOP
    // 0x126104: 0x0  nop
    ctx->pc = 0x126104u;
    // NOP
    // 0x126108: 0x0  nop
    ctx->pc = 0x126108u;
    // NOP
    // 0x12610c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12610Cu;
    {
        const bool branch_taken_0x12610c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12610c) {
            ctx->pc = 0x1260F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1260f8;
        }
    }
    ctx->pc = 0x126114u;
    // 0x126114: 0x0  nop
    ctx->pc = 0x126114u;
    // NOP
label_126118:
    // 0x126118: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x126118u;
    SET_GPR_U32(ctx, 31, 0x126120u);
    ctx->pc = 0x12611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126118u;
    // 0x12611c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x126118u, 0x126120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126120u;
label_126120:
    // 0x126120: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x126120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x126124: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x126124u;
    {
        const bool branch_taken_0x126124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x126128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126124u;
        // 0x126128: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126124) {
            ctx->pc = 0x126118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126118;
        }
    }
    ctx->pc = 0x12612Cu;
    // 0x12612c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x12612cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x126130: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x126130u;
    {
        const bool branch_taken_0x126130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126130u;
        // 0x126134: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126130) {
            ctx->pc = 0x126144u;
            goto label_126144;
        }
    }
    ctx->pc = 0x126138u;
    // 0x126138: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x126138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x12613c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12613Cu;
    SET_GPR_U32(ctx, 31, 0x126144u);
    ctx->pc = 0x126140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12613Cu;
    // 0x126140: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12613Cu, 0x126144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126144u;
label_126144:
    // 0x126144: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x126144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x126148: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x126148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x12614c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x126150: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x126150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x126154: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126158: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x126158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x12615c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x12615cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x126160: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x126160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x126164: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x126164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x126168: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x126168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12616c: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x12616cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x126170: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x126170u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x126174: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x126174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x126178: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x126178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12617c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12617cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126180: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x126180u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126184: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x126184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126188: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x126188u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12618c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12618cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_126190:
    // 0x126190: 0x2ac20040  slti        $v0, $s6, 0x40
    ctx->pc = 0x126190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x126194: 0x1440ff2e  bnez        $v0, . + 4 + (-0xD2 << 2)
    ctx->pc = 0x126194u;
    {
        const bool branch_taken_0x126194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126194u;
        // 0x126198: 0x8fa400f4  lw          $a0, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126194) {
            ctx->pc = 0x125E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125e50;
        }
    }
    ctx->pc = 0x12619Cu;
    // 0x12619c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x12619cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1261a0: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x1261a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1261a4: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x1261a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1261a8: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x1261a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1261ac: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x1261acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1261b0: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x1261b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1261b4: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x1261b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1261b8: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x1261b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1261bc: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x1261bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1261c0: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x1261c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1261c4: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x1261c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1261c8: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1261c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1261cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1261CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1261D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261CCu;
        // 0x1261d0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1261CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1261D4u;
}
