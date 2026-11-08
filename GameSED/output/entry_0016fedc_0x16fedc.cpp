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

// Function: entry_0016fedc
// Address: 0x16fedc - 0x16ff04
void entry_0016fedc_0x16fedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fedc_0x16fedc");
#endif

    switch (ctx->pc) {
        case 0x16fee4u: goto label_16fee4;
        default: break;
    }

    ctx->pc = 0x16fedcu;

    // 0x16fedc: 0xc0680c8  jal         func_1A0320
    ctx->pc = 0x16FEDCu;
    SET_GPR_U32(ctx, 31, 0x16FEE4u);
    ctx->pc = 0x1A0320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0320u, 0x16FEDCu, 0x16FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FEE4u;
label_16fee4:
    // 0x16fee4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16fee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16fee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16fee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16feec: 0x24a57648  addiu       $a1, $a1, 0x7648
    ctx->pc = 0x16feecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30280));
    // 0x16fef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16fef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fef4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FEF4u;
    {
        const bool branch_taken_0x16fef4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FEF4u;
        // 0x16fef8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fef4) {
            ctx->pc = 0x16FF04u;
            return;
        }
    }
    ctx->pc = 0x16FEFCu;
    // 0x16fefc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x16FEFCu;
    SET_GPR_U32(ctx, 31, 0x16FF04u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x16FEFCu, 0x16FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF04u;
}
