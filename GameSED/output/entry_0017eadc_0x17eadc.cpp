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

// Function: entry_0017eadc
// Address: 0x17eadc - 0x17eaf0
void entry_0017eadc_0x17eadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eadc_0x17eadc");
#endif

    switch (ctx->pc) {
        case 0x17eaecu: goto label_17eaec;
        default: break;
    }

    ctx->pc = 0x17eadcu;

    // 0x17eadc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EADCu;
    {
        const bool branch_taken_0x17eadc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eadc) {
            ctx->pc = 0x17EAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EADCu;
            // 0x17eae0: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EAF0u;
            return;
        }
    }
    ctx->pc = 0x17EAE4u;
    // 0x17eae4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17EAE4u;
    SET_GPR_U32(ctx, 31, 0x17EAECu);
    ctx->pc = 0x17EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAE4u;
    // 0x17eae8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17EAE4u, 0x17EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAECu;
label_17eaec:
    // 0x17eaec: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x17eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->pc = 0x17eaf0u;
}
