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

// Function: entry_001c29a8
// Address: 0x1c29a8 - 0x1c29f8
void entry_001c29a8_0x1c29a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c29a8_0x1c29a8");
#endif

    switch (ctx->pc) {
        case 0x1c29b0u: goto label_1c29b0;
        case 0x1c29c8u: goto label_1c29c8;
        case 0x1c29d8u: goto label_1c29d8;
        case 0x1c29ecu: goto label_1c29ec;
        default: break;
    }

    ctx->pc = 0x1c29a8u;

label_1c29a8:
    // 0x1c29a8: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C29A8u;
    SET_GPR_U32(ctx, 31, 0x1C29B0u);
    ctx->pc = 0x1C29ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29A8u;
    // 0x1c29ac: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C29A8u, 0x1C29B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29B0u;
label_1c29b0:
    // 0x1c29b0: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x1c29b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c29b4: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x1c29b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1c29b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c29b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c29bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c29c0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C29C0u;
    SET_GPR_U32(ctx, 31, 0x1C29C8u);
    ctx->pc = 0x1C29C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29C0u;
    // 0x1c29c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C29C0u, 0x1C29C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29C8u;
label_1c29c8:
    // 0x1c29c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c29c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c29cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c29ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29d0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C29D0u;
    SET_GPR_U32(ctx, 31, 0x1C29D8u);
    ctx->pc = 0x1C29D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29D0u;
    // 0x1c29d4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C29D0u, 0x1C29D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29D8u;
label_1c29d8:
    // 0x1c29d8: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1c29d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1c29dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c29dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c29e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c29e4: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C29E4u;
    SET_GPR_U32(ctx, 31, 0x1C29ECu);
    ctx->pc = 0x1C29E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29E4u;
    // 0x1c29e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C29E4u, 0x1C29ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29ECu;
label_1c29ec:
    // 0x1c29ec: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x1c29ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1c29f0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1C29F0u;
    {
        const bool branch_taken_0x1c29f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29F0u;
        // 0x1c29f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29f0) {
            ctx->pc = 0x1C29A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c29a8;
        }
    }
    ctx->pc = 0x1C29F8u;
}
