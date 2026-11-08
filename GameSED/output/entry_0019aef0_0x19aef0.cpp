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

// Function: entry_0019aef0
// Address: 0x19aef0 - 0x19af00
void entry_0019aef0_0x19aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aef0_0x19aef0");
#endif

    ctx->pc = 0x19aef0u;

    // 0x19aef0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AEF0u;
    {
        const bool branch_taken_0x19aef0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEF0u;
        // 0x19aef4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aef0) {
            ctx->pc = 0x19AF00u;
            return;
        }
    }
    ctx->pc = 0x19AEF8u;
    // 0x19aef8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19AEF8u;
    {
        const bool branch_taken_0x19aef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEF8u;
        // 0x19aefc: 0xa06a0000  sb          $t2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aef8) {
            ctx->pc = 0x19AF04u;
            return;
        }
    }
    ctx->pc = 0x19AF00u;
}
