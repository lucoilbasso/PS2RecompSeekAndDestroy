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

// Function: entry_0018f308
// Address: 0x18f308 - 0x18f318
void entry_0018f308_0x18f308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f308_0x18f308");
#endif

    ctx->pc = 0x18f308u;

    // 0x18f308: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x18F308u;
    {
        const bool branch_taken_0x18f308 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x18F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F308u;
        // 0x18f30c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f308) {
            ctx->pc = 0x18F334u;
            return;
        }
    }
    ctx->pc = 0x18F310u;
    // 0x18f310: 0x8e0201c8  lw          $v0, 0x1C8($s0)
    ctx->pc = 0x18f310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x18f314: 0x0  nop
    ctx->pc = 0x18f314u;
    // NOP
    ctx->pc = 0x18f318u;
}
