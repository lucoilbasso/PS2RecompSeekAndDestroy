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

// Function: entry_0017cb2c
// Address: 0x17cb2c - 0x17cb3c
void entry_0017cb2c_0x17cb2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cb2c_0x17cb2c");
#endif

    ctx->pc = 0x17cb2cu;

    // 0x17cb2c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17cb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17cb30: 0x2c420060  sltiu       $v0, $v0, 0x60
    ctx->pc = 0x17cb30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x17cb34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CB34u;
    {
        const bool branch_taken_0x17cb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB34u;
        // 0x17cb38: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb34) {
            ctx->pc = 0x17CB50u;
            return;
        }
    }
    ctx->pc = 0x17CB3Cu;
}
