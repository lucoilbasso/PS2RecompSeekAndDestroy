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

// Function: entry_00179184
// Address: 0x179184 - 0x1791b8
void entry_00179184_0x179184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179184_0x179184");
#endif

    switch (ctx->pc) {
        case 0x17919cu: goto label_17919c;
        case 0x1791b0u: goto label_1791b0;
        default: break;
    }

    ctx->pc = 0x179184u;

    // 0x179184: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x179184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x179188: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x179188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17918c: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x17918cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x179190: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x179190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179194: 0xc05e6a0  jal         func_179A80
    ctx->pc = 0x179194u;
    SET_GPR_U32(ctx, 31, 0x17919Cu);
    ctx->pc = 0x179198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179194u;
    // 0x179198: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179A80u, 0x179194u, 0x17919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17919Cu;
label_17919c:
    // 0x17919c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17919Cu;
    {
        const bool branch_taken_0x17919c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17919Cu;
        // 0x1791a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17919c) {
            ctx->pc = 0x1791C4u;
            return;
        }
    }
    ctx->pc = 0x1791A4u;
    // 0x1791a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1791a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1791a8: 0xc05e6e2  jal         func_179B88
    ctx->pc = 0x1791A8u;
    SET_GPR_U32(ctx, 31, 0x1791B0u);
    ctx->pc = 0x1791ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1791A8u;
    // 0x1791ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179B88u, 0x1791A8u, 0x1791B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1791B0u;
label_1791b0:
    // 0x1791b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1791B0u;
    {
        const bool branch_taken_0x1791b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791B0u;
        // 0x1791b4: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791b0) {
            ctx->pc = 0x1791C4u;
            return;
        }
    }
    ctx->pc = 0x1791B8u;
}
