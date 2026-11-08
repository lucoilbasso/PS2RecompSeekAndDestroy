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

// Function: entry_00109890
// Address: 0x109890 - 0x1098d0
void entry_00109890_0x109890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109890_0x109890");
#endif

    switch (ctx->pc) {
        case 0x1098a0u: goto label_1098a0;
        case 0x1098acu: goto label_1098ac;
        case 0x1098b8u: goto label_1098b8;
        case 0x1098c4u: goto label_1098c4;
        default: break;
    }

    ctx->pc = 0x109890u;

    // 0x109890: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x109890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109894: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109898: 0xc04110c  jal         func_104430
    ctx->pc = 0x109898u;
    SET_GPR_U32(ctx, 31, 0x1098A0u);
    ctx->pc = 0x10989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109898u;
    // 0x10989c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x109898u, 0x1098A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098A0u;
label_1098a0:
    // 0x1098a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1098a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098a4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1098A4u;
    SET_GPR_U32(ctx, 31, 0x1098ACu);
    ctx->pc = 0x1098A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098A4u;
    // 0x1098a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1098A4u, 0x1098ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098ACu;
label_1098ac:
    // 0x1098ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1098acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098b0: 0xc061a46  jal         func_186918
    ctx->pc = 0x1098B0u;
    SET_GPR_U32(ctx, 31, 0x1098B8u);
    ctx->pc = 0x1098B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098B0u;
    // 0x1098b4: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x1098B0u, 0x1098B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098B8u;
label_1098b8:
    // 0x1098b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1098b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098bc: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1098BCu;
    SET_GPR_U32(ctx, 31, 0x1098C4u);
    ctx->pc = 0x1098C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098BCu;
    // 0x1098c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1098BCu, 0x1098C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098C4u;
label_1098c4:
    // 0x1098c4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1098C4u;
    {
        const bool branch_taken_0x1098c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1098C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098C4u;
        // 0x1098c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098c4) {
            ctx->pc = 0x1098D0u;
            return;
        }
    }
    ctx->pc = 0x1098CCu;
    // 0x1098cc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1098ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->pc = 0x1098d0u;
}
