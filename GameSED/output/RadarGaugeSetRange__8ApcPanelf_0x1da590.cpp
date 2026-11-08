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

// Function: RadarGaugeSetRange__8ApcPanelf
// Address: 0x1da590 - 0x1da5ac
void RadarGaugeSetRange__8ApcPanelf_0x1da590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RadarGaugeSetRange__8ApcPanelf_0x1da590");
#endif

    ctx->pc = 0x1da590u;

    // 0x1da590: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x1da590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x1da594: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1da594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da598: 0x0  nop
    ctx->pc = 0x1da598u;
    // NOP
    // 0x1da59c: 0x0  nop
    ctx->pc = 0x1da59cu;
    // NOP
    // 0x1da5a0: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x1da5a0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x1da5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5A4u;
        // 0x1da5a8: 0xe4800fc4  swc1        $f0, 0xFC4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4036), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA5ACu;
}
