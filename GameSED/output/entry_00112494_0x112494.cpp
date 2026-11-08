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

// Function: entry_00112494
// Address: 0x112494 - 0x1124c0
void entry_00112494_0x112494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112494_0x112494");
#endif

    switch (ctx->pc) {
        case 0x11249cu: goto label_11249c;
        default: break;
    }

    ctx->pc = 0x112494u;

label_112494:
    // 0x112494: 0xc06a26e  jal         func_1A89B8
label_112498:
    if (ctx->pc == 0x112498u) {
        ctx->pc = 0x112498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112494u;
        // 0x112498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11249Cu;
        goto label_11249c;
    }
    ctx->pc = 0x112494u;
    SET_GPR_U32(ctx, 31, 0x11249Cu);
    ctx->pc = 0x112498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112494u;
    // 0x112498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x112494u, 0x11249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11249Cu;
label_11249c:
    // 0x11249c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11249cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1124a0:
    // 0x1124a0: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x1124a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_1124a4:
    // 0x1124a4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1124a8:
    if (ctx->pc == 0x1124A8u) {
        ctx->pc = 0x1124A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124A4u;
        // 0x1124a8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1124ACu;
        goto label_1124ac;
    }
    ctx->pc = 0x1124A4u;
    {
        const bool branch_taken_0x1124a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1124A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124A4u;
        // 0x1124a8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124a4) {
            ctx->pc = 0x112564u;
            return;
        }
    }
    ctx->pc = 0x1124ACu;
label_1124ac:
    // 0x1124ac: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1124acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1124b0:
    // 0x1124b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1124b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1124b4:
    // 0x1124b4: 0x8c634160  lw          $v1, 0x4160($v1)
    ctx->pc = 0x1124b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16736)));
label_1124b8:
    // 0x1124b8: 0x600008  jr          $v1
label_1124bc:
    if (ctx->pc == 0x1124BCu) {
        ctx->pc = 0x1124C0u;
        goto label_fallthrough_0x1124b8;
    }
    ctx->pc = 0x1124B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1124B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1124b8:
    ctx->pc = 0x1124C0u;
}
