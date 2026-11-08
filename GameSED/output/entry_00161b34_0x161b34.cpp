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

// Function: entry_00161b34
// Address: 0x161b34 - 0x161b60
void entry_00161b34_0x161b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161b34_0x161b34");
#endif

    ctx->pc = 0x161b34u;

    // 0x161b34: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x161b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161b38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161b3c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x161b3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b40: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x161B40u;
    {
        const bool branch_taken_0x161b40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161b40) {
            ctx->pc = 0x161B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161B40u;
            // 0x161b44: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161B74u;
            return;
        }
    }
    ctx->pc = 0x161B48u;
    // 0x161b48: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x161b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x161B4Cu;
    {
        const bool branch_taken_0x161b4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B4Cu;
        // 0x161b50: 0xc4600038  lwc1        $f0, 0x38($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b4c) {
            ctx->pc = 0x161B60u;
            return;
        }
    }
    ctx->pc = 0x161B54u;
    // 0x161b54: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x161b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161B58u;
    {
        const bool branch_taken_0x161b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161b58) {
            ctx->pc = 0x161B64u;
            return;
        }
    }
    ctx->pc = 0x161B60u;
}
