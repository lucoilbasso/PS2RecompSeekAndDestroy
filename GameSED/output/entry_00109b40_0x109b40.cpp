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

// Function: entry_00109b40
// Address: 0x109b40 - 0x109b5c
void entry_00109b40_0x109b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109b40_0x109b40");
#endif

    switch (ctx->pc) {
        case 0x109b54u: goto label_109b54;
        default: break;
    }

    ctx->pc = 0x109b40u;

    // 0x109b40: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x109b40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x109b44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x109B44u;
    {
        const bool branch_taken_0x109b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109b44) {
            ctx->pc = 0x109B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109B44u;
            // 0x109b48: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109B5Cu;
            return;
        }
    }
    ctx->pc = 0x109B4Cu;
    // 0x109b4c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109B4Cu;
    SET_GPR_U32(ctx, 31, 0x109B54u);
    ctx->pc = 0x109B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B4Cu;
    // 0x109b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109B4Cu, 0x109B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B54u;
label_109b54:
    // 0x109b54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b58: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x109b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x109b5cu;
}
