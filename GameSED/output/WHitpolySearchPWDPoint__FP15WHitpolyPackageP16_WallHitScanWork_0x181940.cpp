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

// Function: WHitpolySearchPWDPoint__FP15WHitpolyPackageP16_WallHitScanWork
// Address: 0x181940 - 0x181ba0
void WHitpolySearchPWDPoint__FP15WHitpolyPackageP16_WallHitScanWork_0x181940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolySearchPWDPoint__FP15WHitpolyPackageP16_WallHitScanWork_0x181940");
#endif

    switch (ctx->pc) {
        case 0x1819c0u: goto label_1819c0;
        case 0x181a38u: goto label_181a38;
        default: break;
    }

    ctx->pc = 0x181940u;

    // 0x181940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x181940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x181944: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x181944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x181948: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x181948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x18194c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x18194cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181950: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x181950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x181954: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x181954u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181958: 0x2404ff80  addiu       $a0, $zero, -0x80
    ctx->pc = 0x181958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x18195c: 0xc5820020  lwc1        $f2, 0x20($t4)
    ctx->pc = 0x18195cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x181960: 0x8d8e0048  lw          $t6, 0x48($t4)
    ctx->pc = 0x181960u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x181964: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181968: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x181968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x18196c: 0x8d070014  lw          $a3, 0x14($t0)
    ctx->pc = 0x18196cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x181970: 0x8d0f0018  lw          $t7, 0x18($t0)
    ctx->pc = 0x181970u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x181974: 0x8d10001c  lw          $s0, 0x1C($t0)
    ctx->pc = 0x181974u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x181978: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x181978u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC0u, _value); } while (0);
    // 0x18197c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x18197cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DBCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBCCu, _value); } while (0);
    // 0x181980: 0x11000084  beqz        $t0, . + 4 + (0x84 << 2)
    ctx->pc = 0x181980u;
    {
        const bool branch_taken_0x181980 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x181984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181980u;
        // 0x181984: 0xa0640020  sb          $a0, 0x20($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181980) {
            ctx->pc = 0x181B94u;
            goto label_181b94;
        }
    }
    ctx->pc = 0x181988u;
    // 0x181988: 0x8d820028  lw          $v0, 0x28($t4)
    ctx->pc = 0x181988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x18198c: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x18198Cu;
    {
        const bool branch_taken_0x18198c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18198c) {
            ctx->pc = 0x181990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18198Cu;
            // 0x181990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181A10u;
            goto label_181a10;
        }
    }
    ctx->pc = 0x181994u;
    // 0x181994: 0x8d820060  lw          $v0, 0x60($t4)
    ctx->pc = 0x181994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 96)));
    // 0x181998: 0xad800028  sw          $zero, 0x28($t4)
    ctx->pc = 0x181998u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 0));
    // 0x18199c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x18199cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1819a0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1819a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1819a4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1819a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1819a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1819a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1819ac: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1819acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1819b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1819b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1819b4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1819B4u;
    {
        const bool branch_taken_0x1819b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1819B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819B4u;
        // 0x1819b8: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819b4) {
            ctx->pc = 0x181A10u;
            goto label_181a10;
        }
    }
    ctx->pc = 0x1819BCu;
    // 0x1819bc: 0x0  nop
    ctx->pc = 0x1819bcu;
    // NOP
label_1819c0:
    // 0x1819c0: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x1819c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x1819c4: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x1819c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x1819c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1819c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1819cc: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1819ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x26DBE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBE0u, _value); } while (0);
    // 0x1819d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1819d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x26DBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC0u, _value); } while (0);
    // 0x1819d4: 0xc7010008  lwc1        $f1, 0x8($t8)
    ctx->pc = 0x1819d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1819d8: 0x8d840028  lw          $a0, 0x28($t4)
    ctx->pc = 0x1819d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x1819dc: 0xc7000000  lwc1        $f0, 0x0($t8)
    ctx->pc = 0x1819dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1819e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1819e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1819e4: 0xac6a001c  sw          $t2, 0x1C($v1)
    ctx->pc = 0x1819e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x26DBDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBDCu, _value); } while (0);
    // 0x1819e8: 0xad890060  sw          $t1, 0x60($t4)
    ctx->pc = 0x1819e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 96), GPR_U32(ctx, 9));
    // 0x1819ec: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1819ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC4u, _value); } while (0); }
    // 0x1819f0: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x1819f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBCCu, _value); } while (0); }
    // 0x1819f4: 0xac6b0010  sw          $t3, 0x10($v1)
    ctx->pc = 0x1819f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x26DBD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD0u, _value); } while (0);
    // 0x1819f8: 0xac680018  sw          $t0, 0x18($v1)
    ctx->pc = 0x1819f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x26DBD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD8u, _value); } while (0);
    // 0x1819fc: 0xad840028  sw          $a0, 0x28($t4)
    ctx->pc = 0x1819fcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 4));
    // 0x181a00: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x181a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x181a04: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x181a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC8u, _value); } while (0);
    // 0x181a08: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x181A08u;
    {
        const bool branch_taken_0x181a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A08u;
        // 0x181a0c: 0xac680014  sw          $t0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a08) {
            ctx->pc = 0x181B94u;
            goto label_181b94;
        }
    }
    ctx->pc = 0x181A10u;
