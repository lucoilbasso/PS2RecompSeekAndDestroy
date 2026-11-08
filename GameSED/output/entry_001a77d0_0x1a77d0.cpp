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

// Function: entry_001a77d0
// Address: 0x1a77d0 - 0x1a7800
void entry_001a77d0_0x1a77d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a77d0_0x1a77d0");
#endif

    switch (ctx->pc) {
        case 0x1a77f8u: goto label_1a77f8;
        default: break;
    }

    ctx->pc = 0x1a77d0u;

    // 0x1a77d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a77d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a77d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a77d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a77d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a77d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a77dc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a77dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a77e0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a77e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a77e4: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a77e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a77e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A77E8u;
    {
        const bool branch_taken_0x1a77e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77E8u;
        // 0x1a77ec: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77e8) {
            ctx->pc = 0x1A7800u;
            return;
        }
    }
    ctx->pc = 0x1A77F0u;
    // 0x1a77f0: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A77F0u;
    SET_GPR_U32(ctx, 31, 0x1A77F8u);
    ctx->pc = 0x1A77F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77F0u;
    // 0x1a77f4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A77F0u, 0x1A77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77F8u;
label_1a77f8:
    // 0x1a77f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A77F8u;
    {
        const bool branch_taken_0x1a77f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77F8u;
        // 0x1a77fc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77f8) {
            ctx->pc = 0x1A7804u;
            return;
        }
    }
    ctx->pc = 0x1A7800u;
}
