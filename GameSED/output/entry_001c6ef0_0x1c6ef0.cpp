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

// Function: entry_001c6ef0
// Address: 0x1c6ef0 - 0x1c6f88
void entry_001c6ef0_0x1c6ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6ef0_0x1c6ef0");
#endif

    switch (ctx->pc) {
        case 0x1c6f04u: goto label_1c6f04;
        case 0x1c6f14u: goto label_1c6f14;
        case 0x1c6f2cu: goto label_1c6f2c;
        case 0x1c6f40u: goto label_1c6f40;
        case 0x1c6f54u: goto label_1c6f54;
        case 0x1c6f64u: goto label_1c6f64;
        case 0x1c6f74u: goto label_1c6f74;
        case 0x1c6f84u: goto label_1c6f84;
        default: break;
    }

    ctx->pc = 0x1c6ef0u;

    // 0x1c6ef0: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x1c6ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1c6ef4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c6ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c6ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6efc: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6EFCu;
    SET_GPR_U32(ctx, 31, 0x1C6F04u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6EFCu, 0x1C6F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F04u;
label_1c6f04:
    // 0x1c6f04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f0c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6F0Cu;
    SET_GPR_U32(ctx, 31, 0x1C6F14u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6F0Cu, 0x1C6F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F14u;
label_1c6f14:
    // 0x1c6f14: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1c6f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1c6f18: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1c6f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1c6f1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f24: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6F24u;
    SET_GPR_U32(ctx, 31, 0x1C6F2Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6F24u, 0x1C6F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F2Cu;
label_1c6f2c:
    // 0x1c6f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c6f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f38: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6F38u;
    SET_GPR_U32(ctx, 31, 0x1C6F40u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6F38u, 0x1C6F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F40u;
label_1c6f40:
    // 0x1c6f40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c6f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f44: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c6f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f4c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6F4Cu;
    SET_GPR_U32(ctx, 31, 0x1C6F54u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6F4Cu, 0x1C6F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F54u;
label_1c6f54:
    // 0x1c6f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f5c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6F5Cu;
    SET_GPR_U32(ctx, 31, 0x1C6F64u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6F5Cu, 0x1C6F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F64u;
label_1c6f64:
    // 0x1c6f64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c6f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f6c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6F6Cu;
    SET_GPR_U32(ctx, 31, 0x1C6F74u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6F6Cu, 0x1C6F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F74u;
label_1c6f74:
    // 0x1c6f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f7c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6F7Cu;
    SET_GPR_U32(ctx, 31, 0x1C6F84u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6F7Cu, 0x1C6F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F84u;
label_1c6f84:
    // 0x1c6f84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1c6f88u;
}
