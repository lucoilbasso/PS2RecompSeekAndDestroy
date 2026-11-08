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

// Function: entry_001b8488
// Address: 0x1b8488 - 0x1b84cc
void entry_001b8488_0x1b8488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8488_0x1b8488");
#endif

    switch (ctx->pc) {
        case 0x1b84c0u: goto label_1b84c0;
        case 0x1b84c8u: goto label_1b84c8;
        default: break;
    }

    ctx->pc = 0x1b8488u;

    // 0x1b8488: 0x2650bff0  addiu       $s0, $s2, -0x4010
    ctx->pc = 0x1b8488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950896));
    // 0x1b848c: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x1b848cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
    // 0x1b8490: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x1b8490u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
    // 0x1b8494: 0x40f  sync.p
    ctx->pc = 0x1b8494u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b8498: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b8498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b849c: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B849Cu;
    {
        const bool branch_taken_0x1b849c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b849c) {
            ctx->pc = 0x1B84A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B849Cu;
            // 0x1b84a0: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8504u;
            return;
        }
    }
    ctx->pc = 0x1B84A4u;
    // 0x1b84a4: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1b84a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x1b84a8: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x1b84a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1b84ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B84ACu;
    {
        const bool branch_taken_0x1b84ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84ACu;
        // 0x1b84b0: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84ac) {
            ctx->pc = 0x1B84CCu;
            return;
        }
    }
    ctx->pc = 0x1B84B4u;
    // 0x1b84b4: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1b84b8: 0xc06c3e2  jal         func_1B0F88
    ctx->pc = 0x1B84B8u;
    SET_GPR_U32(ctx, 31, 0x1B84C0u);
    ctx->pc = 0x1B84BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84B8u;
    // 0x1b84bc: 0x2484ad68  addiu       $a0, $a0, -0x5298 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0F88u, 0x1B84B8u, 0x1B84C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84C0u;
label_1b84c0:
    // 0x1b84c0: 0xc06dc84  jal         func_1B7210
    ctx->pc = 0x1B84C0u;
    SET_GPR_U32(ctx, 31, 0x1B84C8u);
    ctx->pc = 0x1B84C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84C0u;
    // 0x1b84c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7210u, 0x1B84C0u, 0x1B84C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84C8u;
label_1b84c8:
    // 0x1b84c8: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1b84c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    ctx->pc = 0x1b84ccu;
}
