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

// Function: entry_001ce054
// Address: 0x1ce054 - 0x1ce074
void entry_001ce054_0x1ce054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce054_0x1ce054");
#endif

    switch (ctx->pc) {
        case 0x1ce068u: goto label_1ce068;
        default: break;
    }

    ctx->pc = 0x1ce054u;

    // 0x1ce054: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1ce054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce058: 0x8fa60d88  lw          $a2, 0xD88($sp)
    ctx->pc = 0x1ce058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3464)));
    // 0x1ce05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce060: 0xc07376e  jal         func_1CDDB8
    ctx->pc = 0x1CE060u;
    SET_GPR_U32(ctx, 31, 0x1CE068u);
    ctx->pc = 0x1CE064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE060u;
    // 0x1ce064: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDDB8u, 0x1CE060u, 0x1CE068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE068u;
label_1ce068:
    // 0x1ce068: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ce068u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce06c: 0x1660ffb4  bnez        $s3, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1CE06Cu;
    {
        const bool branch_taken_0x1ce06c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE06Cu;
        // 0x1ce070: 0xafb10d88  sw          $s1, 0xD88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 3464), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce06c) {
            ctx->pc = 0x1CDF40u;
            return;
        }
    }
    ctx->pc = 0x1CE074u;
}
