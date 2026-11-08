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

// Function: caseD_2
// Address: 0x1ab264 - 0x1ab270
void caseD_2_0x1ab264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1ab264");
#endif

    ctx->pc = 0x1ab264u;

    // 0x1ab264: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x1ab264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ab268: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB268u;
    {
        const bool branch_taken_0x1ab268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB268u;
        // 0x1ab26c: 0x230c3  sra         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab268) {
            ctx->pc = 0x1AB284u;
            return;
        }
    }
    ctx->pc = 0x1AB270u;
}
