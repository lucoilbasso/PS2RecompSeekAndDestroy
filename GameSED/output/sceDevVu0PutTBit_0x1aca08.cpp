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

// Function: sceDevVu0PutTBit
// Address: 0x1aca08 - 0x1aca38
void sceDevVu0PutTBit_0x1aca08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVu0PutTBit_0x1aca08");
#endif

    ctx->pc = 0x1aca08u;

    // 0x1aca08: 0x4843e000  cfc2.ni     $v1, $vi28
    ctx->pc = 0x1aca08u;
    SET_GPR_U32(ctx, 3, ctx->vu0_fbrst);
    // 0x1aca0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aca10: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACA10u;
    {
        const bool branch_taken_0x1aca10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aca10) {
            ctx->pc = 0x1ACA20u;
            goto label_1aca20;
        }
    }
    ctx->pc = 0x1ACA18u;
    // 0x1aca18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACA18u;
    {
        const bool branch_taken_0x1aca18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA18u;
        // 0x1aca1c: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca18) {
            ctx->pc = 0x1ACA2Cu;
            goto label_1aca2c;
        }
    }
    ctx->pc = 0x1ACA20u;
label_1aca20:
    // 0x1aca20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1aca20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1aca24: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x1aca24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x1aca28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1aca28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1aca2c:
    // 0x1aca2c: 0x48c3e000  ctc2.ni     $v1, $vi28
    ctx->pc = 0x1aca2cu;
    ctx->vu0_fbrst = GPR_U32(ctx, 3) & 0x00000C0Cu;
    // 0x1aca30: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACA38u;
}
