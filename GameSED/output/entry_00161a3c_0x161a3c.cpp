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

// Function: entry_00161a3c
// Address: 0x161a3c - 0x161a68
void entry_00161a3c_0x161a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161a3c_0x161a3c");
#endif

    ctx->pc = 0x161a3cu;

    // 0x161a3c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x161a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161a40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161a44: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x161a44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161a48: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x161A48u;
    {
        const bool branch_taken_0x161a48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161a48) {
            ctx->pc = 0x161A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161A48u;
            // 0x161a4c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161A7Cu;
            return;
        }
    }
    ctx->pc = 0x161A50u;
    // 0x161a50: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x161a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161a54: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x161A54u;
    {
        const bool branch_taken_0x161a54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A54u;
        // 0x161a58: 0xc4600038  lwc1        $f0, 0x38($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a54) {
            ctx->pc = 0x161A68u;
            return;
        }
    }
    ctx->pc = 0x161A5Cu;
    // 0x161a5c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x161a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161a60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161A60u;
    {
        const bool branch_taken_0x161a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a60) {
            ctx->pc = 0x161A6Cu;
            return;
        }
    }
    ctx->pc = 0x161A68u;
}
