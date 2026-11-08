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

// Function: entry_00137100
// Address: 0x137100 - 0x137110
void entry_00137100_0x137100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137100_0x137100");
#endif

    ctx->pc = 0x137100u;

    // 0x137100: 0x14c0004a  bnez        $a2, . + 4 + (0x4A << 2)
    ctx->pc = 0x137100u;
    {
        const bool branch_taken_0x137100 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x137100) {
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x137108u;
    // 0x137108: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x137108u;
    {
        const bool branch_taken_0x137108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137108u;
        // 0x13710c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137108) {
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x137110u;
}
