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

// Function: entry_001a2bd0
// Address: 0x1a2bd0 - 0x1a2c18
void entry_001a2bd0_0x1a2bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2bd0_0x1a2bd0");
#endif

    ctx->pc = 0x1a2bd0u;

    // 0x1a2bd0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1a2bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2bd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2bd8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1a2bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2bdc: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x1a2bdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2be0: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1A2BE0u;
    {
        const bool branch_taken_0x1a2be0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BE0u;
        // 0x1a2be4: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2be0) {
            ctx->pc = 0x1A2C34u;
            return;
        }
    }
    ctx->pc = 0x1A2BE8u;
    // 0x1a2be8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a2be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1a2bec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2bf0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x1a2bf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2bf4: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1A2BF4u;
    {
        const bool branch_taken_0x1a2bf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2bf4) {
            ctx->pc = 0x1A2BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BF4u;
            // 0x1a2bf8: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C1Cu;
            return;
        }
    }
    ctx->pc = 0x1A2BFCu;
    // 0x1a2bfc: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a2bfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a2c00: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a2c00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a2c04: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a2c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1a2c08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a2c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2c0c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1a2c0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1a2c10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A2C10u;
    {
        const bool branch_taken_0x1a2c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C10u;
        // 0x1a2c14: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c10) {
            ctx->pc = 0x1A2C38u;
            return;
        }
    }
    ctx->pc = 0x1A2C18u;
}
