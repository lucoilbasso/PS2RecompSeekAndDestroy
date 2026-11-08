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

// Function: entry_00104858
// Address: 0x104858 - 0x104860
void entry_00104858_0x104858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104858_0x104858");
#endif

    ctx->pc = 0x104858u;

    // 0x104858: 0x56800001  bnel        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x104858u;
    {
        const bool branch_taken_0x104858 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x104858) {
            ctx->pc = 0x10485Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104858u;
            // 0x10485c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104860u;
            return;
        }
    }
    ctx->pc = 0x104860u;
}
