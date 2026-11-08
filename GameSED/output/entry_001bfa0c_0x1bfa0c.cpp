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

// Function: entry_001bfa0c
// Address: 0x1bfa0c - 0x1bfa1c
void entry_001bfa0c_0x1bfa0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfa0c_0x1bfa0c");
#endif

    ctx->pc = 0x1bfa0cu;

    // 0x1bfa0c: 0x268206c0  addiu       $v0, $s4, 0x6C0
    ctx->pc = 0x1bfa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1728));
    // 0x1bfa10: 0x269e06b8  addiu       $fp, $s4, 0x6B8
    ctx->pc = 0x1bfa10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1720));
    // 0x1bfa14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFA14u;
    {
        const bool branch_taken_0x1bfa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA14u;
        // 0x1bfa18: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa14) {
            ctx->pc = 0x1BFA28u;
            return;
        }
    }
    ctx->pc = 0x1BFA1Cu;
}
