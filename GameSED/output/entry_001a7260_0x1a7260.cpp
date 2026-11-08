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

// Function: entry_001a7260
// Address: 0x1a7260 - 0x1a7290
void entry_001a7260_0x1a7260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7260_0x1a7260");
#endif

    switch (ctx->pc) {
        case 0x1a7284u: goto label_1a7284;
        default: break;
    }

    ctx->pc = 0x1a7260u;

    // 0x1a7260: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a7260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a7264: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a7264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7268: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a7268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a726c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a7270: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a7270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a7274: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7274u;
    {
        const bool branch_taken_0x1a7274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7274u;
        // 0x1a7278: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7274) {
            ctx->pc = 0x1A7290u;
            return;
        }
    }
    ctx->pc = 0x1A727Cu;
    // 0x1a727c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A727Cu;
    SET_GPR_U32(ctx, 31, 0x1A7284u);
    ctx->pc = 0x1A7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A727Cu;
    // 0x1a7280: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A727Cu, 0x1A7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7284u;
label_1a7284:
    // 0x1a7284: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7284u;
    {
        const bool branch_taken_0x1a7284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7284u;
        // 0x1a7288: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7284) {
            ctx->pc = 0x1A7294u;
            return;
        }
    }
    ctx->pc = 0x1A728Cu;
    // 0x1a728c: 0x0  nop
    ctx->pc = 0x1a728cu;
    // NOP
    ctx->pc = 0x1a7290u;
}
