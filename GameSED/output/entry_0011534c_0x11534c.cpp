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

// Function: entry_0011534c
// Address: 0x11534c - 0x115384
void entry_0011534c_0x11534c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011534c_0x11534c");
#endif

    switch (ctx->pc) {
        case 0x115364u: goto label_115364;
        case 0x115380u: goto label_115380;
        default: break;
    }

    ctx->pc = 0x11534cu;

    // 0x11534c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x11534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x115350: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x115350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115354: 0x1071000b  beq         $v1, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x115354u;
    {
        const bool branch_taken_0x115354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x115354) {
            ctx->pc = 0x115384u;
            return;
        }
    }
    ctx->pc = 0x11535Cu;
    // 0x11535c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11535Cu;
    SET_GPR_U32(ctx, 31, 0x115364u);
    ctx->pc = 0x115360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11535Cu;
    // 0x115360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11535Cu, 0x115364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115364u;
label_115364:
    // 0x115364: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x115364u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115368: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x115368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11536c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11536cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115370: 0x10710004  beq         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x115370u;
    {
        const bool branch_taken_0x115370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x115370) {
            ctx->pc = 0x115384u;
            return;
        }
    }
    ctx->pc = 0x115378u;
    // 0x115378: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x115378u;
    SET_GPR_U32(ctx, 31, 0x115380u);
    ctx->pc = 0x11537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115378u;
    // 0x11537c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x115378u, 0x115380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115380u;
label_115380:
    // 0x115380: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x115380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x115384u;
}
