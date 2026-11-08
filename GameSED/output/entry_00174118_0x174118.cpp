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

// Function: entry_00174118
// Address: 0x174118 - 0x174128
void entry_00174118_0x174118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174118_0x174118");
#endif

    ctx->pc = 0x174118u;

    // 0x174118: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x174118u;
    {
        const bool branch_taken_0x174118 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174118u;
        // 0x17411c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174118) {
            ctx->pc = 0x174128u;
            return;
        }
    }
    ctx->pc = 0x174120u;
    // 0x174120: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174120u;
    {
        const bool branch_taken_0x174120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174120u;
        // 0x174124: 0x8cc5002c  lw          $a1, 0x2C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174120) {
            ctx->pc = 0x17412Cu;
            return;
        }
    }
    ctx->pc = 0x174128u;
}
