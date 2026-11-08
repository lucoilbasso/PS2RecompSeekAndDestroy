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

// Function: caseD_6
// Address: 0x163e50 - 0x163e58
void caseD_6_0x163e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x163e50");
#endif

    ctx->pc = 0x163e50u;

    // 0x163e50: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x163E50u;
    {
        const bool branch_taken_0x163e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E50u;
        // 0x163e54: 0xae200250  sw          $zero, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e50) {
            ctx->pc = 0x163FC0u;
            return;
        }
    }
    ctx->pc = 0x163E58u;
}
