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

// Function: entry_0010ed4c
// Address: 0x10ed4c - 0x10ed64
void entry_0010ed4c_0x10ed4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ed4c_0x10ed4c");
#endif

    ctx->pc = 0x10ed4cu;

    // 0x10ed4c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10ed4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10ed50: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x10ed50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ed54: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10ed54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10ed58: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10ED58u;
    {
        const bool branch_taken_0x10ed58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED58u;
        // 0x10ed5c: 0x122980  sll         $a1, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed58) {
            ctx->pc = 0x10ED64u;
            return;
        }
    }
    ctx->pc = 0x10ED60u;
    // 0x10ed60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x10ed64u;
}
