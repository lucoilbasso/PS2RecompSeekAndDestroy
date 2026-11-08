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

// Function: entry_0019b44c
// Address: 0x19b44c - 0x19b454
void entry_0019b44c_0x19b44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b44c_0x19b44c");
#endif

    ctx->pc = 0x19b44cu;

    // 0x19b44c: 0x1440ff1c  bnez        $v0, . + 4 + (-0xE4 << 2)
    ctx->pc = 0x19B44Cu;
    {
        const bool branch_taken_0x19b44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B44Cu;
        // 0x19b450: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b44c) {
            ctx->pc = 0x19B0C0u;
            return;
        }
    }
    ctx->pc = 0x19B454u;
}
