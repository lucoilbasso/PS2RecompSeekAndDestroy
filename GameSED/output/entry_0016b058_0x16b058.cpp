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

// Function: entry_0016b058
// Address: 0x16b058 - 0x16b070
void entry_0016b058_0x16b058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b058_0x16b058");
#endif

    ctx->pc = 0x16b058u;

    // 0x16b058: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B058u;
    {
        const bool branch_taken_0x16b058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B058u;
        // 0x16b05c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b058) {
            ctx->pc = 0x16B078u;
            return;
        }
    }
    ctx->pc = 0x16B060u;
    // 0x16b060: 0x50a20006  beql        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B060u;
    {
        const bool branch_taken_0x16b060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b060) {
            ctx->pc = 0x16B064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B060u;
            // 0x16b064: 0x24831224  addiu       $v1, $a0, 0x1224 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4644));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B07Cu;
            return;
        }
    }
    ctx->pc = 0x16B068u;
    // 0x16b068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B068u;
    {
        const bool branch_taken_0x16b068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b068) {
            ctx->pc = 0x16B07Cu;
            return;
        }
    }
    ctx->pc = 0x16B070u;
}
