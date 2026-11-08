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

// Function: __get_eh_info
// Address: 0x1cd298 - 0x1cd2c0
void ps2___get_eh_info_0x1cd298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___get_eh_info_0x1cd298");
#endif

    switch (ctx->pc) {
        case 0x1cd298u: goto label_1cd298;
        case 0x1cd29cu: goto label_1cd29c;
        case 0x1cd2a0u: goto label_1cd2a0;
        case 0x1cd2a4u: goto label_1cd2a4;
        case 0x1cd2a8u: goto label_1cd2a8;
        case 0x1cd2acu: goto label_1cd2ac;
        case 0x1cd2b0u: goto label_1cd2b0;
        case 0x1cd2b4u: goto label_1cd2b4;
        case 0x1cd2b8u: goto label_1cd2b8;
        case 0x1cd2bcu: goto label_1cd2bc;
        default: break;
    }

    ctx->pc = 0x1cd298u;

label_1cd298:
    // 0x1cd298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cd29c:
    // 0x1cd29c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1cd29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1cd2a0:
    // 0x1cd2a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cd2a4:
    // 0x1cd2a4: 0x8c62de14  lw          $v0, -0x21EC($v1)
    ctx->pc = 0x1cd2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958612)));
label_1cd2a8:
    // 0x1cd2a8: 0x40f809  jalr        $v0
label_1cd2ac:
    if (ctx->pc == 0x1CD2ACu) {
        ctx->pc = 0x1CD2B0u;
        goto label_1cd2b0;
    }
    ctx->pc = 0x1CD2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD2B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD2A8u, 0x1CD2B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD2B0u;
label_1cd2b0:
    // 0x1cd2b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd2b4:
    // 0x1cd2b4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1cd2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1cd2b8:
    // 0x1cd2b8: 0x3e00008  jr          $ra
label_1cd2bc:
    if (ctx->pc == 0x1CD2BCu) {
        ctx->pc = 0x1CD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2B8u;
        // 0x1cd2bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2C0u;
        goto label_fallthrough_0x1cd2b8;
    }
    ctx->pc = 0x1CD2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2B8u;
        // 0x1cd2bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cd2b8:
    ctx->pc = 0x1CD2C0u;
}
