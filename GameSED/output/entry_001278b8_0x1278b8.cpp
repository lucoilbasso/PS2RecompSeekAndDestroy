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

// Function: entry_001278b8
// Address: 0x1278b8 - 0x1278e8
void entry_001278b8_0x1278b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001278b8_0x1278b8");
#endif

    switch (ctx->pc) {
        case 0x1278c0u: goto label_1278c0;
        default: break;
    }

    ctx->pc = 0x1278b8u;

label_1278b8:
    // 0x1278b8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1278B8u;
    SET_GPR_U32(ctx, 31, 0x1278C0u);
    ctx->pc = 0x1278BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278B8u;
    // 0x1278bc: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1278B8u, 0x1278C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1278C0u;
label_1278c0:
    // 0x1278c0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x1278c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x1278c4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1278C4u;
    {
        const bool branch_taken_0x1278c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1278C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278C4u;
        // 0x1278c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278c4) {
            ctx->pc = 0x1278B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1278b8;
        }
    }
    ctx->pc = 0x1278CCu;
    // 0x1278cc: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1278ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1278d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1278d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1278d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1278D4u;
    {
        const bool branch_taken_0x1278d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1278D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278D4u;
        // 0x1278d8: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278d4) {
            ctx->pc = 0x1278E8u;
            return;
        }
    }
    ctx->pc = 0x1278DCu;
    // 0x1278dc: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x1278dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x1278e0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1278E0u;
    SET_GPR_U32(ctx, 31, 0x1278E8u);
    ctx->pc = 0x1278E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278E0u;
    // 0x1278e4: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1278E0u, 0x1278E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1278E8u;
}
