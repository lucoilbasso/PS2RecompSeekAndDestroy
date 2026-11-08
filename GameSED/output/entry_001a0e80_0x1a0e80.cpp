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

// Function: entry_001a0e80
// Address: 0x1a0e80 - 0x1a0eac
void entry_001a0e80_0x1a0e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0e80_0x1a0e80");
#endif

    switch (ctx->pc) {
        case 0x1a0ea4u: goto label_1a0ea4;
        default: break;
    }

    ctx->pc = 0x1a0e80u;

label_1a0e80:
    // 0x1a0e80: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1a0e80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a0e84:
    // 0x1a0e84: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1a0e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a0e88:
    // 0x1a0e88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a0e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0e8c:
    // 0x1a0e8c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1a0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a0e90:
    // 0x1a0e90: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1a0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1a0e94:
    // 0x1a0e94: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1a0e94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1a0e98:
    // 0x1a0e98: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a0e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a0e9c:
    // 0x1a0e9c: 0x60f809  jalr        $v1
label_1a0ea0:
    if (ctx->pc == 0x1A0EA0u) {
        ctx->pc = 0x1A0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E9Cu;
        // 0x1a0ea0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0EA4u;
        goto label_1a0ea4;
    }
    ctx->pc = 0x1A0E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A0EA4u);
        ctx->pc = 0x1A0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E9Cu;
        // 0x1a0ea0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0E9Cu, 0x1A0EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0EA4u;
label_1a0ea4:
    // 0x1a0ea4: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
label_1a0ea8:
    if (ctx->pc == 0x1A0EA8u) {
        ctx->pc = 0x1A0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0EA4u;
        // 0x1a0ea8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0EACu;
        goto label_fallthrough_0x1a0ea4;
    }
    ctx->pc = 0x1A0EA4u;
    {
        const bool branch_taken_0x1a0ea4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0EA4u;
        // 0x1a0ea8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ea4) {
            ctx->pc = 0x1A0E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0e80;
        }
    }
label_fallthrough_0x1a0ea4:
    ctx->pc = 0x1A0EACu;
}
