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

// Function: entry_00134cc0
// Address: 0x134cc0 - 0x134cfc
void entry_00134cc0_0x134cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134cc0_0x134cc0");
#endif

    switch (ctx->pc) {
        case 0x134cd8u: goto label_134cd8;
        case 0x134cf4u: goto label_134cf4;
        default: break;
    }

    ctx->pc = 0x134cc0u;

    // 0x134cc0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x134cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x134cc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134cc8: 0x1070000c  beq         $v1, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x134CC8u;
    {
        const bool branch_taken_0x134cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x134CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CC8u;
        // 0x134ccc: 0x8f858a30  lw          $a1, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134cc8) {
            ctx->pc = 0x134CFCu;
            return;
        }
    }
    ctx->pc = 0x134CD0u;
    // 0x134cd0: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x134CD0u;
    SET_GPR_U32(ctx, 31, 0x134CD8u);
    ctx->pc = 0x134CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134CD0u;
    // 0x134cd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x134CD0u, 0x134CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134CD8u;
label_134cd8:
    // 0x134cd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x134cd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134cdc: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x134cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x134ce0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134ce4: 0x10700005  beq         $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x134CE4u;
    {
        const bool branch_taken_0x134ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x134CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CE4u;
        // 0x134ce8: 0x8f858a30  lw          $a1, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ce4) {
            ctx->pc = 0x134CFCu;
            return;
        }
    }
    ctx->pc = 0x134CECu;
    // 0x134cec: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x134CECu;
    SET_GPR_U32(ctx, 31, 0x134CF4u);
    ctx->pc = 0x134CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134CECu;
    // 0x134cf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134CECu, 0x134CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134CF4u;
label_134cf4:
    // 0x134cf4: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x134cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x134cf8: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x134cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    ctx->pc = 0x134cfcu;
}
