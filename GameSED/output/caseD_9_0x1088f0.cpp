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

// Function: caseD_9
// Address: 0x1088f0 - 0x108908
void caseD_9_0x1088f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1088f0");
#endif

    ctx->pc = 0x1088f0u;

    // 0x1088f0: 0x8e83007c  lw          $v1, 0x7C($s4)
    ctx->pc = 0x1088f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x1088f4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1088f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1088f8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1088f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1088fc: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x1088FCu;
    {
        const bool branch_taken_0x1088fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088FCu;
        // 0x108900: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088fc) {
            ctx->pc = 0x109100u;
            return;
        }
    }
    ctx->pc = 0x108904u;
    // 0x108904: 0x0  nop
    ctx->pc = 0x108904u;
    // NOP
    ctx->pc = 0x108908u;
}
