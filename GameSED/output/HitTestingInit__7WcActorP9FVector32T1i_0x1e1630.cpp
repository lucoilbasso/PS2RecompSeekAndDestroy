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

// Function: HitTestingInit__7WcActorP9FVector32T1i
// Address: 0x1e1630 - 0x1e167c
void HitTestingInit__7WcActorP9FVector32T1i_0x1e1630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitTestingInit__7WcActorP9FVector32T1i_0x1e1630");
#endif

    ctx->pc = 0x1e1630u;

    // 0x1e1630: 0x8c89001c  lw          $t1, 0x1C($a0)
    ctx->pc = 0x1e1630u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1e1634: 0x24880140  addiu       $t0, $a0, 0x140
    ctx->pc = 0x1e1634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x1e1638: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x1e1638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x1e163c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1e163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1e1640: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1e1640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1e1644: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x1e1644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x1e1648: 0xac800134  sw          $zero, 0x134($a0)
    ctx->pc = 0x1e1648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
    // 0x1e164c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1e164cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e1650: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x1e1650u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x1e1654: 0xc4800144  lwc1        $f0, 0x144($a0)
    ctx->pc = 0x1e1654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1658: 0x24830150  addiu       $v1, $a0, 0x150
    ctx->pc = 0x1e1658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1e165c: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1e165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1660: 0xac870130  sw          $a3, 0x130($a0)
    ctx->pc = 0x1e1660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 7));
    // 0x1e1664: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e1664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e1668: 0xe4800144  swc1        $f0, 0x144($a0)
    ctx->pc = 0x1e1668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 324), bits); }
    // 0x1e166c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1e166cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e1670: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1e1670u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1e1674: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E167Cu;
}
