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

// Function: entry_001abbf8
// Address: 0x1abbf8 - 0x1abc14
void entry_001abbf8_0x1abbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abbf8_0x1abbf8");
#endif

    switch (ctx->pc) {
        case 0x1abc08u: goto label_1abc08;
        default: break;
    }

    ctx->pc = 0x1abbf8u;

    // 0x1abbf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1abbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbfc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1abbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1abc00: 0xc06bc50  jal         func_1AF140
    ctx->pc = 0x1ABC00u;
    SET_GPR_U32(ctx, 31, 0x1ABC08u);
    ctx->pc = 0x1ABC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC00u;
    // 0x1abc04: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF140u, 0x1ABC00u, 0x1ABC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC08u;
label_1abc08:
    // 0x1abc08: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1abc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1abc0c: 0xc06bfea  jal         func_1AFFA8
    ctx->pc = 0x1ABC0Cu;
    SET_GPR_U32(ctx, 31, 0x1ABC14u);
    ctx->pc = 0x1ABC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC0Cu;
    // 0x1abc10: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFFA8u, 0x1ABC0Cu, 0x1ABC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC14u;
}
