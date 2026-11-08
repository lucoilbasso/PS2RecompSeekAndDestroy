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

// Function: entry_00127250
// Address: 0x127250 - 0x127280
void entry_00127250_0x127250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127250_0x127250");
#endif

    switch (ctx->pc) {
        case 0x127258u: goto label_127258;
        default: break;
    }

    ctx->pc = 0x127250u;

label_127250:
    // 0x127250: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x127250u;
    SET_GPR_U32(ctx, 31, 0x127258u);
    ctx->pc = 0x127254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127250u;
    // 0x127254: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x127250u, 0x127258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127258u;
label_127258:
    // 0x127258: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x127258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12725c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12725Cu;
    {
        const bool branch_taken_0x12725c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x127260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12725Cu;
        // 0x127260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12725c) {
            ctx->pc = 0x127250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127250;
        }
    }
    ctx->pc = 0x127264u;
    // 0x127264: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x127264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x127268: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x127268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12726c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12726Cu;
    {
        const bool branch_taken_0x12726c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x127270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12726Cu;
        // 0x127270: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12726c) {
            ctx->pc = 0x127280u;
            return;
        }
    }
    ctx->pc = 0x127274u;
    // 0x127274: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x127274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x127278: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x127278u;
    SET_GPR_U32(ctx, 31, 0x127280u);
    ctx->pc = 0x12727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127278u;
    // 0x12727c: 0xae110090  sw          $s1, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x127278u, 0x127280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127280u;
}
