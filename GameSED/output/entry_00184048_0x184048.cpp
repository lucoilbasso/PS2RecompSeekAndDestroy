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

// Function: entry_00184048
// Address: 0x184048 - 0x18405c
void entry_00184048_0x184048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184048_0x184048");
#endif

    ctx->pc = 0x184048u;

    // 0x184048: 0x0  nop
    ctx->pc = 0x184048u;
    // NOP
    // 0x18404c: 0x0  nop
    ctx->pc = 0x18404cu;
    // NOP
    // 0x184050: 0x0  nop
    ctx->pc = 0x184050u;
    // NOP
    // 0x184054: 0x5468fff6  bnel        $v1, $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x184054u;
    {
        const bool branch_taken_0x184054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x184054) {
            ctx->pc = 0x184058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184054u;
            // 0x184058: 0xc7102b  sltu        $v0, $a2, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x184030u;
            return;
        }
    }
    ctx->pc = 0x18405Cu;
}
