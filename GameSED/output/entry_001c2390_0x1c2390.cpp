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

// Function: entry_001c2390
// Address: 0x1c2390 - 0x1c23b8
void entry_001c2390_0x1c2390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2390_0x1c2390");
#endif

    switch (ctx->pc) {
        case 0x1c23a4u: goto label_1c23a4;
        case 0x1c23b4u: goto label_1c23b4;
        default: break;
    }

    ctx->pc = 0x1c2390u;

    // 0x1c2390: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2394: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2394u;
    {
        const bool branch_taken_0x1c2394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2394u;
        // 0x1c2398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2394) {
            ctx->pc = 0x1C23B8u;
            return;
        }
    }
    ctx->pc = 0x1C239Cu;
    // 0x1c239c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C239Cu;
    SET_GPR_U32(ctx, 31, 0x1C23A4u);
    ctx->pc = 0x1C23A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C239Cu;
    // 0x1c23a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C239Cu, 0x1C23A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23A4u;
label_1c23a4:
    // 0x1c23a4: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x1c23a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x1c23a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c23a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23ac: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C23ACu;
    SET_GPR_U32(ctx, 31, 0x1C23B4u);
    ctx->pc = 0x1C23B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23ACu;
    // 0x1c23b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C23ACu, 0x1C23B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23B4u;
label_1c23b4:
    // 0x1c23b4: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1c23b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    ctx->pc = 0x1c23b8u;
}
