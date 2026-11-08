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

// Function: entry_001b3520
// Address: 0x1b3520 - 0x1b3550
void entry_001b3520_0x1b3520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3520_0x1b3520");
#endif

    ctx->pc = 0x1b3520u;

    // 0x1b3520: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1b3520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1b3524: 0x24050440  addiu       $a1, $zero, 0x440
    ctx->pc = 0x1b3524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x1b3528: 0x8c82aa00  lw          $v0, -0x5600($a0)
    ctx->pc = 0x1b3528u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24AA00u));
    // 0x1b352c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1b352cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1b3530: 0x2463a710  addiu       $v1, $v1, -0x58F0
    ctx->pc = 0x1b3530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944528));
    // 0x1b3534: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1b3534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1b3538: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1b3538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b353c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3540: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1b3540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1b3544: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b3544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3548: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B3548u;
    {
        const bool branch_taken_0x1b3548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3548u;
        // 0x1b354c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3548) {
            ctx->pc = 0x1B3578u;
            return;
        }
    }
    ctx->pc = 0x1B3550u;
}
