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

// Function: caseD_1
// Address: 0x1ab250 - 0x1ab264
void caseD_1_0x1ab250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1ab250");
#endif

    ctx->pc = 0x1ab250u;

    // 0x1ab250: 0x1481818  mult        $v1, $t2, $t0
    ctx->pc = 0x1ab250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ab254: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ab254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ab258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ab258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ab25c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB25Cu;
    {
        const bool branch_taken_0x1ab25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB25Cu;
        // 0x1ab260: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab25c) {
            ctx->pc = 0x1AB284u;
            return;
        }
    }
    ctx->pc = 0x1AB264u;
}
