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

// Function: entry_00147310
// Address: 0x147310 - 0x147340
void entry_00147310_0x147310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147310_0x147310");
#endif

    switch (ctx->pc) {
        case 0x147318u: goto label_147318;
        default: break;
    }

    ctx->pc = 0x147310u;

label_147310:
    // 0x147310: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x147310u;
    SET_GPR_U32(ctx, 31, 0x147318u);
    ctx->pc = 0x147314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147310u;
    // 0x147314: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x147310u, 0x147318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147318u;
label_147318:
    // 0x147318: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x147318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x14731c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x14731Cu;
    {
        const bool branch_taken_0x14731c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x147320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14731Cu;
        // 0x147320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14731c) {
            ctx->pc = 0x147310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147310;
        }
    }
    ctx->pc = 0x147324u;
    // 0x147324: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x147324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x147328: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x147328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14732c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14732Cu;
    {
        const bool branch_taken_0x14732c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x147330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14732Cu;
        // 0x147330: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14732c) {
            ctx->pc = 0x147340u;
            return;
        }
    }
    ctx->pc = 0x147334u;
    // 0x147334: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x147334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x147338: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x147338u;
    SET_GPR_U32(ctx, 31, 0x147340u);
    ctx->pc = 0x14733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147338u;
    // 0x14733c: 0xae500090  sw          $s0, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x147338u, 0x147340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147340u;
}
