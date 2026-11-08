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

// Function: entry_001aa2b8
// Address: 0x1aa2b8 - 0x1aa2d4
void entry_001aa2b8_0x1aa2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa2b8_0x1aa2b8");
#endif

    ctx->pc = 0x1aa2b8u;

    // 0x1aa2b8: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1aa2b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1aa2bc: 0x0  nop
    ctx->pc = 0x1aa2bcu;
    // NOP
    // 0x1aa2c0: 0x0  nop
    ctx->pc = 0x1aa2c0u;
    // NOP
    // 0x1aa2c4: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x1aa2c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x1aa2c8: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x1aa2c8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x1aa2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2CCu;
        // 0x1aa2d0: 0xe4460014  swc1        $f6, 0x14($v0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA2D4u;
}
