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

// Function: entry_001cf6ac
// Address: 0x1cf6ac - 0x1cf6d4
void entry_001cf6ac_0x1cf6ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf6ac_0x1cf6ac");
#endif

    switch (ctx->pc) {
        case 0x1cf6b4u: goto label_1cf6b4;
        default: break;
    }

    ctx->pc = 0x1cf6acu;

    // 0x1cf6ac: 0xc0740ce  jal         func_1D0338
    ctx->pc = 0x1CF6ACu;
    SET_GPR_U32(ctx, 31, 0x1CF6B4u);
    ctx->pc = 0x1CF6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6ACu;
    // 0x1cf6b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0338u, 0x1CF6ACu, 0x1CF6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6B4u;
label_1cf6b4:
    // 0x1cf6b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cf6b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf6b8: 0x1235005f  beq         $s1, $s5, . + 4 + (0x5F << 2)
    ctx->pc = 0x1CF6B8u;
    {
        const bool branch_taken_0x1cf6b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x1CF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6B8u;
        // 0x1cf6bc: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6b8) {
            ctx->pc = 0x1CF838u;
            return;
        }
    }
    ctx->pc = 0x1CF6C0u;
    // 0x1cf6c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF6C0u;
    {
        const bool branch_taken_0x1cf6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6C0u;
        // 0x1cf6c4: 0x3c1e0025  lui         $fp, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6c0) {
            ctx->pc = 0x1CF6D4u;
            return;
        }
    }
    ctx->pc = 0x1CF6C8u;
    // 0x1cf6c8: 0x5697005c  bnel        $s4, $s7, . + 4 + (0x5C << 2)
    ctx->pc = 0x1CF6C8u;
    {
        const bool branch_taken_0x1cf6c8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x1cf6c8) {
            ctx->pc = 0x1CF6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF6C8u;
            // 0x1cf6cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF83Cu;
            return;
        }
    }
    ctx->pc = 0x1CF6D0u;
    // 0x1cf6d0: 0x3c1e0025  lui         $fp, 0x25
    ctx->pc = 0x1cf6d0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x1cf6d4u;
}
