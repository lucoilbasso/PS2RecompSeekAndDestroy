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

// Function: entry_001840e8
// Address: 0x1840e8 - 0x184110
void entry_001840e8_0x1840e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001840e8_0x1840e8");
#endif

    switch (ctx->pc) {
        case 0x18410cu: goto label_18410c;
        default: break;
    }

    ctx->pc = 0x1840e8u;

    // 0x1840e8: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1840e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1840ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1840ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1840f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1840F0u;
    {
        const bool branch_taken_0x1840f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1840f0) {
            ctx->pc = 0x1840F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1840F0u;
            // 0x1840f4: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184110u;
            return;
        }
    }
    ctx->pc = 0x1840F8u;
    // 0x1840f8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1840f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1840fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1840fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184100: 0x24a57e60  addiu       $a1, $a1, 0x7E60
    ctx->pc = 0x184100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32352));
    // 0x184104: 0xc068186  jal         func_1A0618
    ctx->pc = 0x184104u;
    SET_GPR_U32(ctx, 31, 0x18410Cu);
    ctx->pc = 0x184108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184104u;
    // 0x184108: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x184104u, 0x18410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18410Cu;
label_18410c:
    // 0x18410c: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x18410cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->pc = 0x184110u;
}
