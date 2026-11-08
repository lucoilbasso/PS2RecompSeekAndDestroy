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

// Function: entry_00154174
// Address: 0x154174 - 0x154190
void entry_00154174_0x154174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154174_0x154174");
#endif

    ctx->pc = 0x154174u;

    // 0x154174: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x154174u;
    {
        const bool branch_taken_0x154174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x154178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154174u;
        // 0x154178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154174) {
            ctx->pc = 0x154190u;
            return;
        }
    }
    ctx->pc = 0x15417Cu;
    // 0x15417c: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x15417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x154180: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x154180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x154184: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x154184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x154188: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x154188u;
    {
        const bool branch_taken_0x154188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154188u;
        // 0x15418c: 0xae220184  sw          $v0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154188) {
            ctx->pc = 0x1541A4u;
            return;
        }
    }
    ctx->pc = 0x154190u;
}
