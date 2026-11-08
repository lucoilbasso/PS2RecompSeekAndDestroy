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

// Function: entry_00184110
// Address: 0x184110 - 0x184140
void entry_00184110_0x184110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184110_0x184110");
#endif

    ctx->pc = 0x184110u;

    // 0x184110: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x184110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x184114: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x184114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x184118: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x184118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18411c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x18411cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x184120: 0x54450008  bnel        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x184120u;
    {
        const bool branch_taken_0x184120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x184120) {
            ctx->pc = 0x184124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184120u;
            // 0x184124: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184144u;
            return;
        }
    }
    ctx->pc = 0x184128u;
    // 0x184128: 0xa4920004  sh          $s2, 0x4($a0)
    ctx->pc = 0x184128u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x18412c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18412cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184130: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x184130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184134: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x184134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184138: 0xc06105a  jal         func_184168
    ctx->pc = 0x184138u;
    SET_GPR_U32(ctx, 31, 0x184140u);
    ctx->pc = 0x18413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184138u;
    // 0x18413c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184168u, 0x184138u, 0x184140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184140u;
}
