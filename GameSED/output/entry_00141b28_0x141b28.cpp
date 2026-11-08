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

// Function: entry_00141b28
// Address: 0x141b28 - 0x141b5c
void entry_00141b28_0x141b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141b28_0x141b28");
#endif

    switch (ctx->pc) {
        case 0x141b3cu: goto label_141b3c;
        default: break;
    }

    ctx->pc = 0x141b28u;

    // 0x141b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141b2c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x141b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x141b30: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x141b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x141b34: 0xc061a46  jal         func_186918
    ctx->pc = 0x141B34u;
    SET_GPR_U32(ctx, 31, 0x141B3Cu);
    ctx->pc = 0x141B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B34u;
    // 0x141b38: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x141B34u, 0x141B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B3Cu;
label_141b3c:
    // 0x141b3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x141b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b40: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x141B40u;
    {
        const bool branch_taken_0x141b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B40u;
        // 0x141b44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141b40) {
            ctx->pc = 0x141B5Cu;
            return;
        }
    }
    ctx->pc = 0x141B48u;
    // 0x141b48: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x141b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x141b4c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x141b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x141b50: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x141b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x141b54: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x141B54u;
    {
        const bool branch_taken_0x141b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141b54) {
            ctx->pc = 0x141B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141B54u;
            // 0x141b58: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141B5Cu;
            return;
        }
    }
    ctx->pc = 0x141B5Cu;
}
