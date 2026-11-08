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

// Function: entry_001911a0
// Address: 0x1911a0 - 0x1911d0
void entry_001911a0_0x1911a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001911a0_0x1911a0");
#endif

    switch (ctx->pc) {
        case 0x1911a8u: goto label_1911a8;
        default: break;
    }

    ctx->pc = 0x1911a0u;

label_1911a0:
    // 0x1911a0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1911A0u;
    SET_GPR_U32(ctx, 31, 0x1911A8u);
    ctx->pc = 0x1911A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911A0u;
    // 0x1911a4: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1911A0u, 0x1911A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1911A8u;
label_1911a8:
    // 0x1911a8: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x1911a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x1911ac: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1911ACu;
    {
        const bool branch_taken_0x1911ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1911B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911ACu;
        // 0x1911b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911ac) {
            ctx->pc = 0x1911A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1911a0;
        }
    }
    ctx->pc = 0x1911B4u;
    // 0x1911b4: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1911b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1911b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1911b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1911bc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1911BCu;
    {
        const bool branch_taken_0x1911bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1911C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911BCu;
        // 0x1911c0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911bc) {
            ctx->pc = 0x1911D0u;
            return;
        }
    }
    ctx->pc = 0x1911C4u;
    // 0x1911c4: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x1911c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1911c8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1911C8u;
    SET_GPR_U32(ctx, 31, 0x1911D0u);
    ctx->pc = 0x1911CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911C8u;
    // 0x1911cc: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1911C8u, 0x1911D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1911D0u;
}
