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

// Function: entry_0017edb8
// Address: 0x17edb8 - 0x17edc8
void entry_0017edb8_0x17edb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017edb8_0x17edb8");
#endif

    ctx->pc = 0x17edb8u;

    // 0x17edb8: 0x162880  sll         $a1, $s6, 2
    ctx->pc = 0x17edb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x17edbc: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17EDBCu;
    {
        const bool branch_taken_0x17edbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDBCu;
        // 0x17edc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edbc) {
            ctx->pc = 0x17EDC8u;
            return;
        }
    }
    ctx->pc = 0x17EDC4u;
    // 0x17edc4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x17edc8u;
}
