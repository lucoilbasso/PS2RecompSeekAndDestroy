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

// Function: caseD_13
// Address: 0x1ab270 - 0x1ab27c
void caseD_13_0x1ab270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x1ab270");
#endif

    ctx->pc = 0x1ab270u;

    // 0x1ab270: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x1ab270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ab274: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB274u;
    {
        const bool branch_taken_0x1ab274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB274u;
        // 0x1ab278: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab274) {
            ctx->pc = 0x1AB284u;
            return;
        }
    }
    ctx->pc = 0x1AB27Cu;
}
