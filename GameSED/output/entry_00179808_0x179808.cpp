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

// Function: entry_00179808
// Address: 0x179808 - 0x179828
void entry_00179808_0x179808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179808_0x179808");
#endif

    ctx->pc = 0x179808u;

    // 0x179808: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x179808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17980c: 0x50520006  beql        $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x17980Cu;
    {
        const bool branch_taken_0x17980c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x17980c) {
            ctx->pc = 0x179810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17980Cu;
            // 0x179810: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179828u;
            return;
        }
    }
    ctx->pc = 0x179814u;
    // 0x179814: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x179814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x179818: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x179818u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17981c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x179820: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x179820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x179824: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x179824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x179828u;
}
