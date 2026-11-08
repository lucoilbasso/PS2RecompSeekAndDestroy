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

// Function: entry_001b0cf8
// Address: 0x1b0cf8 - 0x1b0d08
void entry_001b0cf8_0x1b0cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0cf8_0x1b0cf8");
#endif

    ctx->pc = 0x1b0cf8u;

    // 0x1b0cf8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b0cf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0cfc: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x1B0CFCu;
    {
        const bool branch_taken_0x1b0cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CFCu;
        // 0x1b0d00: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0cfc) {
            ctx->pc = 0x1B0F3Cu;
            return;
        }
    }
    ctx->pc = 0x1B0D04u;
    // 0x1b0d04: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1b0d04u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x1b0d08u;
}
