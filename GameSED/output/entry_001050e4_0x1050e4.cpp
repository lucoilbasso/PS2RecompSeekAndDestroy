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

// Function: entry_001050e4
// Address: 0x1050e4 - 0x105120
void entry_001050e4_0x1050e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001050e4_0x1050e4");
#endif

    switch (ctx->pc) {
        case 0x105110u: goto label_105110;
        default: break;
    }

    ctx->pc = 0x1050e4u;

    // 0x1050e4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1050e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1050e8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1050e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1050ec: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1050ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1050f0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1050f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1050f4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1050f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1050f8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1050f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1050fc: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x1050FCu;
    {
        const bool branch_taken_0x1050fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050FCu;
        // 0x105100: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050fc) {
            ctx->pc = 0x1052B4u;
            return;
        }
    }
    ctx->pc = 0x105104u;
    // 0x105104: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x105104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x105108: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x105108u;
    SET_GPR_U32(ctx, 31, 0x105110u);
    ctx->pc = 0x10510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105108u;
    // 0x10510c: 0x248438c0  addiu       $a0, $a0, 0x38C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x105108u, 0x105110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105110u;
label_105110:
    // 0x105110: 0x8f948d10  lw          $s4, -0x72F0($gp)
    ctx->pc = 0x105110u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x105114: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x105114u;
    {
        const bool branch_taken_0x105114 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x105118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105114u;
        // 0x105118: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105114) {
            ctx->pc = 0x105120u;
            return;
        }
    }
    ctx->pc = 0x10511Cu;
    // 0x10511c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x10511cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->pc = 0x105120u;
}
