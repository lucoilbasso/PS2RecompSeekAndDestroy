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

// Function: entry_001ceb00
// Address: 0x1ceb00 - 0x1ceb38
void entry_001ceb00_0x1ceb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceb00_0x1ceb00");
#endif

    switch (ctx->pc) {
        case 0x1ceb34u: goto label_1ceb34;
        default: break;
    }

    ctx->pc = 0x1ceb00u;

    // 0x1ceb00: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CEB00u;
    {
        const bool branch_taken_0x1ceb00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB00u;
        // 0x1ceb04: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb00) {
            ctx->pc = 0x1CEB38u;
            return;
        }
    }
    ctx->pc = 0x1CEB08u;
    // 0x1ceb08: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ceb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ceb0c: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1ceb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1ceb10: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1ceb10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1ceb14: 0x24a51de8  addiu       $a1, $a1, 0x1DE8
    ctx->pc = 0x1ceb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7656));
    // 0x1ceb18: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1ceb18u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceb1c: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ceb1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ceb20: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ceb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ceb24: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ceb24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb28: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1ceb28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1ceb2c: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CEB2Cu;
    SET_GPR_U32(ctx, 31, 0x1CEB34u);
    ctx->pc = 0x1CEB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEB2Cu;
    // 0x1ceb30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CEB2Cu, 0x1CEB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB34u;
label_1ceb34:
    // 0x1ceb34: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ceb34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ceb38u;
}
