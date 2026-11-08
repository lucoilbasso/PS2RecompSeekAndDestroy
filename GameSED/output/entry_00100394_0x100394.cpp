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

// Function: entry_00100394
// Address: 0x100394 - 0x1003c8
void entry_00100394_0x100394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100394_0x100394");
#endif

    switch (ctx->pc) {
        case 0x1003b8u: goto label_1003b8;
        case 0x1003c0u: goto label_1003c0;
        default: break;
    }

    ctx->pc = 0x100394u;

    // 0x100394: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x100394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x100398: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x100398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x10039c: 0xffb30218  sd          $s3, 0x218($sp)
    ctx->pc = 0x10039cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 19));
    // 0x1003a0: 0xffb40220  sd          $s4, 0x220($sp)
    ctx->pc = 0x1003a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 20));
    // 0x1003a4: 0xffb50228  sd          $s5, 0x228($sp)
    ctx->pc = 0x1003a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 21));
    // 0x1003a8: 0xffb60230  sd          $s6, 0x230($sp)
    ctx->pc = 0x1003a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 22));
    // 0x1003ac: 0xffbf0238  sd          $ra, 0x238($sp)
    ctx->pc = 0x1003acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 31));
    // 0x1003b0: 0xc06ea98  jal         func_1BAA60
    ctx->pc = 0x1003B0u;
    SET_GPR_U32(ctx, 31, 0x1003B8u);
    ctx->pc = 0x1003B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003B0u;
    // 0x1003b4: 0x3c100025  lui         $s0, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAA60u, 0x1003B0u, 0x1003B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003B8u;
label_1003b8:
    // 0x1003b8: 0xc06ebce  jal         func_1BAF38
    ctx->pc = 0x1003B8u;
    SET_GPR_U32(ctx, 31, 0x1003C0u);
    ctx->pc = 0x1003BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003B8u;
    // 0x1003bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAF38u, 0x1003B8u, 0x1003C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003C0u;
label_1003c0:
    // 0x1003c0: 0xc06c408  jal         func_1B1020
    ctx->pc = 0x1003C0u;
    SET_GPR_U32(ctx, 31, 0x1003C8u);
    ctx->pc = 0x1003C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003C0u;
    // 0x1003c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1020u, 0x1003C0u, 0x1003C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003C8u;
}
