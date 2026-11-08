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

// Function: entry_0011475c
// Address: 0x11475c - 0x114764
void entry_0011475c_0x11475c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011475c_0x11475c");
#endif

    ctx->pc = 0x11475cu;

    // 0x11475c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11475Cu;
    {
        const bool branch_taken_0x11475c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11475Cu;
        // 0x114760: 0x94c30012  lhu         $v1, 0x12($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11475c) {
            ctx->pc = 0x11476Cu;
            return;
        }
    }
    ctx->pc = 0x114764u;
}
