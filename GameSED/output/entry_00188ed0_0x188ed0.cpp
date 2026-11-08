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

// Function: entry_00188ed0
// Address: 0x188ed0 - 0x188f00
void entry_00188ed0_0x188ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188ed0_0x188ed0");
#endif

    switch (ctx->pc) {
        case 0x188ee0u: goto label_188ee0;
        case 0x188ef4u: goto label_188ef4;
        default: break;
    }

    ctx->pc = 0x188ed0u;

    // 0x188ed0: 0x262600e0  addiu       $a2, $s1, 0xE0
    ctx->pc = 0x188ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x188ed4: 0x262700f0  addiu       $a3, $s1, 0xF0
    ctx->pc = 0x188ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x188ed8: 0xc06f060  jal         func_1BC180
    ctx->pc = 0x188ED8u;
    SET_GPR_U32(ctx, 31, 0x188EE0u);
    ctx->pc = 0x188EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188ED8u;
    // 0x188edc: 0x26280090  addiu       $t0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC180u, 0x188ED8u, 0x188EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EE0u;
label_188ee0:
    // 0x188ee0: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x188ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x188ee4: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x188ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x188ee8: 0x262600b0  addiu       $a2, $s1, 0xB0
    ctx->pc = 0x188ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x188eec: 0xc06f030  jal         func_1BC0C0
    ctx->pc = 0x188EECu;
    SET_GPR_U32(ctx, 31, 0x188EF4u);
    ctx->pc = 0x188EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188EECu;
    // 0x188ef0: 0x262700c0  addiu       $a3, $s1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC0C0u, 0x188EECu, 0x188EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EF4u;
label_188ef4:
    // 0x188ef4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x188EF4u;
    {
        const bool branch_taken_0x188ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EF4u;
        // 0x188ef8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ef4) {
            ctx->pc = 0x188FA0u;
            return;
        }
    }
    ctx->pc = 0x188EFCu;
    // 0x188efc: 0x0  nop
    ctx->pc = 0x188efcu;
    // NOP
    ctx->pc = 0x188f00u;
}
