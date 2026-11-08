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

// Function: entry_0014b5b8
// Address: 0x14b5b8 - 0x14b5e4
void entry_0014b5b8_0x14b5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b5b8_0x14b5b8");
#endif

    switch (ctx->pc) {
        case 0x14b5c0u: goto label_14b5c0;
        case 0x14b5e0u: goto label_14b5e0;
        default: break;
    }

    ctx->pc = 0x14b5b8u;

    // 0x14b5b8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x14B5B8u;
    SET_GPR_U32(ctx, 31, 0x14B5C0u);
    ctx->pc = 0x14B5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5B8u;
    // 0x14b5bc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x14B5B8u, 0x14B5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5C0u;
label_14b5c0:
    // 0x14b5c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5c4: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B5C4u;
    {
        const bool branch_taken_0x14b5c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b5c4) {
            ctx->pc = 0x14B5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B5C4u;
            // 0x14b5c8: 0x8e2201bc  lw          $v0, 0x1BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B5E4u;
            return;
        }
    }
    ctx->pc = 0x14B5CCu;
    // 0x14b5cc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5d4: 0x24a56b90  addiu       $a1, $a1, 0x6B90
    ctx->pc = 0x14b5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27536));
    // 0x14b5d8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B5D8u;
    SET_GPR_U32(ctx, 31, 0x14B5E0u);
    ctx->pc = 0x14B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5D8u;
    // 0x14b5dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B5D8u, 0x14B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5E0u;
label_14b5e0:
    // 0x14b5e0: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x14b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    ctx->pc = 0x14b5e4u;
}
