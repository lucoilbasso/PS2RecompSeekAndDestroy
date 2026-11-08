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

// Function: entry_00177638
// Address: 0x177638 - 0x177670
void entry_00177638_0x177638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177638_0x177638");
#endif

    switch (ctx->pc) {
        case 0x177648u: goto label_177648;
        case 0x177660u: goto label_177660;
        default: break;
    }

    ctx->pc = 0x177638u;

    // 0x177638: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x177638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17763c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17763cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177640: 0xc06e502  jal         func_1B9408
    ctx->pc = 0x177640u;
    SET_GPR_U32(ctx, 31, 0x177648u);
    ctx->pc = 0x177644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177640u;
    // 0x177644: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9408u, 0x177640u, 0x177648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177648u;
label_177648:
    // 0x177648: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x177648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17764c: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x17764cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x177650: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x177650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177654: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x177654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x177658: 0xc06e502  jal         func_1B9408
    ctx->pc = 0x177658u;
    SET_GPR_U32(ctx, 31, 0x177660u);
    ctx->pc = 0x17765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177658u;
    // 0x17765c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9408u, 0x177658u, 0x177660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177660u;
label_177660:
    // 0x177660: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x177660u;
    {
        const bool branch_taken_0x177660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177660) {
            ctx->pc = 0x177664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177660u;
            // 0x177664: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177670u;
            return;
        }
    }
    ctx->pc = 0x177668u;
    // 0x177668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17766c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17766cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x177670u;
}
