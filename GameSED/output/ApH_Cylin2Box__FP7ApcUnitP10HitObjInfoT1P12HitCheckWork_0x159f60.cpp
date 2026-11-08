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

// Function: ApH_Cylin2Box__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork
// Address: 0x159f60 - 0x159f8c
void ApH_Cylin2Box__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork_0x159f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApH_Cylin2Box__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork_0x159f60");
#endif

    switch (ctx->pc) {
        case 0x159f80u: goto label_159f80;
        default: break;
    }

    ctx->pc = 0x159f60u;

    // 0x159f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159f64: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x159f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x159f6c: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x159f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159f70: 0xc44003b4  lwc1        $f0, 0x3B4($v0)
    ctx->pc = 0x159f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159f74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x159f74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x159f78: 0xc056244  jal         func_158910
    ctx->pc = 0x159F78u;
    SET_GPR_U32(ctx, 31, 0x159F80u);
    ctx->pc = 0x159F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159F78u;
    // 0x159f7c: 0xe44003b4  swc1        $f0, 0x3B4($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 948), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158910u, 0x159F78u, 0x159F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F80u;
label_159f80:
    // 0x159f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159f84: 0x3e00008  jr          $ra
    ctx->pc = 0x159F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F84u;
        // 0x159f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159F8Cu;
}
