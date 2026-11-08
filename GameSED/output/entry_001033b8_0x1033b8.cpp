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

// Function: entry_001033b8
// Address: 0x1033b8 - 0x103404
void entry_001033b8_0x1033b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001033b8_0x1033b8");
#endif

    switch (ctx->pc) {
        case 0x103400u: goto label_103400;
        default: break;
    }

    ctx->pc = 0x1033b8u;

    // 0x1033b8: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1033B8u;
    {
        const bool branch_taken_0x1033b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1033BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033B8u;
        // 0x1033bc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033b8) {
            ctx->pc = 0x1034FCu;
            return;
        }
    }
    ctx->pc = 0x1033C0u;
    // 0x1033c0: 0x28a21000  slti        $v0, $a1, 0x1000
    ctx->pc = 0x1033c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x1033c4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1033C4u;
    {
        const bool branch_taken_0x1033c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1033C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033C4u;
        // 0x1033c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033c4) {
            ctx->pc = 0x103468u;
            return;
        }
    }
    ctx->pc = 0x1033CCu;
    // 0x1033cc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1033ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1033d0: 0x30b20fff  andi        $s2, $a1, 0xFFF
    ctx->pc = 0x1033d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x1033d4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1033d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1033d8: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x1033d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1033dc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1033dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1033e0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1033e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1033e4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1033E4u;
    {
        const bool branch_taken_0x1033e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1033e4) {
            ctx->pc = 0x1033E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1033E4u;
            // 0x1033e8: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103404u;
            return;
        }
    }
    ctx->pc = 0x1033ECu;
    // 0x1033ec: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1033ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1033f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1033f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1033f4: 0x24a51bf0  addiu       $a1, $a1, 0x1BF0
    ctx->pc = 0x1033f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7152));
    // 0x1033f8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1033F8u;
    SET_GPR_U32(ctx, 31, 0x103400u);
    ctx->pc = 0x1033FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033F8u;
    // 0x1033fc: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1033F8u, 0x103400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103400u;
label_103400:
    // 0x103400: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x103400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x103404u;
}
