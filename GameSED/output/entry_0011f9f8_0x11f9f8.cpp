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

// Function: entry_0011f9f8
// Address: 0x11f9f8 - 0x11fa38
void entry_0011f9f8_0x11f9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f9f8_0x11f9f8");
#endif

    ctx->pc = 0x11f9f8u;

    // 0x11f9f8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x11f9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x11f9fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11f9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fa00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fa04: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11fa04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11fa08: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11fa08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11fa0c: 0xe44100e0  swc1        $f1, 0xE0($v0)
    ctx->pc = 0x11fa0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x11fa10: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x11fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11fa14: 0x54430015  bnel        $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x11FA14u;
    {
        const bool branch_taken_0x11fa14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11fa14) {
            ctx->pc = 0x11FA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FA14u;
            // 0x11fa18: 0x2e840003  sltiu       $a0, $s4, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FA6Cu;
            return;
        }
    }
    ctx->pc = 0x11FA1Cu;
    // 0x11fa1c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x11fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fa20: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x11fa20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11fa24: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x11FA24u;
    {
        const bool branch_taken_0x11fa24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11fa24) {
            ctx->pc = 0x11FA38u;
            return;
        }
    }
    ctx->pc = 0x11FA2Cu;
    // 0x11fa2c: 0xc7808084  lwc1        $f0, -0x7F7C($gp)
    ctx->pc = 0x11fa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fa30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11FA30u;
    {
        const bool branch_taken_0x11fa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA30u;
        // 0x11fa34: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa30) {
            ctx->pc = 0x11FA40u;
            return;
        }
    }
    ctx->pc = 0x11FA38u;
}
