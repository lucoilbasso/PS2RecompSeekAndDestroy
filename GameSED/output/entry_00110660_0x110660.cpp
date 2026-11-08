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

// Function: entry_00110660
// Address: 0x110660 - 0x1106ac
void entry_00110660_0x110660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110660_0x110660");
#endif

    switch (ctx->pc) {
        case 0x110678u: goto label_110678;
        case 0x110694u: goto label_110694;
        default: break;
    }

    ctx->pc = 0x110660u;

    // 0x110660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110664: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x110664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x110668: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x110668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x11066c: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x11066cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x110670: 0xc04110c  jal         func_104430
    ctx->pc = 0x110670u;
    SET_GPR_U32(ctx, 31, 0x110678u);
    ctx->pc = 0x110674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110670u;
    // 0x110674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x110670u, 0x110678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110678u;
label_110678:
    // 0x110678: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x110678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11067c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x11067cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x110680: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x110680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x110684: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x110684u;
    {
        const bool branch_taken_0x110684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x110688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110684u;
        // 0x110688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110684) {
            ctx->pc = 0x1106ACu;
            return;
        }
    }
    ctx->pc = 0x11068Cu;
    // 0x11068c: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x11068Cu;
    SET_GPR_U32(ctx, 31, 0x110694u);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x11068Cu, 0x110694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110694u;
label_110694:
    // 0x110694: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x110694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x110698: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11069c: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x11069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x1106a0: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1106a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1106a4: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1106A4u;
    SET_GPR_U32(ctx, 31, 0x1106ACu);
    ctx->pc = 0x1106A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1106A4u;
    // 0x1106a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1106A4u, 0x1106ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1106ACu;
}
