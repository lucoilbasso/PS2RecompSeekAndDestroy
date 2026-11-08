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

// Function: entry_0012ad4c
// Address: 0x12ad4c - 0x12ad70
void entry_0012ad4c_0x12ad4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ad4c_0x12ad4c");
#endif

    ctx->pc = 0x12ad4cu;

    // 0x12ad4c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x12ad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ad50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12ad50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12ad54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12ad54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12ad58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12ad58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12ad5c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12ad5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ad60: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12AD60u;
    {
        const bool branch_taken_0x12ad60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD60u;
        // 0x12ad64: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad60) {
            ctx->pc = 0x12AD70u;
            return;
        }
    }
    ctx->pc = 0x12AD68u;
    // 0x12ad68: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12ad68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x12ad6c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x12ad6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    ctx->pc = 0x12ad70u;
}
