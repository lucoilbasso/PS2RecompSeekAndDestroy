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

// Function: entry_0012cb94
// Address: 0x12cb94 - 0x12cbd4
void entry_0012cb94_0x12cb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cb94_0x12cb94");
#endif

    ctx->pc = 0x12cb94u;

    // 0x12cb94: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x12CB94u;
    {
        const bool branch_taken_0x12cb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cb94) {
            ctx->pc = 0x12CB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CB94u;
            // 0x12cb98: 0xc60100d4  lwc1        $f1, 0xD4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CC08u;
            return;
        }
    }
    ctx->pc = 0x12CB9Cu;
    // 0x12cb9c: 0xc6030124  lwc1        $f3, 0x124($s0)
    ctx->pc = 0x12cb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12cba0: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x12cba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cba4: 0xc6020128  lwc1        $f2, 0x128($s0)
    ctx->pc = 0x12cba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12cba8: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x12cba8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x12cbac: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x12cbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cbb0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x12cbb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12cbb4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x12cbb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12cbb8: 0xe6030118  swc1        $f3, 0x118($s0)
    ctx->pc = 0x12cbb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x12cbbc: 0xe602011c  swc1        $f2, 0x11C($s0)
    ctx->pc = 0x12cbbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x12cbc0: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x12cbc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12cbc4: 0xe6010124  swc1        $f1, 0x124($s0)
    ctx->pc = 0x12cbc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x12cbc8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12CBC8u;
    {
        const bool branch_taken_0x12cbc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBC8u;
        // 0x12cbcc: 0xe6000128  swc1        $f0, 0x128($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbc8) {
            ctx->pc = 0x12CBD4u;
            return;
        }
    }
    ctx->pc = 0x12CBD0u;
    // 0x12cbd0: 0xe6040124  swc1        $f4, 0x124($s0)
    ctx->pc = 0x12cbd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    ctx->pc = 0x12cbd4u;
}
