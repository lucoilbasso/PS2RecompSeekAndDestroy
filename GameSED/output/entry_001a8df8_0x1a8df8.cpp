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

// Function: entry_001a8df8
// Address: 0x1a8df8 - 0x1a8e28
void entry_001a8df8_0x1a8df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8df8_0x1a8df8");
#endif

    switch (ctx->pc) {
        case 0x1a8e24u: goto label_1a8e24;
        default: break;
    }

    ctx->pc = 0x1a8df8u;

    // 0x1a8df8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8dfc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1a8dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e00: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x1a8e00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a8e04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a8e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8e08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a8e0c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a8e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a8e10: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1a8e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a8e14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8E14u;
    {
        const bool branch_taken_0x1a8e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E14u;
        // 0x1a8e18: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e14) {
            ctx->pc = 0x1A8E28u;
            return;
        }
    }
    ctx->pc = 0x1A8E1Cu;
    // 0x1a8e1c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A8E1Cu;
    SET_GPR_U32(ctx, 31, 0x1A8E24u);
    ctx->pc = 0x1A8E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E1Cu;
    // 0x1a8e20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A8E1Cu, 0x1A8E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E24u;
label_1a8e24:
    // 0x1a8e24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a8e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a8e28u;
}
