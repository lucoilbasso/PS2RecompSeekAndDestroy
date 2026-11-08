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

// Function: entry_0012ece8
// Address: 0x12ece8 - 0x12ecf8
void entry_0012ece8_0x12ece8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ece8_0x12ece8");
#endif

    ctx->pc = 0x12ece8u;

    // 0x12ece8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12ECE8u;
    {
        const bool branch_taken_0x12ece8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECE8u;
        // 0x12ecec: 0x8e220060  lw          $v0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ece8) {
            ctx->pc = 0x12ECF8u;
            return;
        }
    }
    ctx->pc = 0x12ECF0u;
    // 0x12ecf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12ECF0u;
    {
        const bool branch_taken_0x12ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECF0u;
        // 0x12ecf4: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecf0) {
            ctx->pc = 0x12ECFCu;
            return;
        }
    }
    ctx->pc = 0x12ECF8u;
}
