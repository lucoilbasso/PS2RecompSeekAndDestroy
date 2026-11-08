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

// Function: entry_001a2b68
// Address: 0x1a2b68 - 0x1a2b9c
void entry_001a2b68_0x1a2b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2b68_0x1a2b68");
#endif

    ctx->pc = 0x1a2b68u;

    // 0x1a2b68: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1a2b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2b6c: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x1a2b6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2b70: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x1A2B70u;
    {
        const bool branch_taken_0x1a2b70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B70u;
        // 0x1a2b74: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b70) {
            ctx->pc = 0x1A2BD0u;
            return;
        }
    }
    ctx->pc = 0x1A2B78u;
    // 0x1a2b78: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1a2b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2b7c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1a2b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2b80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a2b80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2b84: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2B84u;
    {
        const bool branch_taken_0x1a2b84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2b84) {
            ctx->pc = 0x1A2BA8u;
            return;
        }
    }
    ctx->pc = 0x1A2B8Cu;
    // 0x1a2b8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a2b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a2b90: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1a2b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2b94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1A2B94u;
    {
        const bool branch_taken_0x1a2b94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2b94) {
            ctx->pc = 0x1A2B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2B94u;
            // 0x1a2b98: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2B9Cu;
            return;
        }
    }
    ctx->pc = 0x1A2B9Cu;
}
