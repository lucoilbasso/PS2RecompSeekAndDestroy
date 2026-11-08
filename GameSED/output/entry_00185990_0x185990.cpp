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

// Function: entry_00185990
// Address: 0x185990 - 0x18599c
void entry_00185990_0x185990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185990_0x185990");
#endif

    ctx->pc = 0x185990u;

    // 0x185990: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x185990u;
    {
        const bool branch_taken_0x185990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x185994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185990u;
        // 0x185994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185990) {
            ctx->pc = 0x18599Cu;
            return;
        }
    }
    ctx->pc = 0x185998u;
    // 0x185998: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x185998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->pc = 0x18599cu;
}
