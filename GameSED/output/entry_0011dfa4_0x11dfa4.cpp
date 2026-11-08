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

// Function: entry_0011dfa4
// Address: 0x11dfa4 - 0x11dfac
void entry_0011dfa4_0x11dfa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dfa4_0x11dfa4");
#endif

    ctx->pc = 0x11dfa4u;

    // 0x11dfa4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DFA4u;
    {
        const bool branch_taken_0x11dfa4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x11DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFA4u;
        // 0x11dfa8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfa4) {
            ctx->pc = 0x11DFB8u;
            return;
        }
    }
    ctx->pc = 0x11DFACu;
}
