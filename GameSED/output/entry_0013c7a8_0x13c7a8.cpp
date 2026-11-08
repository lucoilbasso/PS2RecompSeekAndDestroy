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

// Function: entry_0013c7a8
// Address: 0x13c7a8 - 0x13c7e4
void entry_0013c7a8_0x13c7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c7a8_0x13c7a8");
#endif

    switch (ctx->pc) {
        case 0x13c7ccu: goto label_13c7cc;
        default: break;
    }

    ctx->pc = 0x13c7a8u;

    // 0x13c7a8: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x13c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x13c7ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7b0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x13c7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13c7b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x13c7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x13c7b8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x13c7b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13c7bc: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x13C7BCu;
    {
        const bool branch_taken_0x13c7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7BCu;
        // 0x13c7c0: 0x2a02b  sltu        $s4, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7bc) {
            ctx->pc = 0x13C918u;
            return;
        }
    }
    ctx->pc = 0x13C7C4u;
    // 0x13c7c4: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x13C7C4u;
    SET_GPR_U32(ctx, 31, 0x13C7CCu);
    ctx->pc = 0x13C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C7C4u;
    // 0x13c7c8: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x13C7C4u, 0x13C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C7CCu;
label_13c7cc:
    // 0x13c7cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C7CCu;
    {
        const bool branch_taken_0x13c7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7CCu;
        // 0x13c7d0: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7cc) {
            ctx->pc = 0x13C7E4u;
            return;
        }
    }
    ctx->pc = 0x13C7D4u;
    // 0x13c7d4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13c7d8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x13c7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x13c7dc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13C7DCu;
    {
        const bool branch_taken_0x13c7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c7dc) {
            ctx->pc = 0x13C83Cu;
            return;
        }
    }
    ctx->pc = 0x13C7E4u;
}
