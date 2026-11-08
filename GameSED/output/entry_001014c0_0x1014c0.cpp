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

// Function: entry_001014c0
// Address: 0x1014c0 - 0x101500
void entry_001014c0_0x1014c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001014c0_0x1014c0");
#endif

    switch (ctx->pc) {
        case 0x1014d0u: goto label_1014d0;
        case 0x1014dcu: goto label_1014dc;
        default: break;
    }

    ctx->pc = 0x1014c0u;

    // 0x1014c0: 0x16200037  bnez        $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1014C0u;
    {
        const bool branch_taken_0x1014c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1014C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014C0u;
        // 0x1014c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014c0) {
            ctx->pc = 0x1015A0u;
            return;
        }
    }
    ctx->pc = 0x1014C8u;
    // 0x1014c8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1014C8u;
    SET_GPR_U32(ctx, 31, 0x1014D0u);
    ctx->pc = 0x1014CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014C8u;
    // 0x1014cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1014C8u, 0x1014D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014D0u;
label_1014d0:
    // 0x1014d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1014d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014d4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1014D4u;
    SET_GPR_U32(ctx, 31, 0x1014DCu);
    ctx->pc = 0x1014D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014D4u;
    // 0x1014d8: 0x28203  sra         $s0, $v0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1014D4u, 0x1014DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014DCu;
label_1014dc:
    // 0x1014dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1014dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1014e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1014e4: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1014E4u;
    {
        const bool branch_taken_0x1014e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1014E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014E4u;
        // 0x1014e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014e4) {
            ctx->pc = 0x101500u;
            return;
        }
    }
    ctx->pc = 0x1014ECu;
    // 0x1014ec: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1014ECu;
    {
        const bool branch_taken_0x1014ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1014F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014ECu;
        // 0x1014f0: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014ec) {
            ctx->pc = 0x101550u;
            return;
        }
    }
    ctx->pc = 0x1014F4u;
    // 0x1014f4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1014F4u;
    {
        const bool branch_taken_0x1014f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1014F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014F4u;
        // 0x1014f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014f4) {
            ctx->pc = 0x101560u;
            return;
        }
    }
    ctx->pc = 0x1014FCu;
    // 0x1014fc: 0x0  nop
    ctx->pc = 0x1014fcu;
    // NOP
    ctx->pc = 0x101500u;
}
