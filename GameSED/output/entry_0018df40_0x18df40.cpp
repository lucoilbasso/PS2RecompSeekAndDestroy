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

// Function: entry_0018df40
// Address: 0x18df40 - 0x18df70
void entry_0018df40_0x18df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018df40_0x18df40");
#endif

    ctx->pc = 0x18df40u;

    // 0x18df40: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x18df40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x18df44: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x18df44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x18df48: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x18df48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x18df4c: 0xa4800244  sh          $zero, 0x244($a0)
    ctx->pc = 0x18df4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 580), (uint16_t)GPR_U32(ctx, 0));
    // 0x18df50: 0xa4800246  sh          $zero, 0x246($a0)
    ctx->pc = 0x18df50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 582), (uint16_t)GPR_U32(ctx, 0));
    // 0x18df54: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x18df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x18df58: 0x8c820244  lw          $v0, 0x244($a0)
    ctx->pc = 0x18df58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x18df5c: 0xac80024c  sw          $zero, 0x24C($a0)
    ctx->pc = 0x18df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 588), GPR_U32(ctx, 0));
    // 0x18df60: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18DF60u;
    {
        const bool branch_taken_0x18df60 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF60u;
        // 0x18df64: 0xac820248  sw          $v0, 0x248($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df60) {
            ctx->pc = 0x18DF8Cu;
            return;
        }
    }
    ctx->pc = 0x18DF68u;
    // 0x18df68: 0x8c820254  lw          $v0, 0x254($a0)
    ctx->pc = 0x18df68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
    // 0x18df6c: 0x0  nop
    ctx->pc = 0x18df6cu;
    // NOP
    ctx->pc = 0x18df70u;
}
