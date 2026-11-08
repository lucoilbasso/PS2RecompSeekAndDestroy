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

// Function: CheckHitBlockDiagnote__9WcHitpolyf
// Address: 0x1dcb98 - 0x1dcbc4
void CheckHitBlockDiagnote__9WcHitpolyf_0x1dcb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHitBlockDiagnote__9WcHitpolyf_0x1dcb98");
#endif

    ctx->pc = 0x1dcb98u;

    // 0x1dcb98: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1dcb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1dcb9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dcb9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcba0: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1dcba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1dcba4: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1dcba4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1dcba8: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1dcba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dcbac: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1dcbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1dcbb0: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dcbb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1dcbb4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1dcbb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1dcbb8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1dcbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1dcbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBBCu;
        // 0x1dcbc0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCBC4u;
}
