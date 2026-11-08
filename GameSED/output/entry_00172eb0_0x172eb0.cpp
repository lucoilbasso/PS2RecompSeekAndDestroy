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

// Function: entry_00172eb0
// Address: 0x172eb0 - 0x172ec4
void entry_00172eb0_0x172eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172eb0_0x172eb0");
#endif

    ctx->pc = 0x172eb0u;

    // 0x172eb0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x172eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x172eb4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x172eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x172eb8: 0x1440fe69  bnez        $v0, . + 4 + (-0x197 << 2)
    ctx->pc = 0x172EB8u;
    {
        const bool branch_taken_0x172eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172EB8u;
        // 0x172ebc: 0xafa40044  sw          $a0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172eb8) {
            ctx->pc = 0x172860u;
            return;
        }
    }
    ctx->pc = 0x172EC0u;
    // 0x172ec0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172ec4u;
}
