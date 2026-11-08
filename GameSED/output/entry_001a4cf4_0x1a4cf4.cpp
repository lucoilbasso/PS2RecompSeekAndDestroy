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

// Function: entry_001a4cf4
// Address: 0x1a4cf4 - 0x1a4d18
void entry_001a4cf4_0x1a4cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4cf4_0x1a4cf4");
#endif

    ctx->pc = 0x1a4cf4u;

    // 0x1a4cf4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a4cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4cf8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a4cf8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a4cfc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4CFCu;
    {
        const bool branch_taken_0x1a4cfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4cfc) {
            ctx->pc = 0x1A4D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4CFCu;
            // 0x1a4d00: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4D18u;
            return;
        }
    }
    ctx->pc = 0x1A4D04u;
    // 0x1a4d04: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1a4d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4d08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4d0c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a4d0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a4d10: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1A4D10u;
    {
        const bool branch_taken_0x1a4d10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4d10) {
            ctx->pc = 0x1A4D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4D10u;
            // 0x1a4d14: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4D18u;
            return;
        }
    }
    ctx->pc = 0x1A4D18u;
}
