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

// Function: entry_001780a4
// Address: 0x1780a4 - 0x1780e0
void entry_001780a4_0x1780a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001780a4_0x1780a4");
#endif

    switch (ctx->pc) {
        case 0x1780d8u: goto label_1780d8;
        default: break;
    }

    ctx->pc = 0x1780a4u;

    // 0x1780a4: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x1780a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1780a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1780a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780ac: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1780acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1780b0: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x1780b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x1780b4: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x1780b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1780b8: 0x24880020  addiu       $t0, $a0, 0x20
    ctx->pc = 0x1780b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1780bc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1780bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1780c0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1780c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780c4: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x1780c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1780c8: 0x24091000  addiu       $t1, $zero, 0x1000
    ctx->pc = 0x1780c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1780cc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1780ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1780d0: 0xc068620  jal         func_1A1880
    ctx->pc = 0x1780D0u;
    SET_GPR_U32(ctx, 31, 0x1780D8u);
    ctx->pc = 0x1780D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1780D0u;
    // 0x1780d4: 0x24c68620  addiu       $a2, $a2, -0x79E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1880u, 0x1780D0u, 0x1780D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1780D8u;
label_1780d8:
    // 0x1780d8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1780D8u;
    SET_GPR_U32(ctx, 31, 0x1780E0u);
    ctx->pc = 0x1780DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1780D8u;
    // 0x1780dc: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1780D8u, 0x1780E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1780E0u;
}
