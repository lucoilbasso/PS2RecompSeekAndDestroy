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

// Function: entry_0019a9f4
// Address: 0x19a9f4 - 0x19aa18
void entry_0019a9f4_0x19a9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a9f4_0x19a9f4");
#endif

    ctx->pc = 0x19a9f4u;

    // 0x19a9f4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19a9f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19a9f8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x19a9f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9fc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x19a9fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aa00: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19AA00u;
    {
        const bool branch_taken_0x19aa00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA00u;
        // 0x19aa04: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa00) {
            ctx->pc = 0x19AA18u;
            return;
        }
    }
    ctx->pc = 0x19AA08u;
    // 0x19aa08: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x19aa08u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x19aa0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19AA0Cu;
    {
        const bool branch_taken_0x19aa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA0Cu;
        // 0x19aa10: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa0c) {
            ctx->pc = 0x19AA1Cu;
            return;
        }
    }
    ctx->pc = 0x19AA14u;
    // 0x19aa14: 0x0  nop
    ctx->pc = 0x19aa14u;
    // NOP
    ctx->pc = 0x19aa18u;
}
