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

// Function: entry_00156e70
// Address: 0x156e70 - 0x156e7c
void entry_00156e70_0x156e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156e70_0x156e70");
#endif

    ctx->pc = 0x156e70u;

    // 0x156e70: 0x90830017  lbu         $v1, 0x17($a0)
    ctx->pc = 0x156e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    // 0x156e74: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x156E74u;
    {
        const bool branch_taken_0x156e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E74u;
        // 0x156e78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e74) {
            ctx->pc = 0x156E8Cu;
            return;
        }
    }
    ctx->pc = 0x156E7Cu;
}
