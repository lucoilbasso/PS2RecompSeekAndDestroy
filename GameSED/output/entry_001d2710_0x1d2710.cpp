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

// Function: entry_001d2710
// Address: 0x1d2710 - 0x1d2758
void entry_001d2710_0x1d2710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2710_0x1d2710");
#endif

    switch (ctx->pc) {
        case 0x1d2748u: goto label_1d2748;
        default: break;
    }

    ctx->pc = 0x1d2710u;

    // 0x1d2710: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x1d2710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x1d2714: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1d2714u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1d2718: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d271c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2720: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d2720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2724: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2728: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d272c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d272cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2730: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d2730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d2734: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2734u;
    {
        const bool branch_taken_0x1d2734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2734u;
        // 0x1d2738: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2734) {
            ctx->pc = 0x1D2758u;
            return;
        }
    }
    ctx->pc = 0x1D273Cu;
    // 0x1d273c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d273cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2740: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2740u;
    SET_GPR_U32(ctx, 31, 0x1D2748u);
    ctx->pc = 0x1D2744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2740u;
    // 0x1d2744: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2740u, 0x1D2748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2748u;
label_1d2748:
    // 0x1d2748: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1D2748u;
    {
        const bool branch_taken_0x1d2748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2748u;
        // 0x1d274c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2748) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D2750u;
    // 0x1d2750: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d2750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2754: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d2754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d2758u;
}
