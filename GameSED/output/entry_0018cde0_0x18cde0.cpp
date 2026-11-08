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

// Function: entry_0018cde0
// Address: 0x18cde0 - 0x18cdf4
void entry_0018cde0_0x18cde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cde0_0x18cde0");
#endif

    ctx->pc = 0x18cde0u;

    // 0x18cde0: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x18cde0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x18cde4: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x18cde4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x18cde8: 0xa0600007  sb          $zero, 0x7($v1)
    ctx->pc = 0x18cde8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x18cdec: 0x14e0fff0  bnez        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x18CDECu;
    {
        const bool branch_taken_0x18cdec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDECu;
        // 0x18cdf0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cdec) {
            ctx->pc = 0x18CDB0u;
            return;
        }
    }
    ctx->pc = 0x18CDF4u;
}
