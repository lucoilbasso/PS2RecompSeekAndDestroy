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

// Function: entry_0014c374
// Address: 0x14c374 - 0x14c384
void entry_0014c374_0x14c374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c374_0x14c374");
#endif

    ctx->pc = 0x14c374u;

    // 0x14c374: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14c374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14c378: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x14c378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14c37c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14C37Cu;
    {
        const bool branch_taken_0x14c37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C37Cu;
        // 0x14c380: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c37c) {
            ctx->pc = 0x14C338u;
            return;
        }
    }
    ctx->pc = 0x14C384u;
}
