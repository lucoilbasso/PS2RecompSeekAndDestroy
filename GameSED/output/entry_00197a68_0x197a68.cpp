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

// Function: entry_00197a68
// Address: 0x197a68 - 0x197a78
void entry_00197a68_0x197a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197a68_0x197a68");
#endif

    ctx->pc = 0x197a68u;

    // 0x197a68: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x197a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197a6c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x197A6Cu;
    {
        const bool branch_taken_0x197a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197a6c) {
            ctx->pc = 0x197A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197A6Cu;
            // 0x197a70: 0x8e2301b4  lw          $v1, 0x1B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197A20u;
            return;
        }
    }
    ctx->pc = 0x197A74u;
    // 0x197a74: 0x8e2401b4  lw          $a0, 0x1B4($s1)
    ctx->pc = 0x197a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    ctx->pc = 0x197a78u;
}
