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

// Function: entry_00101b10
// Address: 0x101b10 - 0x101b40
void entry_00101b10_0x101b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101b10_0x101b10");
#endif

    switch (ctx->pc) {
        case 0x101b18u: goto label_101b18;
        case 0x101b3cu: goto label_101b3c;
        default: break;
    }

    ctx->pc = 0x101b10u;

    // 0x101b10: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101B10u;
    SET_GPR_U32(ctx, 31, 0x101B18u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101B10u, 0x101B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B18u;
label_101b18:
    // 0x101b18: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x101b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x101b1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x101b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b20: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x101b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x101b24: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x101B24u;
    {
        const bool branch_taken_0x101b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B24u;
        // 0x101b28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b24) {
            ctx->pc = 0x101B78u;
            return;
        }
    }
    ctx->pc = 0x101B2Cu;
    // 0x101b2c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101B2Cu;
    {
        const bool branch_taken_0x101b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x101B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B2Cu;
        // 0x101b30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b2c) {
            ctx->pc = 0x101B40u;
            return;
        }
    }
    ctx->pc = 0x101B34u;
    // 0x101b34: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101B34u;
    SET_GPR_U32(ctx, 31, 0x101B3Cu);
    ctx->pc = 0x101B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B34u;
    // 0x101b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101B34u, 0x101B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B3Cu;
label_101b3c:
    // 0x101b3c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x101b3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101b40u;
}
