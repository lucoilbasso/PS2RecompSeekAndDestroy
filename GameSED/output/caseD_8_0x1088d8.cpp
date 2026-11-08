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

// Function: caseD_8
// Address: 0x1088d8 - 0x1088f0
void caseD_8_0x1088d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1088d8");
#endif

    ctx->pc = 0x1088d8u;

    // 0x1088d8: 0x8e83007c  lw          $v1, 0x7C($s4)
    ctx->pc = 0x1088d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x1088dc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1088dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1088e0: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1088e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x1088e4: 0x10000206  b           . + 4 + (0x206 << 2)
    ctx->pc = 0x1088E4u;
    {
        const bool branch_taken_0x1088e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1088E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088E4u;
        // 0x1088e8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088e4) {
            ctx->pc = 0x109100u;
            return;
        }
    }
    ctx->pc = 0x1088ECu;
    // 0x1088ec: 0x0  nop
    ctx->pc = 0x1088ecu;
    // NOP
    ctx->pc = 0x1088f0u;
}
