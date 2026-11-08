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

// Function: entry_001256a8
// Address: 0x1256a8 - 0x1256d4
void entry_001256a8_0x1256a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001256a8_0x1256a8");
#endif

    switch (ctx->pc) {
        case 0x1256b0u: goto label_1256b0;
        default: break;
    }

    ctx->pc = 0x1256a8u;

label_1256a8:
    // 0x1256a8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1256A8u;
    SET_GPR_U32(ctx, 31, 0x1256B0u);
    ctx->pc = 0x1256ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1256A8u;
    // 0x1256ac: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1256A8u, 0x1256B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1256B0u;
label_1256b0:
    // 0x1256b0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x1256b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x1256b4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1256B4u;
    {
        const bool branch_taken_0x1256b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1256B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256B4u;
        // 0x1256b8: 0x14102b  sltu        $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256b4) {
            ctx->pc = 0x1256A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1256a8;
        }
    }
    ctx->pc = 0x1256BCu;
    // 0x1256bc: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1256bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1256c0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1256C0u;
    {
        const bool branch_taken_0x1256c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1256C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256C0u;
        // 0x1256c4: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256c0) {
            ctx->pc = 0x1256D4u;
            return;
        }
    }
    ctx->pc = 0x1256C8u;
    // 0x1256c8: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x1256c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x1256cc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1256CCu;
    SET_GPR_U32(ctx, 31, 0x1256D4u);
    ctx->pc = 0x1256D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1256CCu;
    // 0x1256d0: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1256CCu, 0x1256D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1256D4u;
}
