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

// Function: entry_00149724
// Address: 0x149724 - 0x149734
void entry_00149724_0x149724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149724_0x149724");
#endif

    ctx->pc = 0x149724u;

    // 0x149724: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x149728: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14972c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x14972Cu;
    {
        const bool branch_taken_0x14972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14972Cu;
        // 0x149730: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14972c) {
            ctx->pc = 0x1496F8u;
            return;
        }
    }
    ctx->pc = 0x149734u;
}
