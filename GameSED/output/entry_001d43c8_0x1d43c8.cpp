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

// Function: entry_001d43c8
// Address: 0x1d43c8 - 0x1d43fc
void entry_001d43c8_0x1d43c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d43c8_0x1d43c8");
#endif

    switch (ctx->pc) {
        case 0x1d43dcu: goto label_1d43dc;
        default: break;
    }

    ctx->pc = 0x1d43c8u;

    // 0x1d43c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d43c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d43cc: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x1d43ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1d43d0: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x1d43d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d43d4: 0xc073e1a  jal         func_1CF868
    ctx->pc = 0x1D43D4u;
    SET_GPR_U32(ctx, 31, 0x1D43DCu);
    ctx->pc = 0x1D43D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43D4u;
    // 0x1d43d8: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF868u, 0x1D43D4u, 0x1D43DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D43DCu;
label_1d43dc:
    // 0x1d43dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d43dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d43e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d43e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43e8: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x1d43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1d43ec: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D43ECu;
    {
        const bool branch_taken_0x1d43ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43ECu;
        // 0x1d43f0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43ec) {
            ctx->pc = 0x1D4408u;
            return;
        }
    }
    ctx->pc = 0x1D43F4u;
    // 0x1d43f4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1d43f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x1d43f8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d43f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1d43fcu;
}
