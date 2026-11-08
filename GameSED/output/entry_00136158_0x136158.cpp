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

// Function: entry_00136158
// Address: 0x136158 - 0x136168
void entry_00136158_0x136158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136158_0x136158");
#endif

    ctx->pc = 0x136158u;

    // 0x136158: 0x41827  nor         $v1, $zero, $a0
    ctx->pc = 0x136158u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x13615c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13615cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x136160: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x136160u;
    {
        const bool branch_taken_0x136160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136160u;
        // 0x136164: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136160) {
            ctx->pc = 0x13619Cu;
            return;
        }
    }
    ctx->pc = 0x136168u;
}
