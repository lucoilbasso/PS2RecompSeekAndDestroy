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

// Function: sceDevVu0PutDBit
// Address: 0x1ac9d8 - 0x1aca08
void sceDevVu0PutDBit_0x1ac9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVu0PutDBit_0x1ac9d8");
#endif

    ctx->pc = 0x1ac9d8u;

    // 0x1ac9d8: 0x4843e000  cfc2.ni     $v1, $vi28
    ctx->pc = 0x1ac9d8u;
    SET_GPR_U32(ctx, 3, ctx->vu0_fbrst);
    // 0x1ac9dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac9e0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC9E0u;
    {
        const bool branch_taken_0x1ac9e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac9e0) {
            ctx->pc = 0x1AC9F0u;
            goto label_1ac9f0;
        }
    }
    ctx->pc = 0x1AC9E8u;
    // 0x1ac9e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC9E8u;
    {
        const bool branch_taken_0x1ac9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9E8u;
        // 0x1ac9ec: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9e8) {
            ctx->pc = 0x1AC9FCu;
            goto label_1ac9fc;
        }
    }
    ctx->pc = 0x1AC9F0u;
label_1ac9f0:
    // 0x1ac9f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ac9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ac9f4: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x1ac9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x1ac9f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ac9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ac9fc:
    // 0x1ac9fc: 0x48c3e000  ctc2.ni     $v1, $vi28
    ctx->pc = 0x1ac9fcu;
    ctx->vu0_fbrst = GPR_U32(ctx, 3) & 0x00000C0Cu;
    // 0x1aca00: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACA08u;
}
