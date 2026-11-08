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

// Function: entry_001440d0
// Address: 0x1440d0 - 0x1440e8
void entry_001440d0_0x1440d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001440d0_0x1440d0");
#endif

    ctx->pc = 0x1440d0u;

    // 0x1440d0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1440D0u;
    {
        const bool branch_taken_0x1440d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1440D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1440D0u;
        // 0x1440d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440d0) {
            ctx->pc = 0x144130u;
            return;
        }
    }
    ctx->pc = 0x1440D8u;
    // 0x1440d8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1440D8u;
    {
        const bool branch_taken_0x1440d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1440DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1440D8u;
        // 0x1440dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440d8) {
            ctx->pc = 0x144148u;
            return;
        }
    }
    ctx->pc = 0x1440E0u;
    // 0x1440e0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1440E0u;
    {
        const bool branch_taken_0x1440e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1440E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1440E0u;
        // 0x1440e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440e0) {
            ctx->pc = 0x144164u;
            return;
        }
    }
    ctx->pc = 0x1440E8u;
}
