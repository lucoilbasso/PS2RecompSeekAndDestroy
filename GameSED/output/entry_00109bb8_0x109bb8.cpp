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

// Function: entry_00109bb8
// Address: 0x109bb8 - 0x109bd8
void entry_00109bb8_0x109bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109bb8_0x109bb8");
#endif

    switch (ctx->pc) {
        case 0x109bc8u: goto label_109bc8;
        default: break;
    }

    ctx->pc = 0x109bb8u;

    // 0x109bb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x109bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x109bbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bc0: 0xc0640d6  jal         func_190358
    ctx->pc = 0x109BC0u;
    SET_GPR_U32(ctx, 31, 0x109BC8u);
    ctx->pc = 0x109BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BC0u;
    // 0x109bc4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x109BC0u, 0x109BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BC8u;
label_109bc8:
    // 0x109bc8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x109bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x109bcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109bd0: 0x5473ffed  bnel        $v1, $s3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x109BD0u;
    {
        const bool branch_taken_0x109bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x109bd0) {
            ctx->pc = 0x109BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109BD0u;
            // 0x109bd4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109B88u;
            return;
        }
    }
    ctx->pc = 0x109BD8u;
}
