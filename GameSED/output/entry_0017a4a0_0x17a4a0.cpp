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

// Function: entry_0017a4a0
// Address: 0x17a4a0 - 0x17a4c8
void entry_0017a4a0_0x17a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a4a0_0x17a4a0");
#endif

    switch (ctx->pc) {
        case 0x17a4a8u: goto label_17a4a8;
        default: break;
    }

    ctx->pc = 0x17a4a0u;

label_17a4a0:
    // 0x17a4a0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17A4A0u;
    SET_GPR_U32(ctx, 31, 0x17A4A8u);
    ctx->pc = 0x17A4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A4A0u;
    // 0x17a4a4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17A4A0u, 0x17A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A4A8u;
label_17a4a8:
    // 0x17a4a8: 0x8f828cf0  lw          $v0, -0x7310($gp)
    ctx->pc = 0x17a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
    // 0x17a4ac: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17a4b0: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x17a4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x17a4b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A4B4u;
    {
        const bool branch_taken_0x17a4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4B4u;
        // 0x17a4b8: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4b4) {
            ctx->pc = 0x17A4C8u;
            return;
        }
    }
    ctx->pc = 0x17A4BCu;
    // 0x17a4bc: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x17A4BCu;
    {
        const bool branch_taken_0x17a4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4BCu;
        // 0x17a4c0: 0xaf838cf0  sw          $v1, -0x7310($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4bc) {
            ctx->pc = 0x17A4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a4a0;
        }
    }
    ctx->pc = 0x17A4C4u;
    // 0x17a4c4: 0x0  nop
    ctx->pc = 0x17a4c4u;
    // NOP
    ctx->pc = 0x17a4c8u;
}
