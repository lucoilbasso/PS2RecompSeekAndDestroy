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

// Function: entry_00187e8c
// Address: 0x187e8c - 0x187e9c
void entry_00187e8c_0x187e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187e8c_0x187e8c");
#endif

    ctx->pc = 0x187e8cu;

    // 0x187e8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x187e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x187e90: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x187e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x187e94: 0x5440ffb4  bnel        $v0, $zero, . + 4 + (-0x4C << 2)
    ctx->pc = 0x187E94u;
    {
        const bool branch_taken_0x187e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187e94) {
            ctx->pc = 0x187E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187E94u;
            // 0x187e98: 0x8e4201bc  lw          $v0, 0x1BC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187D68u;
            return;
        }
    }
    ctx->pc = 0x187E9Cu;
}
