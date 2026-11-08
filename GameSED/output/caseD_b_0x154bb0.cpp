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

// Function: caseD_b
// Address: 0x154bb0 - 0x154bc0
void caseD_b_0x154bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x154bb0");
#endif

    ctx->pc = 0x154bb0u;

    // 0x154bb0: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x154bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x154bb4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x154bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x154bb8: 0x100001d8  b           . + 4 + (0x1D8 << 2)
    ctx->pc = 0x154BB8u;
    {
        const bool branch_taken_0x154bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BB8u;
        // 0x154bbc: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154bb8) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154BC0u;
}
