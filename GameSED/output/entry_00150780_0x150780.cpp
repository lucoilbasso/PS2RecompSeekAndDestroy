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

// Function: entry_00150780
// Address: 0x150780 - 0x1507c4
void entry_00150780_0x150780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150780_0x150780");
#endif

    switch (ctx->pc) {
        case 0x1507a0u: goto label_1507a0;
        case 0x1507b0u: goto label_1507b0;
        case 0x1507b8u: goto label_1507b8;
        case 0x1507c0u: goto label_1507c0;
        default: break;
    }

    ctx->pc = 0x150780u;

    // 0x150780: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x150780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x150784: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x150784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x150788: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x150788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x15078c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x15078cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x150790: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x150790u;
    {
        const bool branch_taken_0x150790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150790u;
        // 0x150794: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150790) {
            ctx->pc = 0x150670u;
            return;
        }
    }
    ctx->pc = 0x150798u;
    // 0x150798: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x150798u;
    SET_GPR_U32(ctx, 31, 0x1507A0u);
    ctx->pc = 0x15079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150798u;
    // 0x15079c: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x150798u, 0x1507A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507A0u;
label_1507a0:
    // 0x1507a0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1507A0u;
    {
        const bool branch_taken_0x1507a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1507a0) {
            ctx->pc = 0x1507A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1507A0u;
            // 0x1507a4: 0x8e420264  lw          $v0, 0x264($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1507C4u;
            return;
        }
    }
    ctx->pc = 0x1507A8u;
    // 0x1507a8: 0xc05573c  jal         func_155CF0
    ctx->pc = 0x1507A8u;
    SET_GPR_U32(ctx, 31, 0x1507B0u);
    ctx->pc = 0x1507ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507A8u;
    // 0x1507ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CF0u, 0x1507A8u, 0x1507B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507B0u;
label_1507b0:
    // 0x1507b0: 0xc055756  jal         func_155D58
    ctx->pc = 0x1507B0u;
    SET_GPR_U32(ctx, 31, 0x1507B8u);
    ctx->pc = 0x1507B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507B0u;
    // 0x1507b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155D58u, 0x1507B0u, 0x1507B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507B8u;
label_1507b8:
    // 0x1507b8: 0xc055770  jal         func_155DC0
    ctx->pc = 0x1507B8u;
    SET_GPR_U32(ctx, 31, 0x1507C0u);
    ctx->pc = 0x1507BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507B8u;
    // 0x1507bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x1507B8u, 0x1507C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507C0u;
label_1507c0:
    // 0x1507c0: 0x8e420264  lw          $v0, 0x264($s2)
    ctx->pc = 0x1507c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
    ctx->pc = 0x1507c4u;
}
