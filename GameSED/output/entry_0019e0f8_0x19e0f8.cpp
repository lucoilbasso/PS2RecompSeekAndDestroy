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

// Function: entry_0019e0f8
// Address: 0x19e0f8 - 0x19e11c
void entry_0019e0f8_0x19e0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e0f8_0x19e0f8");
#endif

    ctx->pc = 0x19e0f8u;

    // 0x19e0f8: 0xc780861c  lwc1        $f0, -0x79E4($gp)
    ctx->pc = 0x19e0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e0fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19e0fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e100: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19E100u;
    {
        const bool branch_taken_0x19e100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E100u;
        // 0x19e104: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e100) {
            ctx->pc = 0x19E11Cu;
            return;
        }
    }
    ctx->pc = 0x19E108u;
    // 0x19e108: 0xc7808620  lwc1        $f0, -0x79E0($gp)
    ctx->pc = 0x19e108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e10c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19e10cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e110: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x19E110u;
    {
        const bool branch_taken_0x19e110 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e110) {
            ctx->pc = 0x19E114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E110u;
            // 0x19e114: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E11Cu;
            return;
        }
    }
    ctx->pc = 0x19E118u;
    // 0x19e118: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x19e118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x19e11cu;
}
