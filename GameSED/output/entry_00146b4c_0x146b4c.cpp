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

// Function: entry_00146b4c
// Address: 0x146b4c - 0x146b68
void entry_00146b4c_0x146b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146b4c_0x146b4c");
#endif

    ctx->pc = 0x146b4cu;

    // 0x146b4c: 0x460a5834  c.lt.s      $f11, $f10
    ctx->pc = 0x146b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146b50: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x146B50u;
    {
        const bool branch_taken_0x146b50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146b50) {
            ctx->pc = 0x146B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146B50u;
            // 0x146b54: 0x46065801  sub.s       $f0, $f11, $f6 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x146B68u;
            return;
        }
    }
    ctx->pc = 0x146B58u;
    // 0x146b58: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x146b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146b5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x146B5Cu;
    {
        const bool branch_taken_0x146b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B5Cu;
        // 0x146b60: 0x460052c6  mov.s       $f11, $f10 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b5c) {
            ctx->pc = 0x146B6Cu;
            return;
        }
    }
    ctx->pc = 0x146B64u;
    // 0x146b64: 0x0  nop
    ctx->pc = 0x146b64u;
    // NOP
    ctx->pc = 0x146b68u;
}
