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

// Function: _kExitTLBHandler
// Address: 0x1b86c0 - 0x1b87b4
void _kExitTLBHandler_0x1b86c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_kExitTLBHandler_0x1b86c0");
#endif

    ctx->pc = 0x1b86c0u;

    // 0x1b86c0: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x1b86c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
    // 0x1b86c4: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x1b86c4u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x1b86c8: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x1b86c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
    // 0x1b86cc: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x1b86ccu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
    // 0x1b86d0: 0x40f  sync.p
    ctx->pc = 0x1b86d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b86d4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b86d8: 0x8c42d3a8  lw          $v0, -0x2C58($v0)
    ctx->pc = 0x1b86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40D3A8u));
    // 0x1b86dc: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x1b86dcu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
    // 0x1b86e0: 0x40f  sync.p
    ctx->pc = 0x1b86e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b86e4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b86e8: 0xdc42d380  ld          $v0, -0x2C80($v0)
    ctx->pc = 0x1b86e8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x40D380u));
    // 0x1b86ec: 0x400011  mthi        $v0
    ctx->pc = 0x1b86ecu;
    ctx->hi = GPR_U64(ctx, 2);
    // 0x1b86f0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b86f4: 0xdc42d388  ld          $v0, -0x2C78($v0)
    ctx->pc = 0x1b86f4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x40D388u));
    // 0x1b86f8: 0x70400011  mthi1       $v0
    ctx->pc = 0x1b86f8u;
    ctx->hi1 = GPR_U64(ctx, 2);
    // 0x1b86fc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b8700: 0xdc42d390  ld          $v0, -0x2C70($v0)
    ctx->pc = 0x1b8700u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x40D390u));
    // 0x1b8704: 0x400013  mtlo        $v0
    ctx->pc = 0x1b8704u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x1b8708: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b8708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b870c: 0xdc42d398  ld          $v0, -0x2C68($v0)
    ctx->pc = 0x1b870cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x40D398u));
    // 0x1b8710: 0x70400013  mtlo1       $v0
    ctx->pc = 0x1b8710u;
    ctx->lo1 = GPR_U64(ctx, 2);
    // 0x1b8714: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b8714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b8718: 0xdc42d3a0  ld          $v0, -0x2C60($v0)
    ctx->pc = 0x1b8718u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x40D3A0u));
    // 0x1b871c: 0x400029  mtsa        $v0
    ctx->pc = 0x1b871cu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
    // 0x1b8720: 0x40f  sync.p
    ctx->pc = 0x1b8720u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b8724: 0x3c1a0041  lui         $k0, 0x41
    ctx->pc = 0x1b8724u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)65 << 16));
    // 0x1b8728: 0x275ad180  addiu       $k0, $k0, -0x2E80
    ctx->pc = 0x1b8728u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 4294955392));
    // 0x1b872c: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x1b872cu;
    SET_GPR_VEC(ctx, 1, FAST_READ128(0x40D190u));
    // 0x1b8730: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x1b8730u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40D1A0u));
    // 0x1b8734: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x1b8734u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x40D1B0u));
    // 0x1b8738: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x1b8738u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x40D1C0u));
    // 0x1b873c: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x1b873cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x40D1D0u));
    // 0x1b8740: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x1b8740u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x40D1E0u));
    // 0x1b8744: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x1b8744u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x40D1F0u));
    // 0x1b8748: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x1b8748u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x40D200u));
    // 0x1b874c: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x1b874cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x40D210u));
    // 0x1b8750: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x1b8750u;
    SET_GPR_VEC(ctx, 10, FAST_READ128(0x40D220u));
    // 0x1b8754: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x1b8754u;
    SET_GPR_VEC(ctx, 11, FAST_READ128(0x40D230u));
    // 0x1b8758: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x1b8758u;
    SET_GPR_VEC(ctx, 12, FAST_READ128(0x40D240u));
    // 0x1b875c: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x1b875cu;
    SET_GPR_VEC(ctx, 13, FAST_READ128(0x40D250u));
    // 0x1b8760: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x1b8760u;
    SET_GPR_VEC(ctx, 14, FAST_READ128(0x40D260u));
    // 0x1b8764: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x1b8764u;
    SET_GPR_VEC(ctx, 15, FAST_READ128(0x40D270u));
    // 0x1b8768: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x1b8768u;
    SET_GPR_VEC(ctx, 16, FAST_READ128(0x40D280u));
    // 0x1b876c: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x1b876cu;
    SET_GPR_VEC(ctx, 17, FAST_READ128(0x40D290u));
    // 0x1b8770: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x1b8770u;
    SET_GPR_VEC(ctx, 18, FAST_READ128(0x40D2A0u));
    // 0x1b8774: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x1b8774u;
    SET_GPR_VEC(ctx, 19, FAST_READ128(0x40D2B0u));
    // 0x1b8778: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x1b8778u;
    SET_GPR_VEC(ctx, 20, FAST_READ128(0x40D2C0u));
    // 0x1b877c: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x1b877cu;
    SET_GPR_VEC(ctx, 21, FAST_READ128(0x40D2D0u));
    // 0x1b8780: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x1b8780u;
    SET_GPR_VEC(ctx, 22, FAST_READ128(0x40D2E0u));
    // 0x1b8784: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x1b8784u;
    SET_GPR_VEC(ctx, 23, FAST_READ128(0x40D2F0u));
    // 0x1b8788: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x1b8788u;
    SET_GPR_VEC(ctx, 24, FAST_READ128(0x40D300u));
    // 0x1b878c: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x1b878cu;
    SET_GPR_VEC(ctx, 25, FAST_READ128(0x40D310u));
    // 0x1b8790: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x1b8790u;
    SET_GPR_VEC(ctx, 28, FAST_READ128(0x40D340u));
    // 0x1b8794: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x1b8794u;
    SET_GPR_VEC(ctx, 29, FAST_READ128(0x40D350u));
    // 0x1b8798: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x1b8798u;
    SET_GPR_VEC(ctx, 30, FAST_READ128(0x40D360u));
    // 0x1b879c: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x1b879cu;
    SET_GPR_VEC(ctx, 31, FAST_READ128(0x40D370u));
    // 0x1b87a0: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x1b87a0u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
    // 0x1b87a4: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x1b87a4u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)19);
    // 0x1b87a8: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x1b87a8u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
    // 0x1b87ac: 0x40f  sync.p
    ctx->pc = 0x1b87acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b87b0: 0x42000018  eret
    ctx->pc = 0x1b87b0u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
    ctx->pc = 0x1b87b4u;
}
