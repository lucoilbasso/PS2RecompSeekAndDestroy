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

// Function: entry_00124140
// Address: 0x124140 - 0x124158
void entry_00124140_0x124140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124140_0x124140");
#endif

    ctx->pc = 0x124140u;

    // 0x124140: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x124140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x124144: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124144u;
    {
        const bool branch_taken_0x124144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124144u;
        // 0x124148: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124144) {
            ctx->pc = 0x124158u;
            return;
        }
    }
    ctx->pc = 0x12414Cu;
    // 0x12414c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12414Cu;
    {
        const bool branch_taken_0x12414c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12414Cu;
        // 0x124150: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12414c) {
            ctx->pc = 0x124160u;
            return;
        }
    }
    ctx->pc = 0x124154u;
    // 0x124154: 0x0  nop
    ctx->pc = 0x124154u;
    // NOP
    ctx->pc = 0x124158u;
}
