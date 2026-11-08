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

// Function: entry_001a18c0
// Address: 0x1a18c0 - 0x1a18d8
void entry_001a18c0_0x1a18c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a18c0_0x1a18c0");
#endif

    ctx->pc = 0x1a18c0u;

    // 0x1a18c0: 0x1500000f  bnez        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A18C0u;
    {
        const bool branch_taken_0x1a18c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A18C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18C0u;
        // 0x1a18c4: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18c0) {
            ctx->pc = 0x1A1900u;
            return;
        }
    }
    ctx->pc = 0x1A18C8u;
    // 0x1a18c8: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x1a18c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a18cc: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A18CCu;
    {
        const bool branch_taken_0x1a18cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18CCu;
        // 0x1a18d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18cc) {
            ctx->pc = 0x1A18D8u;
            return;
        }
    }
    ctx->pc = 0x1A18D4u;
    // 0x1a18d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a18d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1a18d8u;
}
