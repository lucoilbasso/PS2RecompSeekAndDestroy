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

// Function: _search_svdata
// Address: 0x1b1590 - 0x1b15dc
void _search_svdata_0x1b1590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_search_svdata_0x1b1590");
#endif

    switch (ctx->pc) {
        case 0x1b15a0u: goto label_1b15a0;
        case 0x1b15b0u: goto label_1b15b0;
        default: break;
    }

    ctx->pc = 0x1b1590u;

    // 0x1b1590: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x1b1590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1b1594: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B1594u;
    {
        const bool branch_taken_0x1b1594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1594) {
            ctx->pc = 0x1B15D4u;
            goto label_1b15d4;
        }
    }
    ctx->pc = 0x1B159Cu;
    // 0x1b159c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1b159cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b15a0:
    // 0x1b15a0: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B15A0u;
    {
        const bool branch_taken_0x1b15a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b15a0) {
            ctx->pc = 0x1B15A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B15A0u;
            // 0x1b15a4: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B15CCu;
            goto label_1b15cc;
        }
    }
    ctx->pc = 0x1B15A8u;
    // 0x1b15a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b15ac: 0x0  nop
    ctx->pc = 0x1b15acu;
    // NOP
label_1b15b0:
    // 0x1b15b0: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B15B0u;
    {
        const bool branch_taken_0x1b15b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b15b0) {
            ctx->pc = 0x1B15B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B15B0u;
            // 0x1b15b4: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B15C0u;
            goto label_1b15c0;
        }
    }
    ctx->pc = 0x1B15B8u;
    // 0x1b15b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B15B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15B8u;
        // 0x1b15bc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B15B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B15C0u;
label_1b15c0:
    // 0x1b15c0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B15C0u;
    {
        const bool branch_taken_0x1b15c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b15c0) {
            ctx->pc = 0x1B15C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B15C0u;
            // 0x1b15c4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B15B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b15b0;
        }
    }
    ctx->pc = 0x1B15C8u;
    // 0x1b15c8: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x1b15c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1b15cc:
    // 0x1b15cc: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B15CCu;
    {
        const bool branch_taken_0x1b15cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b15cc) {
            ctx->pc = 0x1B15D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B15CCu;
            // 0x1b15d0: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B15A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b15a0;
        }
    }
    ctx->pc = 0x1B15D4u;
label_1b15d4:
    // 0x1b15d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B15D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B15D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15D4u;
        // 0x1b15d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B15D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B15DCu;
}
