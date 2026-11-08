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

// Function: entry_0013843c
// Address: 0x13843c - 0x138458
void entry_0013843c_0x13843c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013843c_0x13843c");
#endif

    ctx->pc = 0x13843cu;

    // 0x13843c: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x13843cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x138440: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138440u;
    {
        const bool branch_taken_0x138440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138440u;
        // 0x138444: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138440) {
            ctx->pc = 0x138458u;
            return;
        }
    }
    ctx->pc = 0x138448u;
    // 0x138448: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x138448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x13844c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x13844cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x138450: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x138450u;
    {
        const bool branch_taken_0x138450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138450) {
            ctx->pc = 0x138454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138450u;
            // 0x138454: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1383D0u;
            return;
        }
    }
    ctx->pc = 0x138458u;
}
