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

// Function: entry_001966e0
// Address: 0x1966e0 - 0x196710
void entry_001966e0_0x1966e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001966e0_0x1966e0");
#endif

    switch (ctx->pc) {
        case 0x1966f8u: goto label_1966f8;
        default: break;
    }

    ctx->pc = 0x1966e0u;

label_1966e0:
    // 0x1966e0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1966e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1966e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1966e8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1966e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1966ec: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x1966ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1966f0: 0xc05f874  jal         func_17E1D0
    ctx->pc = 0x1966F0u;
    SET_GPR_U32(ctx, 31, 0x1966F8u);
    ctx->pc = 0x1966F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1966F0u;
    // 0x1966f4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1D0u, 0x1966F0u, 0x1966F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1966F8u;
label_1966f8:
    // 0x1966f8: 0x8e0301bc  lw          $v1, 0x1BC($s0)
    ctx->pc = 0x1966f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1966fc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1966fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196700: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x196700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x196704: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x196704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x196708: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x196708u;
    {
        const bool branch_taken_0x196708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196708) {
            ctx->pc = 0x19670Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196708u;
            // 0x19670c: 0x8c650028  lw          $a1, 0x28($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1966E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1966e0;
        }
    }
    ctx->pc = 0x196710u;
}
