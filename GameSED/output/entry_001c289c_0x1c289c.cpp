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

// Function: entry_001c289c
// Address: 0x1c289c - 0x1c28cc
void entry_001c289c_0x1c289c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c289c_0x1c289c");
#endif

    switch (ctx->pc) {
        case 0x1c28a8u: goto label_1c28a8;
        case 0x1c28b8u: goto label_1c28b8;
        case 0x1c28c4u: goto label_1c28c4;
        default: break;
    }

    ctx->pc = 0x1c289cu;

    // 0x1c289c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c289cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28a0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C28A0u;
    SET_GPR_U32(ctx, 31, 0x1C28A8u);
    ctx->pc = 0x1C28A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28A0u;
    // 0x1c28a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C28A0u, 0x1C28A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28A8u;
label_1c28a8:
    // 0x1c28a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C28A8u;
    {
        const bool branch_taken_0x1c28a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28A8u;
        // 0x1c28ac: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28a8) {
            ctx->pc = 0x1C28CCu;
            return;
        }
    }
    ctx->pc = 0x1C28B0u;
    // 0x1c28b0: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1C28B0u;
    SET_GPR_U32(ctx, 31, 0x1C28B8u);
    ctx->pc = 0x1C28B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28B0u;
    // 0x1c28b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1C28B0u, 0x1C28B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28B8u;
label_1c28b8:
    // 0x1c28b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c28b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28bc: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1C28BCu;
    SET_GPR_U32(ctx, 31, 0x1C28C4u);
    ctx->pc = 0x1C28C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28BCu;
    // 0x1c28c0: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1C28BCu, 0x1C28C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28C4u;
label_1c28c4:
    // 0x1c28c4: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1C28C4u;
    SET_GPR_U32(ctx, 31, 0x1C28CCu);
    ctx->pc = 0x1C28C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28C4u;
    // 0x1c28c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1C28C4u, 0x1C28CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28CCu;
}
