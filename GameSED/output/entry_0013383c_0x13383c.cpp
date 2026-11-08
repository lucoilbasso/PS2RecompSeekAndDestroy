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

// Function: entry_0013383c
// Address: 0x13383c - 0x133858
void entry_0013383c_0x13383c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013383c_0x13383c");
#endif

    ctx->pc = 0x13383cu;

    // 0x13383c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x13383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133840: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x133840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133844: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x133844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133848: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x133848u;
    {
        const bool branch_taken_0x133848 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133848u;
        // 0x13384c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133848) {
            ctx->pc = 0x133858u;
            return;
        }
    }
    ctx->pc = 0x133850u;
    // 0x133850: 0x10000214  b           . + 4 + (0x214 << 2)
    ctx->pc = 0x133850u;
    {
        const bool branch_taken_0x133850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133850u;
        // 0x133854: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133850) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133858u;
}
