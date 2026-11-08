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

// Function: entry_001db130
// Address: 0x1db130 - 0x1db144
void entry_001db130_0x1db130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db130_0x1db130");
#endif

    ctx->pc = 0x1db130u;

    // 0x1db130: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1db130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1db134: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB134u;
    {
        const bool branch_taken_0x1db134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB134u;
        // 0x1db138: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db134) {
            ctx->pc = 0x1DB144u;
            return;
        }
    }
    ctx->pc = 0x1DB13Cu;
    // 0x1db13c: 0xac450134  sw          $a1, 0x134($v0)
    ctx->pc = 0x1db13cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 5));
    // 0x1db140: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1db140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1db144u;
}
