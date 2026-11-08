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

// Function: entry_00144444
// Address: 0x144444 - 0x14448c
void entry_00144444_0x144444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144444_0x144444");
#endif

    switch (ctx->pc) {
        case 0x14444cu: goto label_14444c;
        case 0x144454u: goto label_144454;
        case 0x144478u: goto label_144478;
        default: break;
    }

    ctx->pc = 0x144444u;

    // 0x144444: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x144444u;
    SET_GPR_U32(ctx, 31, 0x14444Cu);
    ctx->pc = 0x144448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144444u;
    // 0x144448: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x144444u, 0x14444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14444Cu;
label_14444c:
    // 0x14444c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x14444Cu;
    SET_GPR_U32(ctx, 31, 0x144454u);
    ctx->pc = 0x144450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14444Cu;
    // 0x144450: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x14444Cu, 0x144454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144454u;
label_144454:
    // 0x144454: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x144454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x144458: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x144458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14445c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x14445cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x144460: 0x34424d48  ori         $v0, $v0, 0x4D48
    ctx->pc = 0x144460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19784);
    // 0x144464: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x144464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144468: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x144468u;
    {
        const bool branch_taken_0x144468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x14446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144468u;
        // 0x14446c: 0x24846a30  addiu       $a0, $a0, 0x6A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144468) {
            ctx->pc = 0x14448Cu;
            return;
        }
    }
    ctx->pc = 0x144470u;
    // 0x144470: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x144470u;
    SET_GPR_U32(ctx, 31, 0x144478u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x144470u, 0x144478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144478u;
label_144478:
    // 0x144478: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x144478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14447c: 0x24a56a50  addiu       $a1, $a1, 0x6A50
    ctx->pc = 0x14447cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27216));
    // 0x144480: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x144480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x144484: 0xc068186  jal         func_1A0618
    ctx->pc = 0x144484u;
    SET_GPR_U32(ctx, 31, 0x14448Cu);
    ctx->pc = 0x144488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144484u;
    // 0x144488: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x144484u, 0x14448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14448Cu;
}
