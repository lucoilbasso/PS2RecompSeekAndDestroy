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

// Function: entry_00193280
// Address: 0x193280 - 0x1932b0
void entry_00193280_0x193280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193280_0x193280");
#endif

    switch (ctx->pc) {
        case 0x193288u: goto label_193288;
        default: break;
    }

    ctx->pc = 0x193280u;

label_193280:
    // 0x193280: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x193280u;
    SET_GPR_U32(ctx, 31, 0x193288u);
    ctx->pc = 0x193284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193280u;
    // 0x193284: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x193280u, 0x193288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193288u;
label_193288:
    // 0x193288: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x193288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x19328c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19328Cu;
    {
        const bool branch_taken_0x19328c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x193290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19328Cu;
        // 0x193290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19328c) {
            ctx->pc = 0x193280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193280;
        }
    }
    ctx->pc = 0x193294u;
    // 0x193294: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x193294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x193298: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x193298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19329c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19329Cu;
    {
        const bool branch_taken_0x19329c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1932A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19329Cu;
        // 0x1932a0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19329c) {
            ctx->pc = 0x1932B0u;
            return;
        }
    }
    ctx->pc = 0x1932A4u;
    // 0x1932a4: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x1932a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1932a8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1932A8u;
    SET_GPR_U32(ctx, 31, 0x1932B0u);
    ctx->pc = 0x1932ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1932A8u;
    // 0x1932ac: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1932A8u, 0x1932B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1932B0u;
}
