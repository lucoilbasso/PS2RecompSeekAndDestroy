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

// Function: caseD_16
// Address: 0x1551e0 - 0x1551f0
void caseD_16_0x1551e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x1551e0");
#endif

    ctx->pc = 0x1551e0u;

    // 0x1551e0: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1551e4: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1551E4u;
    {
        const bool branch_taken_0x1551e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551E4u;
        // 0x1551e8: 0xae020688  sw          $v0, 0x688($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551e4) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x1551ECu;
    // 0x1551ec: 0x0  nop
    ctx->pc = 0x1551ecu;
    // NOP
    ctx->pc = 0x1551f0u;
}
