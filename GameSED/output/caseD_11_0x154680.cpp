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

// Function: caseD_11
// Address: 0x154680 - 0x1546a8
void caseD_11_0x154680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x154680");
#endif

    ctx->pc = 0x154680u;

    // 0x154680: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x154680u;
    {
        const bool branch_taken_0x154680 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x154680) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x154688u;
    // 0x154688: 0x8e020690  lw          $v0, 0x690($s0)
    ctx->pc = 0x154688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x15468c: 0x24441a60  addiu       $a0, $v0, 0x1A60
    ctx->pc = 0x15468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6752));
    // 0x154690: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x154690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x154694: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x154694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x154698: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x154698u;
    {
        const bool branch_taken_0x154698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154698) {
            ctx->pc = 0x1546A8u;
            return;
        }
    }
    ctx->pc = 0x1546A0u;
    // 0x1546a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1546A0u;
    {
        const bool branch_taken_0x1546a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546A0u;
        // 0x1546a4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546a0) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x1546A8u;
}
