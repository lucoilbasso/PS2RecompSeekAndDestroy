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

// Function: caseD_73
// Address: 0x1d1908 - 0x1d1920
void caseD_73_0x1d1908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_73_0x1d1908");
#endif

    ctx->pc = 0x1d1908u;

    // 0x1d1908: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1d1908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d190c: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1d190cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1910: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1910u;
    {
        const bool branch_taken_0x1d1910 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1910u;
        // 0x1d1914: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1910) {
            ctx->pc = 0x1D1920u;
            return;
        }
    }
    ctx->pc = 0x1D1918u;
    // 0x1d1918: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d1918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d191c: 0x2455c408  addiu       $s5, $v0, -0x3BF8
    ctx->pc = 0x1d191cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951944));
    ctx->pc = 0x1d1920u;
}
