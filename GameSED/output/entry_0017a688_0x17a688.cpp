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

// Function: entry_0017a688
// Address: 0x17a688 - 0x17a6a4
void entry_0017a688_0x17a688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a688_0x17a688");
#endif

    ctx->pc = 0x17a688u;

label_17a688:
    // 0x17a688: 0x0  nop
    ctx->pc = 0x17a688u;
    // NOP
    // 0x17a68c: 0x0  nop
    ctx->pc = 0x17a68cu;
    // NOP
    // 0x17a690: 0x0  nop
    ctx->pc = 0x17a690u;
    // NOP
    // 0x17a694: 0x0  nop
    ctx->pc = 0x17a694u;
    // NOP
    // 0x17a698: 0x0  nop
    ctx->pc = 0x17a698u;
    // NOP
    // 0x17a69c: 0x5c60fffa  bgtzl       $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17A69Cu;
    {
        const bool branch_taken_0x17a69c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x17a69c) {
            ctx->pc = 0x17A6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A69Cu;
            // 0x17a6a0: 0x2463ffe7  addiu       $v1, $v1, -0x19 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a688;
        }
    }
    ctx->pc = 0x17A6A4u;
}
