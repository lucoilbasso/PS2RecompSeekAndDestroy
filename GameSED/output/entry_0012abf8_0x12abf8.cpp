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

// Function: entry_0012abf8
// Address: 0x12abf8 - 0x12ac04
void entry_0012abf8_0x12abf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012abf8_0x12abf8");
#endif

    ctx->pc = 0x12abf8u;

    // 0x12abf8: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x12abf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x12abfc: 0x1d40ffc4  bgtz        $t2, . + 4 + (-0x3C << 2)
    ctx->pc = 0x12ABFCu;
    {
        const bool branch_taken_0x12abfc = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x12AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABFCu;
        // 0x12ac00: 0x2508fff0  addiu       $t0, $t0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abfc) {
            ctx->pc = 0x12AB10u;
            return;
        }
    }
    ctx->pc = 0x12AC04u;
}
