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

// Function: entry_0019fc68
// Address: 0x19fc68 - 0x19fc80
void entry_0019fc68_0x19fc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fc68_0x19fc68");
#endif

    ctx->pc = 0x19fc68u;

    // 0x19fc68: 0x8f938dd8  lw          $s3, -0x7228($gp)
    ctx->pc = 0x19fc68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x19fc6c: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FC6Cu;
    {
        const bool branch_taken_0x19fc6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fc6c) {
            ctx->pc = 0x19FC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FC6Cu;
            // 0x19fc70: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FC80u;
            return;
        }
    }
    ctx->pc = 0x19FC74u;
    // 0x19fc74: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x19fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x19fc78: 0x8c53f640  lw          $s3, -0x9C0($v0)
    ctx->pc = 0x19fc78u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x23F640u));
    // 0x19fc7c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x19fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x19fc80u;
}
