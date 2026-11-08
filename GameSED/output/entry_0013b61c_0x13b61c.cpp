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

// Function: entry_0013b61c
// Address: 0x13b61c - 0x13b644
void entry_0013b61c_0x13b61c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b61c_0x13b61c");
#endif

    ctx->pc = 0x13b61cu;

    // 0x13b61c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13b620: 0x5662000b  bnel        $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13B620u;
    {
        const bool branch_taken_0x13b620 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x13b620) {
            ctx->pc = 0x13B624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B620u;
            // 0x13b624: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B650u;
            return;
        }
    }
    ctx->pc = 0x13B628u;
    // 0x13b628: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x13b628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b62c: 0x46140028  max.s       $f0, $f0, $f20
    ctx->pc = 0x13b62cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[20]);
    // 0x13b630: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x13b630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b634: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13B634u;
    {
        const bool branch_taken_0x13b634 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b634) {
            ctx->pc = 0x13B644u;
            return;
        }
    }
    ctx->pc = 0x13B63Cu;
    // 0x13b63c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x13b63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x13b640: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x13b644u;
}
