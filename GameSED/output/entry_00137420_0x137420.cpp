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

// Function: entry_00137420
// Address: 0x137420 - 0x137430
void entry_00137420_0x137420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137420_0x137420");
#endif

    ctx->pc = 0x137420u;

    // 0x137420: 0x1a800010  blez        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x137420u;
    {
        const bool branch_taken_0x137420 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x137424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137420u;
        // 0x137424: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137420) {
            ctx->pc = 0x137464u;
            return;
        }
    }
    ctx->pc = 0x137428u;
    // 0x137428: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x137428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13742c: 0x0  nop
    ctx->pc = 0x13742cu;
    // NOP
    ctx->pc = 0x137430u;
}
