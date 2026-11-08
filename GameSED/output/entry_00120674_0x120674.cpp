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

// Function: entry_00120674
// Address: 0x120674 - 0x120684
void entry_00120674_0x120674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120674_0x120674");
#endif

    ctx->pc = 0x120674u;

    // 0x120674: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x120674u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x120678: 0x2962001a  slti        $v0, $t3, 0x1A
    ctx->pc = 0x120678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x12067c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x12067Cu;
    {
        const bool branch_taken_0x12067c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12067Cu;
        // 0x120680: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12067c) {
            ctx->pc = 0x120558u;
            return;
        }
    }
    ctx->pc = 0x120684u;
}
