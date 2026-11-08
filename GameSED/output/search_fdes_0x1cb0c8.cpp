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

// Function: search_fdes
// Address: 0x1cb0c8 - 0x1cb120
void search_fdes_0x1cb0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("search_fdes_0x1cb0c8");
#endif

    switch (ctx->pc) {
        case 0x1cb0d8u: goto label_1cb0d8;
        default: break;
    }

    ctx->pc = 0x1cb0c8u;

    // 0x1cb0c8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1cb0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb0cc: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB0CCu;
    {
        const bool branch_taken_0x1cb0cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0CCu;
        // 0x1cb0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0cc) {
            ctx->pc = 0x1CB118u;
            goto label_1cb118;
        }
    }
    ctx->pc = 0x1CB0D4u;
    // 0x1cb0d4: 0x0  nop
    ctx->pc = 0x1cb0d4u;
    // NOP
label_1cb0d8:
    // 0x1cb0d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cb0dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB0DCu;
    {
        const bool branch_taken_0x1cb0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0DCu;
        // 0x1cb0e0: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0dc) {
            ctx->pc = 0x1CB104u;
            goto label_1cb104;
        }
    }
    ctx->pc = 0x1CB0E4u;
    // 0x1cb0e4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1cb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cb0e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB0E8u;
    {
        const bool branch_taken_0x1cb0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0E8u;
        // 0x1cb0ec: 0xa23023  subu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0e8) {
            ctx->pc = 0x1CB100u;
            goto label_1cb100;
        }
    }
    ctx->pc = 0x1CB0F0u;
    // 0x1cb0f0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1cb0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cb0f4: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x1cb0f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cb0f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB0F8u;
    {
        const bool branch_taken_0x1cb0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0F8u;
        // 0x1cb0fc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0f8) {
            ctx->pc = 0x1CB118u;
            goto label_1cb118;
        }
    }
    ctx->pc = 0x1CB100u;
label_1cb100:
    // 0x1cb100: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1cb100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1cb104:
    // 0x1cb104: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1cb104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cb108: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cb108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb10c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1CB10Cu;
    {
        const bool branch_taken_0x1cb10c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB10Cu;
        // 0x1cb110: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb10c) {
            ctx->pc = 0x1CB0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb0d8;
        }
    }
    ctx->pc = 0x1CB114u;
    // 0x1cb114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb118:
    // 0x1cb118: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB120u;
}
