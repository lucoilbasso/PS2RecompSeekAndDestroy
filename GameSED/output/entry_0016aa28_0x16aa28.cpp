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

// Function: entry_0016aa28
// Address: 0x16aa28 - 0x16aa40
void entry_0016aa28_0x16aa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016aa28_0x16aa28");
#endif

    ctx->pc = 0x16aa28u;

    // 0x16aa28: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16AA28u;
    {
        const bool branch_taken_0x16aa28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA28u;
        // 0x16aa2c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa28) {
            ctx->pc = 0x16AA48u;
            return;
        }
    }
    ctx->pc = 0x16AA30u;
    // 0x16aa30: 0x50a20006  beql        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16AA30u;
    {
        const bool branch_taken_0x16aa30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x16aa30) {
            ctx->pc = 0x16AA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AA30u;
            // 0x16aa34: 0x26301224  addiu       $s0, $s1, 0x1224 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4644));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AA4Cu;
            return;
        }
    }
    ctx->pc = 0x16AA38u;
    // 0x16aa38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AA38u;
    {
        const bool branch_taken_0x16aa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aa38) {
            ctx->pc = 0x16AA4Cu;
            return;
        }
    }
    ctx->pc = 0x16AA40u;
}
