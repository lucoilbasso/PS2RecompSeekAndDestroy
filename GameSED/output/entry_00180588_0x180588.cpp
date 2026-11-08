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

// Function: entry_00180588
// Address: 0x180588 - 0x1805a4
void entry_00180588_0x180588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180588_0x180588");
#endif

    ctx->pc = 0x180588u;

    // 0x180588: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x180588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x18058c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18058Cu;
    {
        const bool branch_taken_0x18058c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18058c) {
            ctx->pc = 0x1805A4u;
            return;
        }
    }
    ctx->pc = 0x180594u;
    // 0x180594: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x180594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180598: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x180598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18059c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x18059Cu;
    {
        const bool branch_taken_0x18059c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18059c) {
            ctx->pc = 0x1805E8u;
            return;
        }
    }
    ctx->pc = 0x1805A4u;
}
