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

// Function: entry_001c7138
// Address: 0x1c7138 - 0x1c7158
void entry_001c7138_0x1c7138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7138_0x1c7138");
#endif

    ctx->pc = 0x1c7138u;

    // 0x1c7138: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x1c7138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x1c713c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1c713cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c7140: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x1c7140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c7144: 0xdc930000  ld          $s3, 0x0($a0)
    ctx->pc = 0x1c7144u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c7148: 0x1ac00023  blez        $s6, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C7148u;
    {
        const bool branch_taken_0x1c7148 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1C714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7148u;
        // 0x1c714c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7148) {
            ctx->pc = 0x1C71D8u;
            return;
        }
    }
    ctx->pc = 0x1C7150u;
    // 0x1c7150: 0x2491fff8  addiu       $s1, $a0, -0x8
    ctx->pc = 0x1c7150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x1c7154: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x1c7154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c7158u;
}
