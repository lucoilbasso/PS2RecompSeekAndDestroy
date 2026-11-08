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

// Function: entry_001194d4
// Address: 0x1194d4 - 0x1194dc
void entry_001194d4_0x1194d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001194d4_0x1194d4");
#endif

    ctx->pc = 0x1194d4u;

    // 0x1194d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1194D4u;
    {
        const bool branch_taken_0x1194d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194D4u;
        // 0x1194d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194d4) {
            ctx->pc = 0x1194E8u;
            return;
        }
    }
    ctx->pc = 0x1194DCu;
}
