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

// Function: caseD_b
// Address: 0x133540 - 0x133558
void caseD_b_0x133540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x133540");
#endif

    switch (ctx->pc) {
        case 0x13354cu: goto label_13354c;
        default: break;
    }

    ctx->pc = 0x133540u;

    // 0x133540: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x133540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x133544: 0xc052f32  jal         func_14BCC8
    ctx->pc = 0x133544u;
    SET_GPR_U32(ctx, 31, 0x13354Cu);
    ctx->pc = 0x133548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133544u;
    // 0x133548: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BCC8u, 0x133544u, 0x13354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13354Cu;
label_13354c:
    // 0x13354c: 0x100002d5  b           . + 4 + (0x2D5 << 2)
    ctx->pc = 0x13354Cu;
    {
        const bool branch_taken_0x13354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13354Cu;
        // 0x133550: 0x96700238  lhu         $s0, 0x238($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13354c) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133554u;
    // 0x133554: 0x0  nop
    ctx->pc = 0x133554u;
    // NOP
    ctx->pc = 0x133558u;
}
