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

// Function: caseD_6
// Address: 0x108888 - 0x1088a0
void caseD_6_0x108888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x108888");
#endif

    ctx->pc = 0x108888u;

    // 0x108888: 0x8e83007c  lw          $v1, 0x7C($s4)
    ctx->pc = 0x108888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x10888c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x10888cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x108890: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x108890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x108894: 0x1000021a  b           . + 4 + (0x21A << 2)
    ctx->pc = 0x108894u;
    {
        const bool branch_taken_0x108894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108894u;
        // 0x108898: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108894) {
            ctx->pc = 0x109100u;
            return;
        }
    }
    ctx->pc = 0x10889Cu;
    // 0x10889c: 0x0  nop
    ctx->pc = 0x10889cu;
    // NOP
    ctx->pc = 0x1088a0u;
}
