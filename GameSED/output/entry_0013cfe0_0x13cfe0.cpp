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

// Function: entry_0013cfe0
// Address: 0x13cfe0 - 0x13d010
void entry_0013cfe0_0x13cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cfe0_0x13cfe0");
#endif

    switch (ctx->pc) {
        case 0x13cfe8u: goto label_13cfe8;
        default: break;
    }

    ctx->pc = 0x13cfe0u;

label_13cfe0:
    // 0x13cfe0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x13CFE0u;
    SET_GPR_U32(ctx, 31, 0x13CFE8u);
    ctx->pc = 0x13CFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFE0u;
    // 0x13cfe4: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x13CFE0u, 0x13CFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFE8u;
label_13cfe8:
    // 0x13cfe8: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x13cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x13cfec: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13CFECu;
    {
        const bool branch_taken_0x13cfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFECu;
        // 0x13cff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cfec) {
            ctx->pc = 0x13CFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cfe0;
        }
    }
    ctx->pc = 0x13CFF4u;
    // 0x13cff4: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x13cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13cff8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13cff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13cffc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13CFFCu;
    {
        const bool branch_taken_0x13cffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFFCu;
        // 0x13d000: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cffc) {
            ctx->pc = 0x13D010u;
            return;
        }
    }
    ctx->pc = 0x13D004u;
    // 0x13d004: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x13d004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x13d008: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13D008u;
    SET_GPR_U32(ctx, 31, 0x13D010u);
    ctx->pc = 0x13D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D008u;
    // 0x13d00c: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13D008u, 0x13D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D010u;
}
