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

// Function: entry_0017ebf0
// Address: 0x17ebf0 - 0x17ec00
void entry_0017ebf0_0x17ebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ebf0_0x17ebf0");
#endif

    ctx->pc = 0x17ebf0u;

    // 0x17ebf0: 0x152980  sll         $a1, $s5, 6
    ctx->pc = 0x17ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x17ebf4: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17EBF4u;
    {
        const bool branch_taken_0x17ebf4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBF4u;
        // 0x17ebf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebf4) {
            ctx->pc = 0x17EC00u;
            return;
        }
    }
    ctx->pc = 0x17EBFCu;
    // 0x17ebfc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x17ec00u;
}
