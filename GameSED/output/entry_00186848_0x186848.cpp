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

// Function: entry_00186848
// Address: 0x186848 - 0x186864
void entry_00186848_0x186848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186848_0x186848");
#endif

    ctx->pc = 0x186848u;

    // 0x186848: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x186848u;
    {
        const bool branch_taken_0x186848 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x18684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186848u;
        // 0x18684c: 0x8c710008  lw          $s1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186848) {
            ctx->pc = 0x186864u;
            return;
        }
    }
    ctx->pc = 0x186850u;
    // 0x186850: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x186850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186854: 0x502024  and         $a0, $v0, $s0
    ctx->pc = 0x186854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x186858: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x186858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x18685c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18685Cu;
    {
        const bool branch_taken_0x18685c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18685c) {
            ctx->pc = 0x186878u;
            return;
        }
    }
    ctx->pc = 0x186864u;
}
