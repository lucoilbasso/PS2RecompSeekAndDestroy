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

// Function: entry_0013f020
// Address: 0x13f020 - 0x13f030
void entry_0013f020_0x13f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f020_0x13f020");
#endif

    ctx->pc = 0x13f020u;

    // 0x13f020: 0x8e500148  lw          $s0, 0x148($s2)
    ctx->pc = 0x13f020u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x13f024: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x13F024u;
    {
        const bool branch_taken_0x13f024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F024u;
        // 0x13f028: 0x3c060014  lui         $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f024) {
            ctx->pc = 0x13F058u;
            return;
        }
    }
    ctx->pc = 0x13F02Cu;
    // 0x13f02c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x13f030u;
}
