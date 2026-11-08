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

// Function: entry_001a7fbc
// Address: 0x1a7fbc - 0x1a7fcc
void entry_001a7fbc_0x1a7fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7fbc_0x1a7fbc");
#endif

    ctx->pc = 0x1a7fbcu;

    // 0x1a7fbc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a7fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a7fc0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a7fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7fc4: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1A7FC4u;
    {
        const bool branch_taken_0x1a7fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7fc4) {
            ctx->pc = 0x1A7FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7FC4u;
            // 0x1a7fc8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7F20u;
            return;
        }
    }
    ctx->pc = 0x1A7FCCu;
}
