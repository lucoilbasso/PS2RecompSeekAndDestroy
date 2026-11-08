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

// Function: entry_0013f180
// Address: 0x13f180 - 0x13f1b8
void entry_0013f180_0x13f180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f180_0x13f180");
#endif

    switch (ctx->pc) {
        case 0x13f190u: goto label_13f190;
        default: break;
    }

    ctx->pc = 0x13f180u;

    // 0x13f180: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13f180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13f184: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13f184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13f188: 0xc061a46  jal         func_186918
    ctx->pc = 0x13F188u;
    SET_GPR_U32(ctx, 31, 0x13F190u);
    ctx->pc = 0x13F18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F188u;
    // 0x13f18c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13F188u, 0x13F190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F190u;
label_13f190:
    // 0x13f190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f194: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F194u;
    {
        const bool branch_taken_0x13f194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F194u;
        // 0x13f198: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f194) {
            ctx->pc = 0x13F1B8u;
            return;
        }
    }
    ctx->pc = 0x13F19Cu;
    // 0x13f19c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13f1a0: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x13f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x13f1a4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F1A4u;
    {
        const bool branch_taken_0x13f1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f1a4) {
            ctx->pc = 0x13F1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F1A4u;
            // 0x13f1a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F1BCu;
            return;
        }
    }
    ctx->pc = 0x13F1ACu;
    // 0x13f1ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13F1ACu;
    {
        const bool branch_taken_0x13f1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1ACu;
        // 0x13f1b0: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1ac) {
            ctx->pc = 0x13F1BCu;
            return;
        }
    }
    ctx->pc = 0x13F1B4u;
    // 0x13f1b4: 0x0  nop
    ctx->pc = 0x13f1b4u;
    // NOP
    ctx->pc = 0x13f1b8u;
}
