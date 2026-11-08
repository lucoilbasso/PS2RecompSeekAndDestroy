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

// Function: caseD_7
// Address: 0x1088a0 - 0x1088c0
void caseD_7_0x1088a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1088a0");
#endif

    ctx->pc = 0x1088a0u;

    // 0x1088a0: 0x96830008  lhu         $v1, 0x8($s4)
    ctx->pc = 0x1088a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1088a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1088a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1088a8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1088A8u;
    {
        const bool branch_taken_0x1088a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1088ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088A8u;
        // 0x1088ac: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088a8) {
            ctx->pc = 0x1088C0u;
            return;
        }
    }
    ctx->pc = 0x1088B0u;
    // 0x1088b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1088b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1088b4: 0xa6820008  sh          $v0, 0x8($s4)
    ctx->pc = 0x1088b4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1088b8: 0x96830008  lhu         $v1, 0x8($s4)
    ctx->pc = 0x1088b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1088bc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1088bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x1088c0u;
}
