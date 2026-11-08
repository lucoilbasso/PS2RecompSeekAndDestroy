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

// Function: entry_0013637c
// Address: 0x13637c - 0x1363a8
void entry_0013637c_0x13637c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013637c_0x13637c");
#endif

    switch (ctx->pc) {
        case 0x136398u: goto label_136398;
        default: break;
    }

    ctx->pc = 0x13637cu;

    // 0x13637c: 0x3c120008  lui         $s2, 0x8
    ctx->pc = 0x13637cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8 << 16));
    // 0x136380: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x136380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x136384: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x136384u;
    {
        const bool branch_taken_0x136384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136384) {
            ctx->pc = 0x136388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136384u;
            // 0x136388: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1363A8u;
            return;
        }
    }
    ctx->pc = 0x13638Cu;
    // 0x13638c: 0x26040200  addiu       $a0, $s0, 0x200
    ctx->pc = 0x13638cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x136390: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x136390u;
    SET_GPR_U32(ctx, 31, 0x136398u);
    ctx->pc = 0x136394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136390u;
    // 0x136394: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x136390u, 0x136398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136398u;
label_136398:
    // 0x136398: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x136398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13639c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x13639cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x1363a0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1363a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1363a4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1363a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1363a8u;
}
