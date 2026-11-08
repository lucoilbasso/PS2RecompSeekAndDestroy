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

// Function: entry_00186034
// Address: 0x186034 - 0x18603c
void entry_00186034_0x186034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186034_0x186034");
#endif

    ctx->pc = 0x186034u;

    // 0x186034: 0x5600ffec  bnel        $s0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x186034u;
    {
        const bool branch_taken_0x186034 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x186034) {
            ctx->pc = 0x186038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186034u;
            // 0x186038: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185FE8u;
            return;
        }
    }
    ctx->pc = 0x18603Cu;
}
