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

// Function: entry_0018e770
// Address: 0x18e770 - 0x18e784
void entry_0018e770_0x18e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e770_0x18e770");
#endif

    ctx->pc = 0x18e770u;

    // 0x18e770: 0x0  nop
    ctx->pc = 0x18e770u;
    // NOP
    // 0x18e774: 0x0  nop
    ctx->pc = 0x18e774u;
    // NOP
    // 0x18e778: 0x5445ffee  bnel        $v0, $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x18E778u;
    {
        const bool branch_taken_0x18e778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18e778) {
            ctx->pc = 0x18E77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E778u;
            // 0x18e77c: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E734u;
            return;
        }
    }
    ctx->pc = 0x18E780u;
    // 0x18e780: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x18e780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18e784u;
}
