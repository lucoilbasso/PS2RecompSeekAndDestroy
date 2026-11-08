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

// Function: entry_001059ec
// Address: 0x1059ec - 0x105a04
void entry_001059ec_0x1059ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001059ec_0x1059ec");
#endif

    switch (ctx->pc) {
        case 0x1059f8u: goto label_1059f8;
        default: break;
    }

    ctx->pc = 0x1059ecu;

    // 0x1059ec: 0x8c45008c  lw          $a1, 0x8C($v0)
    ctx->pc = 0x1059ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1059f0: 0xc041228  jal         func_1048A0
    ctx->pc = 0x1059F0u;
    SET_GPR_U32(ctx, 31, 0x1059F8u);
    ctx->pc = 0x1059F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1059F0u;
    // 0x1059f4: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x1059F0u, 0x1059F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1059F8u;
label_1059f8:
    // 0x1059f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1059f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1059fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1059FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1059FCu;
        // 0x105a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1059FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105A04u;
}
