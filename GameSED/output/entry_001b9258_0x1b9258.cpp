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

// Function: entry_001b9258
// Address: 0x1b9258 - 0x1b9278
void entry_001b9258_0x1b9258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9258_0x1b9258");
#endif

    ctx->pc = 0x1b9258u;

    // 0x1b9258: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B9258u;
    {
        const bool branch_taken_0x1b9258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9258u;
        // 0x1b925c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9258) {
            ctx->pc = 0x1B92A0u;
            return;
        }
    }
    ctx->pc = 0x1B9260u;
    // 0x1b9260: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9260u;
    {
        const bool branch_taken_0x1b9260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9260u;
        // 0x1b9264: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9260) {
            ctx->pc = 0x1B9278u;
            return;
        }
    }
    ctx->pc = 0x1B9268u;
    // 0x1b9268: 0x12050009  beq         $s0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9268u;
    {
        const bool branch_taken_0x1b9268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9268u;
        // 0x1b926c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9268) {
            ctx->pc = 0x1B9290u;
            return;
        }
    }
    ctx->pc = 0x1B9270u;
    // 0x1b9270: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1B9270u;
    {
        const bool branch_taken_0x1b9270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9270u;
        // 0x1b9274: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9270) {
            ctx->pc = 0x1B92D8u;
            return;
        }
    }
    ctx->pc = 0x1B9278u;
}
