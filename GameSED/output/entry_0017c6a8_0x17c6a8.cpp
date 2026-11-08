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

// Function: entry_0017c6a8
// Address: 0x17c6a8 - 0x17c6d0
void entry_0017c6a8_0x17c6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c6a8_0x17c6a8");
#endif

    switch (ctx->pc) {
        case 0x17c6b8u: goto label_17c6b8;
        case 0x17c6c4u: goto label_17c6c4;
        default: break;
    }

    ctx->pc = 0x17c6a8u;

    // 0x17c6a8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x17c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x17c6ac: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x17c6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x17c6b0: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x17C6B0u;
    SET_GPR_U32(ctx, 31, 0x17C6B8u);
    ctx->pc = 0x17C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6B0u;
    // 0x17c6b4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x17C6B0u, 0x17C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6B8u;
label_17c6b8:
    // 0x17c6b8: 0xae220830  sw          $v0, 0x830($s1)
    ctx->pc = 0x17c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2096), GPR_U32(ctx, 2));
    // 0x17c6bc: 0xc05f1e8  jal         func_17C7A0
    ctx->pc = 0x17C6BCu;
    SET_GPR_U32(ctx, 31, 0x17C6C4u);
    ctx->pc = 0x17C6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6BCu;
    // 0x17c6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C7A0u, 0x17C6BCu, 0x17C6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6C4u;
label_17c6c4:
    // 0x17c6c4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17c6c8: 0x2450e9e0  addiu       $s0, $v0, -0x1620
    ctx->pc = 0x17c6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961632));
    // 0x17c6cc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17c6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x21E9E0u));
    ctx->pc = 0x17c6d0u;
}
