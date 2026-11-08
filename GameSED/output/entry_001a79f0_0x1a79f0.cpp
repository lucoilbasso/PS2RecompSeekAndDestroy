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

// Function: entry_001a79f0
// Address: 0x1a79f0 - 0x1a7a20
void entry_001a79f0_0x1a79f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a79f0_0x1a79f0");
#endif

    switch (ctx->pc) {
        case 0x1a7a18u: goto label_1a7a18;
        default: break;
    }

    ctx->pc = 0x1a79f0u;

    // 0x1a79f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a79f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a79f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a79f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a79f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a79f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a79fc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a79fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a7a00: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a7a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a7a04: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a7a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a7a08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7A08u;
    {
        const bool branch_taken_0x1a7a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A08u;
        // 0x1a7a0c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a08) {
            ctx->pc = 0x1A7A20u;
            return;
        }
    }
    ctx->pc = 0x1A7A10u;
    // 0x1a7a10: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7A10u;
    SET_GPR_U32(ctx, 31, 0x1A7A18u);
    ctx->pc = 0x1A7A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A10u;
    // 0x1a7a14: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7A10u, 0x1A7A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A18u;
label_1a7a18:
    // 0x1a7a18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7A18u;
    {
        const bool branch_taken_0x1a7a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A18u;
        // 0x1a7a1c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a18) {
            ctx->pc = 0x1A7A24u;
            return;
        }
    }
    ctx->pc = 0x1A7A20u;
}
