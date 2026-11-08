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

// Function: entry_0014baa8
// Address: 0x14baa8 - 0x14bac0
void entry_0014baa8_0x14baa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014baa8_0x14baa8");
#endif

    ctx->pc = 0x14baa8u;

    // 0x14baa8: 0x5050004f  beql        $v0, $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x14BAA8u;
    {
        const bool branch_taken_0x14baa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x14baa8) {
            ctx->pc = 0x14BAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BAA8u;
            // 0x14baac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BBE8u;
            return;
        }
    }
    ctx->pc = 0x14BAB0u;
    // 0x14bab0: 0x8e220248  lw          $v0, 0x248($s1)
    ctx->pc = 0x14bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x14bab4: 0x1050004b  beq         $v0, $s0, . + 4 + (0x4B << 2)
    ctx->pc = 0x14BAB4u;
    {
        const bool branch_taken_0x14bab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x14BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BAB4u;
        // 0x14bab8: 0xae300244  sw          $s0, 0x244($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bab4) {
            ctx->pc = 0x14BBE4u;
            return;
        }
    }
    ctx->pc = 0x14BABCu;
    // 0x14babc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14babcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14bac0u;
}
