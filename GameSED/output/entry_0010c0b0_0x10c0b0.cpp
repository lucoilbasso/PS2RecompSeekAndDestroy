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

// Function: entry_0010c0b0
// Address: 0x10c0b0 - 0x10c0dc
void entry_0010c0b0_0x10c0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c0b0_0x10c0b0");
#endif

    switch (ctx->pc) {
        case 0x10c0c4u: goto label_10c0c4;
        default: break;
    }

    ctx->pc = 0x10c0b0u;

    // 0x10c0b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c0b4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10c0b8: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x10c0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10c0bc: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C0BCu;
    SET_GPR_U32(ctx, 31, 0x10C0C4u);
    ctx->pc = 0x10C0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C0BCu;
    // 0x10c0c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C0BCu, 0x10C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C0C4u;
label_10c0c4:
    // 0x10c0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0c8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x10c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x10c0cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C0CCu;
    {
        const bool branch_taken_0x10c0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C0CCu;
        // 0x10c0d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c0cc) {
            ctx->pc = 0x10C0DCu;
            return;
        }
    }
    ctx->pc = 0x10C0D4u;
    // 0x10c0d4: 0xc041160  jal         func_104580
    ctx->pc = 0x10C0D4u;
    SET_GPR_U32(ctx, 31, 0x10C0DCu);
    ctx->pc = 0x104580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104580u, 0x10C0D4u, 0x10C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C0DCu;
}
