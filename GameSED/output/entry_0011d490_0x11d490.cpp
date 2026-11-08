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

// Function: entry_0011d490
// Address: 0x11d490 - 0x11d4c8
void entry_0011d490_0x11d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d490_0x11d490");
#endif

    switch (ctx->pc) {
        case 0x11d498u: goto label_11d498;
        case 0x11d4a4u: goto label_11d4a4;
        default: break;
    }

    ctx->pc = 0x11d490u;

    // 0x11d490: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D490u;
    SET_GPR_U32(ctx, 31, 0x11D498u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D490u, 0x11D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D498u;
label_11d498:
    // 0x11d498: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d49c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D49Cu;
    SET_GPR_U32(ctx, 31, 0x11D4A4u);
    ctx->pc = 0x11D4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D49Cu;
    // 0x11d4a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D49Cu, 0x11D4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4A4u;
label_11d4a4:
    // 0x11d4a4: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d4a8: 0x123140  sll         $a2, $s2, 5
    ctx->pc = 0x11d4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x11d4ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11d4b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4b4: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x11d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x11d4b8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x11d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11d4bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11d4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4c0: 0xc05ef2c  jal         func_17BCB0
    ctx->pc = 0x11D4C0u;
    SET_GPR_U32(ctx, 31, 0x11D4C8u);
    ctx->pc = 0x11D4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4C0u;
    // 0x11d4c4: 0x24840380  addiu       $a0, $a0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BCB0u, 0x11D4C0u, 0x11D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4C8u;
}
