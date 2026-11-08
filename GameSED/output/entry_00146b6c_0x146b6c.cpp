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

// Function: entry_00146b6c
// Address: 0x146b6c - 0x146b88
void entry_00146b6c_0x146b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146b6c_0x146b6c");
#endif

    ctx->pc = 0x146b6cu;

    // 0x146b6c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x146b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x146b70: 0x46091834  c.lt.s      $f3, $f9
    ctx->pc = 0x146b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146b74: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x146B74u;
    {
        const bool branch_taken_0x146b74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B74u;
        // 0x146b78: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b74) {
            ctx->pc = 0x146B88u;
            return;
        }
    }
    ctx->pc = 0x146B7Cu;
    // 0x146b7c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x146b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146b80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x146B80u;
    {
        const bool branch_taken_0x146b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B80u;
        // 0x146b84: 0x46001a46  mov.s       $f9, $f3 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b80) {
            ctx->pc = 0x146B90u;
            return;
        }
    }
    ctx->pc = 0x146B88u;
}
