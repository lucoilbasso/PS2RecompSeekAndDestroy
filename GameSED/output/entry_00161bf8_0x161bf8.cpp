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

// Function: entry_00161bf8
// Address: 0x161bf8 - 0x161c14
void entry_00161bf8_0x161bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161bf8_0x161bf8");
#endif

    ctx->pc = 0x161bf8u;

    // 0x161bf8: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x161bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161bfc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x161BFCu;
    {
        const bool branch_taken_0x161bfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161bfc) {
            ctx->pc = 0x161C14u;
            return;
        }
    }
    ctx->pc = 0x161C04u;
    // 0x161c04: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x161c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161c08: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x161c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161c0c: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x161C0Cu;
    {
        const bool branch_taken_0x161c0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161c0c) {
            ctx->pc = 0x161C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161C0Cu;
            // 0x161c10: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161C74u;
            return;
        }
    }
    ctx->pc = 0x161C14u;
}
