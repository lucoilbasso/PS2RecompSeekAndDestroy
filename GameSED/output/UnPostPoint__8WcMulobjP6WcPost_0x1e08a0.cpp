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

// Function: UnPostPoint__8WcMulobjP6WcPost
// Address: 0x1e08a0 - 0x1e0914
void UnPostPoint__8WcMulobjP6WcPost_0x1e08a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnPostPoint__8WcMulobjP6WcPost_0x1e08a0");
#endif

    switch (ctx->pc) {
        case 0x1e08b8u: goto label_1e08b8;
        default: break;
    }

    ctx->pc = 0x1e08a0u;

    // 0x1e08a0: 0x8c8301b0  lw          $v1, 0x1B0($a0)
    ctx->pc = 0x1e08a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x1e08a4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E08A4u;
    {
        const bool branch_taken_0x1e08a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E08A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08A4u;
        // 0x1e08a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e08a4) {
            ctx->pc = 0x1E090Cu;
            goto label_1e090c;
        }
    }
    ctx->pc = 0x1E08ACu;
    // 0x1e08ac: 0x248601b4  addiu       $a2, $a0, 0x1B4
    ctx->pc = 0x1e08acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 436));
    // 0x1e08b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e08b4: 0x0  nop
    ctx->pc = 0x1e08b4u;
    // NOP
label_1e08b8:
    // 0x1e08b8: 0x54450011  bnel        $v0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E08B8u;
    {
        const bool branch_taken_0x1e08b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e08b8) {
            ctx->pc = 0x1E08BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E08B8u;
            // 0x1e08bc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0900u;
            goto label_1e0900;
        }
    }
    ctx->pc = 0x1E08C0u;
    // 0x1e08c0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E08C0u;
    {
        const bool branch_taken_0x1e08c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08C0u;
        // 0x1e08c4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e08c0) {
            ctx->pc = 0x1E08D8u;
            goto label_1e08d8;
        }
    }
    ctx->pc = 0x1E08C8u;
    // 0x1e08c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e08cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E08CCu;
    {
        const bool branch_taken_0x1e08cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E08D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08CCu;
        // 0x1e08d0: 0xac8201b0  sw          $v0, 0x1B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e08cc) {
            ctx->pc = 0x1E08E0u;
            goto label_1e08e0;
        }
    }
    ctx->pc = 0x1E08D4u;
    // 0x1e08d4: 0x0  nop
    ctx->pc = 0x1e08d4u;
    // NOP
label_1e08d8:
    // 0x1e08d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e08d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e08dc: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1e08dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1e08e0:
    // 0x1e08e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e08e4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1e08e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1e08e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e08ec: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1e08ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1e08f0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e08f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1e08f4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e08f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1e08f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E08F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E08FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08F8u;
        // 0x1e08fc: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E08F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0900u;
label_1e0900:
    // 0x1e0900: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1e0900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e0904: 0x5460ffec  bnel        $v1, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1E0904u;
    {
        const bool branch_taken_0x1e0904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0904) {
            ctx->pc = 0x1E0908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0904u;
            // 0x1e0908: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E08B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e08b8;
        }
    }
    ctx->pc = 0x1E090Cu;
label_1e090c:
    // 0x1e090c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E090Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E090Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0914u;
}
