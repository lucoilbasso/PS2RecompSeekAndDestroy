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

// Function: GetBlockRealPosition__9WcHitpolyi
// Address: 0x1dcbc8 - 0x1dcbf4
void GetBlockRealPosition__9WcHitpolyi_0x1dcbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBlockRealPosition__9WcHitpolyi_0x1dcbc8");
#endif

    ctx->pc = 0x1dcbc8u;

    // 0x1dcbc8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1dcbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1dcbcc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1dcbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1dcbd0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1dcbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dcbd4: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1dcbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1dcbd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dcbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcbdc: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1dcbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1dcbe0: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x1dcbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x1dcbe4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1dcbe4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcbe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dcbe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dcbec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBECu;
        // 0x1dcbf0: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCBF4u;
}
