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

// Function: entry_0012d248
// Address: 0x12d248 - 0x12d254
void entry_0012d248_0x12d248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d248_0x12d248");
#endif

    ctx->pc = 0x12d248u;

    // 0x12d248: 0x8c820158  lw          $v0, 0x158($a0)
    ctx->pc = 0x12d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x12d24c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D24Cu;
    {
        const bool branch_taken_0x12d24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D24Cu;
        // 0x12d250: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d24c) {
            ctx->pc = 0x12D260u;
            return;
        }
    }
    ctx->pc = 0x12D254u;
}