label_181a10:
    // 0x181a10: 0x95040002  lhu         $a0, 0x2($t0)
    ctx->pc = 0x181a10u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x181a14: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x181a14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a18: 0x124102a  slt         $v0, $t1, $a0
    ctx->pc = 0x181a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x181a1c: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x181A1Cu;
    {
        const bool branch_taken_0x181a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A1Cu;
        // 0x181a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a1c) {
            ctx->pc = 0x181B94u;
            goto label_181b94;
        }
    }
    ctx->pc = 0x181A24u;
    // 0x181a24: 0xc7858570  lwc1        $f5, -0x7A90($gp)
    ctx->pc = 0x181a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x181a28: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x181a28u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a2c: 0x3c01bb80  lui         $at, 0xBB80
    ctx->pc = 0x181a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48000 << 16));
    // 0x181a30: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x181a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x181a34: 0xc7838574  lwc1        $f3, -0x7A8C($gp)
    ctx->pc = 0x181a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_181a38:
    // 0x181a38: 0x90c2000c  lbu         $v0, 0xC($a2)
    ctx->pc = 0x181a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x181a3c: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x181a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x181a40: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x181A40u;
    {
        const bool branch_taken_0x181a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181a40) {
            ctx->pc = 0x181A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181A40u;
            // 0x181a44: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181B80u;
            goto label_181b80;
        }
    }
    ctx->pc = 0x181A48u;
    // 0x181a48: 0x3a0c02d  daddu       $t8, $sp, $zero
    ctx->pc = 0x181a48u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a4c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x181a4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x181a50: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x181a50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181a54: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x181a54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x181a58: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x181a58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x181a5c: 0xd9c30000  lqc2        $vf3, 0x0($t6)
    ctx->pc = 0x181a5cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x181a60: 0x4b440844  vsubx.xz    $vf1, $vf1, $vf4x
    ctx->pc = 0x181a60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x181a64: 0x4b441080  vaddx.xz    $vf2, $vf2, $vf4x
    ctx->pc = 0x181a64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x181a68: 0x4a0002ff  vnop
    ctx->pc = 0x181a68u;
    // NOP operation, no action needed for VU0
    // 0x181a6c: 0x4a0002ff  vnop
    ctx->pc = 0x181a6cu;
    // NOP operation, no action needed for VU0
    // 0x181a70: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x181a70u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
    // 0x181a74: 0x4b41196c  vsub.xz     $vf5, $vf3, $vf1
    ctx->pc = 0x181a74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181a78: 0x4b4311ac  vsub.xz     $vf6, $vf2, $vf3
    ctx->pc = 0x181a78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x181a7c: 0x4a0002ff  vnop
    ctx->pc = 0x181a7cu;
    // NOP operation, no action needed for VU0
    // 0x181a80: 0x4a0002ff  vnop
    ctx->pc = 0x181a80u;
    // NOP operation, no action needed for VU0
    // 0x181a84: 0x4a0002ff  vnop
    ctx->pc = 0x181a84u;
    // NOP operation, no action needed for VU0
    // 0x181a88: 0x4a0002ff  vnop
    ctx->pc = 0x181a88u;
    // NOP operation, no action needed for VU0
    // 0x181a8c: 0x4a0002ff  vnop
    ctx->pc = 0x181a8cu;
    // NOP operation, no action needed for VU0
    // 0x181a90: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x181a90u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x181a94: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x181a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x181a98: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x181a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x181a9c: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x181A9Cu;
    {
        const bool branch_taken_0x181a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A9Cu;
        // 0x181aa0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a9c) {
            ctx->pc = 0x181B7Cu;
            goto label_181b7c;
        }
    }
    ctx->pc = 0x181AA4u;
    // 0x181aa4: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x181aa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x181aa8: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x181aa8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181aac: 0x94e40006  lhu         $a0, 0x6($a3)
    ctx->pc = 0x181aacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x181ab0: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x181ab0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x181ab4: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x181ab4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x181ab8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x181ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181abc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x181abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x181ac0: 0x1e35821  addu        $t3, $t7, $v1
    ctx->pc = 0x181ac0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x181ac4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x181ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x181ac8: 0x1e44021  addu        $t0, $t7, $a0
    ctx->pc = 0x181ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x181acc: 0x2025021  addu        $t2, $s0, $v0
    ctx->pc = 0x181accu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x181ad0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x181ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ad4: 0x1c0182d  daddu       $v1, $t6, $zero
    ctx->pc = 0x181ad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ad8: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x181ad8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x181adc: 0xd9620000  lqc2        $vf2, 0x0($t3)
    ctx->pc = 0x181adcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x181ae0: 0xd9430000  lqc2        $vf3, 0x0($t2)
    ctx->pc = 0x181ae0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x181ae4: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x181ae4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x181ae8: 0x4b0321be  vmulaz.x    $ACC, $vf4, $vf3z
    ctx->pc = 0x181ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x181aec: 0x4b04194e  vmsubz.x    $vf5, $vf3, $vf4z
    ctx->pc = 0x181aecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181af0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x181af0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x181af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x181af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181af8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x181af8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x181afc: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x181afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181b00: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x181B00u;
    {
        const bool branch_taken_0x181b00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B00u;
        // 0x181b04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b00) {
            ctx->pc = 0x181B3Cu;
            goto label_181b3c;
        }
    }
    ctx->pc = 0x181B08u;
    // 0x181b08: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x181b08u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x181b0c: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x181b0cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181b10: 0x4bc231ec  vsub.xyz    $vf7, $vf6, $vf2
    ctx->pc = 0x181b10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x181b14: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x181b14u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x181b18: 0x4b0339be  vmulaz.x    $ACC, $vf7, $vf3z
    ctx->pc = 0x181b18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x181b1c: 0x4b071a4e  vmsubz.x    $vf9, $vf3, $vf7z
    ctx->pc = 0x181b1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x181b20: 0x4a4439bc  vmulax.z    $ACC, $vf7, $vf4x
    ctx->pc = 0x181b20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x181b24: 0x4a47228c  vmsubx.z    $vf10, $vf4, $vf7x
    ctx->pc = 0x181b24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x181b28: 0x4a0003bf  vwaitq
    ctx->pc = 0x181b28u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x181b2c: 0x4b004a1c  vmulq.x     $vf8, $vf9, $Q
    ctx->pc = 0x181b2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x181b30: 0x4a40521c  vmulq.z     $vf8, $vf10, $Q
    ctx->pc = 0x181b30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x181b34: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x181b34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x181b38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x181b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181b3c:
    // 0x181b3c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x181B3Cu;
    {
        const bool branch_taken_0x181b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B3Cu;
        // 0x181b40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b3c) {
            ctx->pc = 0x181B74u;
            goto label_181b74;
        }
    }
    ctx->pc = 0x181B44u;
    // 0x181b44: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x181b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181b48: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x181b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181b4c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x181B4Cu;
    {
        const bool branch_taken_0x181b4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B4Cu;
        // 0x181b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b4c) {
            ctx->pc = 0x181B74u;
            goto label_181b74;
        }
    }
    ctx->pc = 0x181B54u;
    // 0x181b54: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x181b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181b58: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x181B58u;
    {
        const bool branch_taken_0x181b58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181b58) {
            ctx->pc = 0x181B74u;
            goto label_181b74;
        }
    }
    ctx->pc = 0x181B60u;
    // 0x181b60: 0xc5a00008  lwc1        $f0, 0x8($t5)
    ctx->pc = 0x181b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181b64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181b68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x181B68u;
    {
        const bool branch_taken_0x181b68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B68u;
        // 0x181b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b68) {
            ctx->pc = 0x181B74u;
            goto label_181b74;
        }
    }
    ctx->pc = 0x181B70u;
    // 0x181b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181b74:
    // 0x181b74: 0x5040ff92  beql        $v0, $zero, . + 4 + (-0x6E << 2)
    ctx->pc = 0x181B74u;
    {
        const bool branch_taken_0x181b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181b74) {
            ctx->pc = 0x181B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181B74u;
            // 0x181b78: 0x8cc5000c  lw          $a1, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1819C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1819c0;
        }
    }
    ctx->pc = 0x181B7Cu;
label_181b7c:
    // 0x181b7c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x181b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_181b80:
    // 0x181b80: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x181b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x181b84: 0x139102a  slt         $v0, $t1, $t9
    ctx->pc = 0x181b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x181b88: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x181B88u;
    {
        const bool branch_taken_0x181b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B88u;
        // 0x181b8c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b88) {
            ctx->pc = 0x181A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181a38;
        }
    }
    ctx->pc = 0x181B90u;
    // 0x181b90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181b94:
    // 0x181b94: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x181b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181b98: 0x3e00008  jr          $ra
    ctx->pc = 0x181B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B98u;
        // 0x181b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181BA0u;
}
