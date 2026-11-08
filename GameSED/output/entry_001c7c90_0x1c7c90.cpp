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

// Function: entry_001c7c90
// Address: 0x1c7c90 - 0x1c7d14
void entry_001c7c90_0x1c7c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7c90_0x1c7c90");
#endif

    switch (ctx->pc) {
        case 0x1c7c98u: goto label_1c7c98;
        case 0x1c7cacu: goto label_1c7cac;
        case 0x1c7cbcu: goto label_1c7cbc;
        case 0x1c7cccu: goto label_1c7ccc;
        case 0x1c7cdcu: goto label_1c7cdc;
        case 0x1c7cf4u: goto label_1c7cf4;
        case 0x1c7d04u: goto label_1c7d04;
        default: break;
    }

    ctx->pc = 0x1c7c90u;

    // 0x1c7c90: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7C90u;
    SET_GPR_U32(ctx, 31, 0x1C7C98u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7C90u, 0x1C7C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C98u;
label_1c7c98:
    // 0x1c7c98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c7c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ca4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7CA4u;
    SET_GPR_U32(ctx, 31, 0x1C7CACu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7CA4u, 0x1C7CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CACu;
label_1c7cac:
    // 0x1c7cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cb4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7CB4u;
    SET_GPR_U32(ctx, 31, 0x1C7CBCu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7CB4u, 0x1C7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CBCu;
label_1c7cbc:
    // 0x1c7cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cc4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7CC4u;
    SET_GPR_U32(ctx, 31, 0x1C7CCCu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7CC4u, 0x1C7CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CCCu;
label_1c7ccc:
    // 0x1c7ccc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c7cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cd4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7CD4u;
    SET_GPR_U32(ctx, 31, 0x1C7CDCu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7CD4u, 0x1C7CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CDCu;
label_1c7cdc:
    // 0x1c7cdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ce0: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c7ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c7ce4: 0xdc25bb98  ld          $a1, -0x4468($at)
    ctx->pc = 0x1c7ce4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BB98u));
    // 0x1c7ce8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cec: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7CECu;
    SET_GPR_U32(ctx, 31, 0x1C7CF4u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7CECu, 0x1C7CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CF4u;
label_1c7cf4:
    // 0x1c7cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cfc: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7CFCu;
    SET_GPR_U32(ctx, 31, 0x1C7D04u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7CFCu, 0x1C7D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D04u;
label_1c7d04:
    // 0x1c7d04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d0c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7D0Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D14u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7D0Cu, 0x1C7D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D14u;
}
