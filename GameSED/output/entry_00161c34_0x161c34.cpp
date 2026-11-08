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

// Function: entry_00161c34
// Address: 0x161c34 - 0x161c60
void entry_00161c34_0x161c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161c34_0x161c34");
#endif

    ctx->pc = 0x161c34u;

    // 0x161c34: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x161c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161c38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161c3c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x161c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161c40: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x161C40u;
    {
        const bool branch_taken_0x161c40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161c40) {
            ctx->pc = 0x161C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161C40u;
            // 0x161c44: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161C74u;
            return;
        }
    }
    ctx->pc = 0x161C48u;
    // 0x161c48: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x161c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161c4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x161C4Cu;
    {
        const bool branch_taken_0x161c4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C4Cu;
        // 0x161c50: 0xc4600038  lwc1        $f0, 0x38($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c4c) {
            ctx->pc = 0x161C60u;
            return;
        }
    }
    ctx->pc = 0x161C54u;
    // 0x161c54: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x161c54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161c58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161C58u;
    {
        const bool branch_taken_0x161c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161c58) {
            ctx->pc = 0x161C64u;
            return;
        }
    }
    ctx->pc = 0x161C60u;
}
