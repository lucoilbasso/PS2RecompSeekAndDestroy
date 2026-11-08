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

// Function: entry_0012d148
// Address: 0x12d148 - 0x12d158
void entry_0012d148_0x12d148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d148_0x12d148");
#endif

    ctx->pc = 0x12d148u;

    // 0x12d148: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x12d148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x12d14c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12D14Cu;
    {
        const bool branch_taken_0x12d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D14Cu;
        // 0x12d150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d14c) {
            ctx->pc = 0x12D17Cu;
            return;
        }
    }
    ctx->pc = 0x12D154u;
    // 0x12d154: 0x0  nop
    ctx->pc = 0x12d154u;
    // NOP
    ctx->pc = 0x12d158u;
}
