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

// Function: entry_0013ee34
// Address: 0x13ee34 - 0x13ee48
void entry_0013ee34_0x13ee34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ee34_0x13ee34");
#endif

    switch (ctx->pc) {
        case 0x13ee3cu: goto label_13ee3c;
        default: break;
    }

    ctx->pc = 0x13ee34u;

    // 0x13ee34: 0xc061a9e  jal         func_186A78
    ctx->pc = 0x13EE34u;
    SET_GPR_U32(ctx, 31, 0x13EE3Cu);
    ctx->pc = 0x13EE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE34u;
    // 0x13ee38: 0xe46001f0  swc1        $f0, 0x1F0($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 496), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186A78u, 0x13EE34u, 0x13EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE3Cu;
label_13ee3c:
    // 0x13ee3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ee3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ee40: 0x3e00008  jr          $ra
    ctx->pc = 0x13EE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE40u;
        // 0x13ee44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EE48u;
}
