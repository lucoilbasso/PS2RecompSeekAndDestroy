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

// Function: entry_0014ccb0
// Address: 0x14ccb0 - 0x14ccd4
void entry_0014ccb0_0x14ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ccb0_0x14ccb0");
#endif

    switch (ctx->pc) {
        case 0x14ccd0u: goto label_14ccd0;
        default: break;
    }

    ctx->pc = 0x14ccb0u;

    // 0x14ccb0: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14ccb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14ccb4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14ccb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ccb8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14CCB8u;
    {
        const bool branch_taken_0x14ccb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ccb8) {
            ctx->pc = 0x14CCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CCB8u;
            // 0x14ccbc: 0x8e8201c0  lw          $v0, 0x1C0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CCD4u;
            return;
        }
    }
    ctx->pc = 0x14CCC0u;
    // 0x14ccc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ccc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ccc4: 0x26656bd8  addiu       $a1, $s3, 0x6BD8
    ctx->pc = 0x14ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 27608));
    // 0x14ccc8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14CCC8u;
    SET_GPR_U32(ctx, 31, 0x14CCD0u);
    ctx->pc = 0x14CCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCC8u;
    // 0x14cccc: 0x2406003b  addiu       $a2, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14CCC8u, 0x14CCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCD0u;
label_14ccd0:
    // 0x14ccd0: 0x8e8201c0  lw          $v0, 0x1C0($s4)
    ctx->pc = 0x14ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
    ctx->pc = 0x14ccd4u;
}
