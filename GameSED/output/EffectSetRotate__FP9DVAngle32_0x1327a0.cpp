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

// Function: EffectSetRotate__FP9DVAngle32
// Address: 0x1327a0 - 0x1327e0
void EffectSetRotate__FP9DVAngle32_0x1327a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSetRotate__FP9DVAngle32_0x1327a0");
#endif

    ctx->pc = 0x1327a0u;

    // 0x1327a0: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x1327a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1327a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1327a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1327a8: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x1327a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x1327ac: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x1327acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1327b0: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x1327b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1327b4: 0x8c8502f8  lw          $a1, 0x2F8($a0)
    ctx->pc = 0x1327b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x1327b8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1327B8u;
    {
        const bool branch_taken_0x1327b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1327b8) {
            ctx->pc = 0x1327D8u;
            goto label_1327d8;
        }
    }
    ctx->pc = 0x1327C0u;
    // 0x1327c0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1327C0u;
    {
        const bool branch_taken_0x1327c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1327c0) {
            ctx->pc = 0x1327D8u;
            goto label_1327d8;
        }
    }
    ctx->pc = 0x1327C8u;
    // 0x1327c8: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x1327c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1327cc: 0xfca20170  sd          $v0, 0x170($a1)
    ctx->pc = 0x1327ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 368), GPR_U64(ctx, 2));
    // 0x1327d0: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1327d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1327d4: 0xfca30178  sd          $v1, 0x178($a1)
    ctx->pc = 0x1327d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 376), GPR_U64(ctx, 3));
label_1327d8:
    // 0x1327d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1327D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1327D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1327E0u;
}
