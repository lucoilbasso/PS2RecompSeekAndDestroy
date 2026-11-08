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

// Function: entry_0017e3c4
// Address: 0x17e3c4 - 0x17e3f8
void entry_0017e3c4_0x17e3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e3c4_0x17e3c4");
#endif

    switch (ctx->pc) {
        case 0x17e3d4u: goto label_17e3d4;
        case 0x17e3dcu: goto label_17e3dc;
        default: break;
    }

    ctx->pc = 0x17e3c4u;

    // 0x17e3c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e3c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e3cc: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17E3CCu;
    SET_GPR_U32(ctx, 31, 0x17E3D4u);
    ctx->pc = 0x17E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E3CCu;
    // 0x17e3d0: 0x24040205  addiu       $a0, $zero, 0x205 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17E3CCu, 0x17E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E3D4u;
label_17e3d4:
    // 0x17e3d4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x17E3D4u;
    SET_GPR_U32(ctx, 31, 0x17E3DCu);
    ctx->pc = 0x17E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E3D4u;
    // 0x17e3d8: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x17E3D4u, 0x17E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E3DCu;
label_17e3dc:
    // 0x17e3dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e3e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e3e4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17e3e8: 0x2442fc08  addiu       $v0, $v0, -0x3F8
    ctx->pc = 0x17e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966280));
    // 0x17e3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e3f0: 0xc05f908  jal         func_17E420
    ctx->pc = 0x17E3F0u;
    SET_GPR_U32(ctx, 31, 0x17E3F8u);
    ctx->pc = 0x17E3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E3F0u;
    // 0x17e3f4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E420u, 0x17E3F0u, 0x17E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E3F8u;
}
