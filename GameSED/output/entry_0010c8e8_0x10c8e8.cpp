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

// Function: entry_0010c8e8
// Address: 0x10c8e8 - 0x10c904
void entry_0010c8e8_0x10c8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c8e8_0x10c8e8");
#endif

    ctx->pc = 0x10c8e8u;

    // 0x10c8e8: 0x0  nop
    ctx->pc = 0x10c8e8u;
    // NOP
    // 0x10c8ec: 0x0  nop
    ctx->pc = 0x10c8ecu;
    // NOP
    // 0x10c8f0: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x10c8f0u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x10c8f4: 0xe6010234  swc1        $f1, 0x234($s0)
    ctx->pc = 0x10c8f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 564), bits); }
    // 0x10c8f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10c8f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x10C8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8FCu;
        // 0x10c900: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C904u;
}
