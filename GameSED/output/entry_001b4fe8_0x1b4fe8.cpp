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

// Function: entry_001b4fe8
// Address: 0x1b4fe8 - 0x1b500c
void entry_001b4fe8_0x1b4fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4fe8_0x1b4fe8");
#endif

    switch (ctx->pc) {
        case 0x1b4ff4u: goto label_1b4ff4;
        case 0x1b5004u: goto label_1b5004;
        default: break;
    }

    ctx->pc = 0x1b4fe8u;

    // 0x1b4fe8: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b4fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1b4fec: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4FECu;
    SET_GPR_U32(ctx, 31, 0x1B4FF4u);
    ctx->pc = 0x1B4FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FECu;
    // 0x1b4ff0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4FECu, 0x1B4FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FF4u;
label_1b4ff4:
    // 0x1b4ff4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4FF4u;
    {
        const bool branch_taken_0x1b4ff4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FF4u;
        // 0x1b4ff8: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ff4) {
            ctx->pc = 0x1B500Cu;
            return;
        }
    }
    ctx->pc = 0x1B4FFCu;
    // 0x1b4ffc: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4FFCu;
    SET_GPR_U32(ctx, 31, 0x1B5004u);
    ctx->pc = 0x1B5000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FFCu;
    // 0x1b5000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4FFCu, 0x1B5004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5004u;
label_1b5004:
    // 0x1b5004: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B5004u;
    {
        const bool branch_taken_0x1b5004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5004u;
        // 0x1b5008: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5004) {
            ctx->pc = 0x1B5038u;
            return;
        }
    }
    ctx->pc = 0x1B500Cu;
}
