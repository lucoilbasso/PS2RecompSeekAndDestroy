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

// Function: entry_00188d28
// Address: 0x188d28 - 0x188d3c
void entry_00188d28_0x188d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188d28_0x188d28");
#endif

    ctx->pc = 0x188d28u;

    // 0x188d28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188d2c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x188D2Cu;
    {
        const bool branch_taken_0x188d2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x188D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D2Cu;
        // 0x188d30: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d2c) {
            ctx->pc = 0x188D3Cu;
            return;
        }
    }
    ctx->pc = 0x188D34u;
    // 0x188d34: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x188d34u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x188d38: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x188d38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188d3cu;
}
