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

// Function: entry_0015588c
// Address: 0x15588c - 0x155898
void entry_0015588c_0x15588c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015588c_0x15588c");
#endif

    ctx->pc = 0x15588cu;

    // 0x15588c: 0x2842001b  slti        $v0, $v0, 0x1B
    ctx->pc = 0x15588cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x155890: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x155890u;
    {
        const bool branch_taken_0x155890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155890) {
            ctx->pc = 0x155894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155890u;
            // 0x155894: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1558A4u;
            return;
        }
    }
    ctx->pc = 0x155898u;
}
