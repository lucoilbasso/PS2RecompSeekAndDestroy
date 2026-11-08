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

// Function: entry_0016bb40
// Address: 0x16bb40 - 0x16bb48
void entry_0016bb40_0x16bb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bb40_0x16bb40");
#endif

    ctx->pc = 0x16bb40u;

    // 0x16bb40: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16BB40u;
    {
        const bool branch_taken_0x16bb40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bb40) {
            ctx->pc = 0x16BB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BB40u;
            // 0x16bb44: 0xad28000c  sw          $t0, 0xC($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BB48u;
            return;
        }
    }
    ctx->pc = 0x16BB48u;
}
