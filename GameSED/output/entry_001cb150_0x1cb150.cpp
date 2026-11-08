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

// Function: entry_001cb150
// Address: 0x1cb150 - 0x1cb168
void entry_001cb150_0x1cb150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb150_0x1cb150");
#endif

    ctx->pc = 0x1cb150u;

    // 0x1cb150: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CB150u;
    {
        const bool branch_taken_0x1cb150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB150u;
        // 0x1cb154: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb150) {
            ctx->pc = 0x1CB188u;
            return;
        }
    }
    ctx->pc = 0x1CB158u;
    // 0x1cb158: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cb158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb15c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CB15Cu;
    {
        const bool branch_taken_0x1cb15c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB15Cu;
        // 0x1cb160: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb15c) {
            ctx->pc = 0x1CB194u;
            return;
        }
    }
    ctx->pc = 0x1CB164u;
    // 0x1cb164: 0x0  nop
    ctx->pc = 0x1cb164u;
    // NOP
    ctx->pc = 0x1cb168u;
}
