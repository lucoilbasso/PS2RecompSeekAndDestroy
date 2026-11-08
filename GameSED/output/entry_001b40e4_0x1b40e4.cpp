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

// Function: entry_001b40e4
// Address: 0x1b40e4 - 0x1b410c
void entry_001b40e4_0x1b40e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b40e4_0x1b40e4");
#endif

    switch (ctx->pc) {
        case 0x1b40ecu: goto label_1b40ec;
        case 0x1b4100u: goto label_1b4100;
        default: break;
    }

    ctx->pc = 0x1b40e4u;

    // 0x1b40e4: 0xc06ce50  jal         func_1B3940
    ctx->pc = 0x1B40E4u;
    SET_GPR_U32(ctx, 31, 0x1B40ECu);
    ctx->pc = 0x1B40E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B40E4u;
    // 0x1b40e8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3940u, 0x1B40E4u, 0x1B40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40ECu;
label_1b40ec:
    // 0x1b40ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b40ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40f0: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B40F0u;
    {
        const bool branch_taken_0x1b40f0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40F0u;
        // 0x1b40f4: 0x3c100025  lui         $s0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40f0) {
            ctx->pc = 0x1B410Cu;
            return;
        }
    }
    ctx->pc = 0x1B40F8u;
    // 0x1b40f8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B40F8u;
    SET_GPR_U32(ctx, 31, 0x1B4100u);
    ctx->pc = 0x1B40FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B40F8u;
    // 0x1b40fc: 0x8e04aa10  lw          $a0, -0x55F0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B40F8u, 0x1B4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4100u;
label_1b4100:
    // 0x1b4100: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1b4100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1b4104: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4104u;
    {
        const bool branch_taken_0x1b4104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4104u;
        // 0x1b4108: 0x8e04aa10  lw          $a0, -0x55F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4104) {
            ctx->pc = 0x1B412Cu;
            return;
        }
    }
    ctx->pc = 0x1B410Cu;
}
