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

// Function: entry_001dd740
// Address: 0x1dd740 - 0x1dd75c
void entry_001dd740_0x1dd740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd740_0x1dd740");
#endif

    ctx->pc = 0x1dd740u;

    // 0x1dd740: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x1dd740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1dd744: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1dd744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1dd748: 0xe480017c  swc1        $f0, 0x17C($a0)
    ctx->pc = 0x1dd748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 380), bits); }
    // 0x1dd74c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1dd74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dd750: 0xe4820180  swc1        $f2, 0x180($a0)
    ctx->pc = 0x1dd750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x1dd754: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD754u;
        // 0x1dd758: 0xac830150  sw          $v1, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD75Cu;
}
