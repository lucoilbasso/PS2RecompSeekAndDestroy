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

// Function: entry_001791c4
// Address: 0x1791c4 - 0x1791d8
void entry_001791c4_0x1791c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001791c4_0x1791c4");
#endif

    ctx->pc = 0x1791c4u;

    // 0x1791c4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1791c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1791c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1791c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1791cc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1791CCu;
    {
        const bool branch_taken_0x1791cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1791D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791CCu;
        // 0x1791d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791cc) {
            ctx->pc = 0x1791D8u;
            return;
        }
    }
    ctx->pc = 0x1791D4u;
    // 0x1791d4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1791d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1791d8u;
}
