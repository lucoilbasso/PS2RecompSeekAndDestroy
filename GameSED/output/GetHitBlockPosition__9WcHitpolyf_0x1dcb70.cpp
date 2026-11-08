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

// Function: GetHitBlockPosition__9WcHitpolyf
// Address: 0x1dcb70 - 0x1dcb98
void GetHitBlockPosition__9WcHitpolyf_0x1dcb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetHitBlockPosition__9WcHitpolyf_0x1dcb70");
#endif

    ctx->pc = 0x1dcb70u;

    // 0x1dcb70: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1dcb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1dcb74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dcb74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcb78: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1dcb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1dcb7c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1dcb7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1dcb80: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1dcb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1dcb84: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dcb84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1dcb88: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1dcb88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1dcb8c: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x1dcb8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1dcb90: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB90u;
        // 0x1dcb94: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCB98u;
}
