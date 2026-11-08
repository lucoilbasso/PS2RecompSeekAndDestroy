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

// Function: entry_00161d0c
// Address: 0x161d0c - 0x161d2c
void entry_00161d0c_0x161d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161d0c_0x161d0c");
#endif

    ctx->pc = 0x161d0cu;

    // 0x161d0c: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x161d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161d10: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x161D10u;
    {
        const bool branch_taken_0x161d10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161d10) {
            ctx->pc = 0x161D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161D10u;
            // 0x161d14: 0xc4600034  lwc1        $f0, 0x34($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x161D2Cu;
            return;
        }
    }
    ctx->pc = 0x161D18u;
    // 0x161d18: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x161d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161d1c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x161d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161d20: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x161D20u;
    {
        const bool branch_taken_0x161d20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161d20) {
            ctx->pc = 0x161D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161D20u;
            // 0x161d24: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161D6Cu;
            return;
        }
    }
    ctx->pc = 0x161D28u;
    // 0x161d28: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x161d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x161d2cu;
}
