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

// Function: entry_0014960c
// Address: 0x14960c - 0x14961c
void entry_0014960c_0x14960c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014960c_0x14960c");
#endif

    ctx->pc = 0x14960cu;

    // 0x14960c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14960cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x149610: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149614: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x149614u;
    {
        const bool branch_taken_0x149614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149614u;
        // 0x149618: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149614) {
            ctx->pc = 0x1495E0u;
            return;
        }
    }
    ctx->pc = 0x14961Cu;
}
