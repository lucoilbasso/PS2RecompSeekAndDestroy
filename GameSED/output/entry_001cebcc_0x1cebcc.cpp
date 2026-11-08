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

// Function: entry_001cebcc
// Address: 0x1cebcc - 0x1cebdc
void entry_001cebcc_0x1cebcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cebcc_0x1cebcc");
#endif

    ctx->pc = 0x1cebccu;

    // 0x1cebcc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEBCCu;
    {
        const bool branch_taken_0x1cebcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cebcc) {
            ctx->pc = 0x1CEBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEBCCu;
            // 0x1cebd0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEBDCu;
            return;
        }
    }
    ctx->pc = 0x1CEBD4u;
    // 0x1cebd4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1cebd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cebd8: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x1cebd8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->pc = 0x1cebdcu;
}
