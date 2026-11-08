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

// Function: entry_00101e68
// Address: 0x101e68 - 0x101e7c
void entry_00101e68_0x101e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101e68_0x101e68");
#endif

    ctx->pc = 0x101e68u;

    // 0x101e68: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x101e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x101e6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x101e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x101e70: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x101e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x101e74: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x101E74u;
    {
        const bool branch_taken_0x101e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E74u;
        // 0x101e78: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e74) {
            ctx->pc = 0x101E30u;
            return;
        }
    }
    ctx->pc = 0x101E7Cu;
}
