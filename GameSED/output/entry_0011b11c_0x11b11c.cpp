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

// Function: entry_0011b11c
// Address: 0x11b11c - 0x11b168
void entry_0011b11c_0x11b11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b11c_0x11b11c");
#endif

    switch (ctx->pc) {
        case 0x11b144u: goto label_11b144;
        default: break;
    }

    ctx->pc = 0x11b11cu;

    // 0x11b11c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11b11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11b120: 0x26113410  addiu       $s1, $s0, 0x3410
    ctx->pc = 0x11b120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 13328));
    // 0x11b124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11b124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b128: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x11b128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11b12c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11b130: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x11b130u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x11b134: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11b134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11b138: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x11b138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x11b13c: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x11B13Cu;
    SET_GPR_U32(ctx, 31, 0x11B144u);
    ctx->pc = 0x11B140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B13Cu;
    // 0x11b140: 0x24a50108  addiu       $a1, $a1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x11B13Cu, 0x11B144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B144u;
label_11b144:
    // 0x11b144: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11b144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11b148: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11b148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b14c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b150: 0x24a54780  addiu       $a1, $a1, 0x4780
    ctx->pc = 0x11b150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18304));
    // 0x11b154: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x11b154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11b158: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B158u;
    {
        const bool branch_taken_0x11b158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B158u;
        // 0x11b15c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b158) {
            ctx->pc = 0x11B168u;
            return;
        }
    }
    ctx->pc = 0x11B160u;
    // 0x11b160: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11B160u;
    SET_GPR_U32(ctx, 31, 0x11B168u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11B160u, 0x11B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B168u;
}
