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

// Function: entry_00105888
// Address: 0x105888 - 0x1058d0
void entry_00105888_0x105888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105888_0x105888");
#endif

    switch (ctx->pc) {
        case 0x10589cu: goto label_10589c;
        case 0x1058a4u: goto label_1058a4;
        case 0x1058c4u: goto label_1058c4;
        default: break;
    }

    ctx->pc = 0x105888u;

    // 0x105888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10588c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10588cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x105890: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x105890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x105894: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x105894u;
    SET_GPR_U32(ctx, 31, 0x10589Cu);
    ctx->pc = 0x105898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105894u;
    // 0x105898: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x105894u, 0x10589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10589Cu;
label_10589c:
    // 0x10589c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x10589Cu;
    SET_GPR_U32(ctx, 31, 0x1058A4u);
    ctx->pc = 0x1058A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10589Cu;
    // 0x1058a0: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x10589Cu, 0x1058A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1058A4u;
label_1058a4:
    // 0x1058a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1058a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1058a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058ac: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1058acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1058b0: 0x2442e660  addiu       $v0, $v0, -0x19A0
    ctx->pc = 0x1058b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960736));
    // 0x1058b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1058b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1058b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1058bc: 0xc04163c  jal         func_1058F0
    ctx->pc = 0x1058BCu;
    SET_GPR_U32(ctx, 31, 0x1058C4u);
    ctx->pc = 0x1058C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1058BCu;
    // 0x1058c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1058F0u, 0x1058BCu, 0x1058C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1058C4u;
label_1058c4:
    // 0x1058c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1058c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058c8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1058C8u;
    SET_GPR_U32(ctx, 31, 0x1058D0u);
    ctx->pc = 0x1058CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1058C8u;
    // 0x1058cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1058C8u, 0x1058D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1058D0u;
}
