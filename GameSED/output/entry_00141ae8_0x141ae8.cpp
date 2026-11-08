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

// Function: entry_00141ae8
// Address: 0x141ae8 - 0x141b04
void entry_00141ae8_0x141ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141ae8_0x141ae8");
#endif

    switch (ctx->pc) {
        case 0x141af4u: goto label_141af4;
        default: break;
    }

    ctx->pc = 0x141ae8u;

label_141ae8:
    // 0x141ae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x141ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141aec: 0xc050680  jal         func_141A00
    ctx->pc = 0x141AECu;
    SET_GPR_U32(ctx, 31, 0x141AF4u);
    ctx->pc = 0x141AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141AECu;
    // 0x141af0: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A00u, 0x141AECu, 0x141AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141AF4u;
label_141af4:
    // 0x141af4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141AF4u;
    {
        const bool branch_taken_0x141af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AF4u;
        // 0x141af8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141af4) {
            ctx->pc = 0x141B08u;
            return;
        }
    }
    ctx->pc = 0x141AFCu;
    // 0x141afc: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141AFCu;
    {
        const bool branch_taken_0x141afc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x141B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AFCu;
        // 0x141b00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141afc) {
            ctx->pc = 0x141AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141ae8;
        }
    }
    ctx->pc = 0x141B04u;
}
