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

// Function: entry_00182814
// Address: 0x182814 - 0x182848
void entry_00182814_0x182814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182814_0x182814");
#endif

    switch (ctx->pc) {
        case 0x182824u: goto label_182824;
        case 0x18282cu: goto label_18282c;
        default: break;
    }

    ctx->pc = 0x182814u;

    // 0x182814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x182814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18281c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x18281Cu;
    SET_GPR_U32(ctx, 31, 0x182824u);
    ctx->pc = 0x182820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18281Cu;
    // 0x182820: 0x24040405  addiu       $a0, $zero, 0x405 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x18281Cu, 0x182824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182824u;
label_182824:
    // 0x182824: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x182824u;
    SET_GPR_U32(ctx, 31, 0x18282Cu);
    ctx->pc = 0x182828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182824u;
    // 0x182828: 0x34048038  ori         $a0, $zero, 0x8038 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x182824u, 0x18282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18282Cu;
label_18282c:
    // 0x18282c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18282cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182830: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x182830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182834: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x182834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x182838: 0x2442fc98  addiu       $v0, $v0, -0x368
    ctx->pc = 0x182838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966424));
    // 0x18283c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18283cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182840: 0xc060a1c  jal         func_182870
    ctx->pc = 0x182840u;
    SET_GPR_U32(ctx, 31, 0x182848u);
    ctx->pc = 0x182844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182840u;
    // 0x182844: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182870u, 0x182840u, 0x182848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182848u;
}
