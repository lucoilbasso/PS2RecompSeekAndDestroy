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

// Function: entry_00161a1c
// Address: 0x161a1c - 0x161a3c
void entry_00161a1c_0x161a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161a1c_0x161a1c");
#endif

    ctx->pc = 0x161a1cu;

    // 0x161a1c: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x161a1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161a20: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x161A20u;
    {
        const bool branch_taken_0x161a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161a20) {
            ctx->pc = 0x161A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161A20u;
            // 0x161a24: 0xc4600034  lwc1        $f0, 0x34($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x161A3Cu;
            return;
        }
    }
    ctx->pc = 0x161A28u;
    // 0x161a28: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x161a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161a2c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x161a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161a30: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x161A30u;
    {
        const bool branch_taken_0x161a30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161a30) {
            ctx->pc = 0x161A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161A30u;
            // 0x161a34: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161A7Cu;
            return;
        }
    }
    ctx->pc = 0x161A38u;
    // 0x161a38: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x161a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x161a3cu;
}
