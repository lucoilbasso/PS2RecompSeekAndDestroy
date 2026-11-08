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

// Function: caseD_1371b0
// Address: 0x1371b0 - 0x1371c8
void caseD_1371b0_0x1371b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1371b0_0x1371b0");
#endif

    ctx->pc = 0x1371b0u;

    // 0x1371b0: 0x30c20180  andi        $v0, $a2, 0x180
    ctx->pc = 0x1371b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)384);
    // 0x1371b4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1371B4u;
    {
        const bool branch_taken_0x1371b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371B4u;
        // 0x1371b8: 0x30c20003  andi        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371b4) {
            ctx->pc = 0x137220u;
            return;
        }
    }
    ctx->pc = 0x1371BCu;
    // 0x1371bc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1371BCu;
    {
        const bool branch_taken_0x1371bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371BCu;
        // 0x1371c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371bc) {
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x1371C4u;
    // 0x1371c4: 0x0  nop
    ctx->pc = 0x1371c4u;
    // NOP
    ctx->pc = 0x1371c8u;
}
