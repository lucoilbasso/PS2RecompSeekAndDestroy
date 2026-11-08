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

// Function: entry_00161c14
// Address: 0x161c14 - 0x161c34
void entry_00161c14_0x161c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161c14_0x161c14");
#endif

    ctx->pc = 0x161c14u;

    // 0x161c14: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x161c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161c18: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x161C18u;
    {
        const bool branch_taken_0x161c18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161c18) {
            ctx->pc = 0x161C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161C18u;
            // 0x161c1c: 0xc4600034  lwc1        $f0, 0x34($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x161C34u;
            return;
        }
    }
    ctx->pc = 0x161C20u;
    // 0x161c20: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x161c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161c24: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x161c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161c28: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x161C28u;
    {
        const bool branch_taken_0x161c28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161c28) {
            ctx->pc = 0x161C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161C28u;
            // 0x161c2c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161C74u;
            return;
        }
    }
    ctx->pc = 0x161C30u;
    // 0x161c30: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x161c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x161c34u;
}
