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

// Function: entry_00122710
// Address: 0x122710 - 0x12271c
void entry_00122710_0x122710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122710_0x122710");
#endif

    ctx->pc = 0x122710u;

    // 0x122710: 0x8c820158  lw          $v0, 0x158($a0)
    ctx->pc = 0x122710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x122714: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x122714u;
    {
        const bool branch_taken_0x122714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122714u;
        // 0x122718: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122714) {
            ctx->pc = 0x122728u;
            return;
        }
    }
    ctx->pc = 0x12271Cu;
}
