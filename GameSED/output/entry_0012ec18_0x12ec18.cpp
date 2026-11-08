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

// Function: entry_0012ec18
// Address: 0x12ec18 - 0x12ec30
void entry_0012ec18_0x12ec18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ec18_0x12ec18");
#endif

    ctx->pc = 0x12ec18u;

    // 0x12ec18: 0x50a0002a  beql        $a1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x12EC18u;
    {
        const bool branch_taken_0x12ec18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec18) {
            ctx->pc = 0x12EC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC18u;
            // 0x12ec1c: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECC4u;
            return;
        }
    }
    ctx->pc = 0x12EC20u;
    // 0x12ec20: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x12ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x12ec24: 0x54510027  bnel        $v0, $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x12EC24u;
    {
        const bool branch_taken_0x12ec24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x12ec24) {
            ctx->pc = 0x12EC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC24u;
            // 0x12ec28: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECC4u;
            return;
        }
    }
    ctx->pc = 0x12EC2Cu;
    // 0x12ec2c: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x12ec2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->pc = 0x12ec30u;
}
