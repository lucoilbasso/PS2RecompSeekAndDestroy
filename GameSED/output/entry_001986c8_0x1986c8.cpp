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

// Function: entry_001986c8
// Address: 0x1986c8 - 0x198738
void entry_001986c8_0x1986c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001986c8_0x1986c8");
#endif

    ctx->pc = 0x1986c8u;

    // 0x1986c8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1986c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986cc: 0x260203c0  addiu       $v0, $s0, 0x3C0
    ctx->pc = 0x1986ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x1986d0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1986d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1986d4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1986d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1986d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1986d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1986dc: 0xc6800190  lwc1        $f0, 0x190($s4)
    ctx->pc = 0x1986dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1986e0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1986e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1986e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1986e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1986e8: 0xe60003d8  swc1        $f0, 0x3D8($s0)
    ctx->pc = 0x1986e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 984), bits); }
    // 0x1986ec: 0xc4c00174  lwc1        $f0, 0x174($a2)
    ctx->pc = 0x1986ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1986f0: 0xc4c10170  lwc1        $f1, 0x170($a2)
    ctx->pc = 0x1986f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1986f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1986f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1986f8: 0xe60103dc  swc1        $f1, 0x3DC($s0)
    ctx->pc = 0x1986f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 988), bits); }
    // 0x1986fc: 0xc68001a0  lwc1        $f0, 0x1A0($s4)
    ctx->pc = 0x1986fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198700: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x198700u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198704: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x198704u;
    {
        const bool branch_taken_0x198704 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x198704) {
            ctx->pc = 0x198708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198704u;
            // 0x198708: 0xe60203e4  swc1        $f2, 0x3E4($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 996), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x198740u;
            return;
        }
    }
    ctx->pc = 0x19870Cu;
    // 0x19870c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x19870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x198710: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x198710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x198714: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x198714u;
    {
        const bool branch_taken_0x198714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198714) {
            ctx->pc = 0x198718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198714u;
            // 0x198718: 0xe60003e4  swc1        $f0, 0x3E4($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 996), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x198738u;
            return;
        }
    }
    ctx->pc = 0x19871Cu;
    // 0x19871c: 0xe60003e0  swc1        $f0, 0x3E0($s0)
    ctx->pc = 0x19871cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 992), bits); }
    // 0x198720: 0xc7818d88  lwc1        $f1, -0x7278($gp)
    ctx->pc = 0x198720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198724: 0xc68001a0  lwc1        $f0, 0x1A0($s4)
    ctx->pc = 0x198724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198728: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x198728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19872c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19872Cu;
    {
        const bool branch_taken_0x19872c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19872Cu;
        // 0x198730: 0xe60003e4  swc1        $f0, 0x3E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 996), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19872c) {
            ctx->pc = 0x19874Cu;
            return;
        }
    }
    ctx->pc = 0x198734u;
    // 0x198734: 0x0  nop
    ctx->pc = 0x198734u;
    // NOP
    ctx->pc = 0x198738u;
}
