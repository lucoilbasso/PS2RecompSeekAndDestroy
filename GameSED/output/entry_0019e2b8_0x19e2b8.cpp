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

// Function: entry_0019e2b8
// Address: 0x19e2b8 - 0x19e2dc
void entry_0019e2b8_0x19e2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e2b8_0x19e2b8");
#endif

    ctx->pc = 0x19e2b8u;

    // 0x19e2b8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x19e2b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e2bc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19E2BCu;
    {
        const bool branch_taken_0x19e2bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2BCu;
        // 0x19e2c0: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2bc) {
            ctx->pc = 0x19E2DCu;
            return;
        }
    }
    ctx->pc = 0x19E2C4u;
    // 0x19e2c4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x19e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e2c8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19e2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19e2cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e2d0: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x19e2d0u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x19e2d4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19e2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19e2d8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x19e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x19e2dcu;
}
