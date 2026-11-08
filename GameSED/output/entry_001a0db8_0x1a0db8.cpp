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

// Function: entry_001a0db8
// Address: 0x1a0db8 - 0x1a0de0
void entry_001a0db8_0x1a0db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0db8_0x1a0db8");
#endif

    switch (ctx->pc) {
        case 0x1a0dd4u: goto label_1a0dd4;
        default: break;
    }

    ctx->pc = 0x1a0db8u;

label_1a0db8:
    // 0x1a0db8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1a0db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a0dbc:
    // 0x1a0dbc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1a0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1a0dc0:
    // 0x1a0dc0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1a0dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a0dc4:
    // 0x1a0dc4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1a0dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1a0dc8:
    // 0x1a0dc8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a0dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a0dcc:
    // 0x1a0dcc: 0x60f809  jalr        $v1
label_1a0dd0:
    if (ctx->pc == 0x1A0DD0u) {
        ctx->pc = 0x1A0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DCCu;
        // 0x1a0dd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DD4u;
        goto label_1a0dd4;
    }
    ctx->pc = 0x1A0DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A0DD4u);
        ctx->pc = 0x1A0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DCCu;
        // 0x1a0dd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0DCCu, 0x1A0DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0DD4u;
label_1a0dd4:
    // 0x1a0dd4: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_1a0dd8:
    if (ctx->pc == 0x1A0DD8u) {
        ctx->pc = 0x1A0DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DD4u;
        // 0x1a0dd8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DDCu;
        goto label_1a0ddc;
    }
    ctx->pc = 0x1A0DD4u;
    {
        const bool branch_taken_0x1a0dd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0dd4) {
            ctx->pc = 0x1A0DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0DD4u;
            // 0x1a0dd8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0db8;
        }
    }
    ctx->pc = 0x1A0DDCu;
label_1a0ddc:
    // 0x1a0ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a0de0u;
}
