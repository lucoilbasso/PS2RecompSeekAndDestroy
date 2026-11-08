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

// Function: entry_001859d0
// Address: 0x1859d0 - 0x1859ec
void entry_001859d0_0x1859d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001859d0_0x1859d0");
#endif

    ctx->pc = 0x1859d0u;

    // 0x1859d0: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1859D0u;
    {
        const bool branch_taken_0x1859d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1859D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859D0u;
        // 0x1859d4: 0x8c720008  lw          $s2, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859d0) {
            ctx->pc = 0x1859ECu;
            return;
        }
    }
    ctx->pc = 0x1859D8u;
    // 0x1859d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1859d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1859dc: 0x532024  and         $a0, $v0, $s3
    ctx->pc = 0x1859dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x1859e0: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x1859e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x1859e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1859E4u;
    {
        const bool branch_taken_0x1859e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1859e4) {
            ctx->pc = 0x185A00u;
            return;
        }
    }
    ctx->pc = 0x1859ECu;
}
