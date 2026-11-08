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

// Function: entry_001a690c
// Address: 0x1a690c - 0x1a6928
void entry_001a690c_0x1a690c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a690c_0x1a690c");
#endif

    ctx->pc = 0x1a690cu;

    // 0x1a690c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1a690cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1a6910: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6910u;
    {
        const bool branch_taken_0x1a6910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6910u;
        // 0x1a6914: 0xb0102a  slt         $v0, $a1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6910) {
            ctx->pc = 0x1A6930u;
            return;
        }
    }
    ctx->pc = 0x1A6918u;
    // 0x1a6918: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x1a6918u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1a691c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a691cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a6920: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A6920u;
    {
        const bool branch_taken_0x1a6920 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a6920) {
            ctx->pc = 0x1A6924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6920u;
            // 0x1a6924: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6928u;
            return;
        }
    }
    ctx->pc = 0x1A6928u;
}
