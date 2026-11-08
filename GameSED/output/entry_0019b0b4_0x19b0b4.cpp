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

// Function: entry_0019b0b4
// Address: 0x19b0b4 - 0x19b0c0
void entry_0019b0b4_0x19b0b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b0b4_0x19b0b4");
#endif

    ctx->pc = 0x19b0b4u;

    // 0x19b0b4: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x19B0B4u;
    {
        const bool branch_taken_0x19b0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0B4u;
        // 0x19b0b8: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0b4) {
            ctx->pc = 0x19B448u;
            return;
        }
    }
    ctx->pc = 0x19B0BCu;
    // 0x19b0bc: 0x0  nop
    ctx->pc = 0x19b0bcu;
    // NOP
    ctx->pc = 0x19b0c0u;
}
