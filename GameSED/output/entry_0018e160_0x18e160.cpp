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

// Function: entry_0018e160
// Address: 0x18e160 - 0x18e170
void entry_0018e160_0x18e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e160_0x18e160");
#endif

    ctx->pc = 0x18e160u;

    // 0x18e160: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18e160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18e164: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18E164u;
    {
        const bool branch_taken_0x18e164 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E164u;
        // 0x18e168: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e164) {
            ctx->pc = 0x18E194u;
            return;
        }
    }
    ctx->pc = 0x18E16Cu;
    // 0x18e16c: 0x0  nop
    ctx->pc = 0x18e16cu;
    // NOP
    ctx->pc = 0x18e170u;
}
