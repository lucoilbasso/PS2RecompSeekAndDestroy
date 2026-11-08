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

// Function: entry_0017e184
// Address: 0x17e184 - 0x17e1ac
void entry_0017e184_0x17e184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e184_0x17e184");
#endif

    switch (ctx->pc) {
        case 0x17e18cu: goto label_17e18c;
        default: break;
    }

    ctx->pc = 0x17e184u;

    // 0x17e184: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17E184u;
    SET_GPR_U32(ctx, 31, 0x17E18Cu);
    ctx->pc = 0x17E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E184u;
    // 0x17e188: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17E184u, 0x17E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E18Cu;
label_17e18c:
    // 0x17e18c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e190: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e194: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17e194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e198: 0x26080020  addiu       $t0, $s0, 0x20
    ctx->pc = 0x17e198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17e19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1a0: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x17e1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x17e1a4: 0xc0686a0  jal         func_1A1A80
    ctx->pc = 0x17E1A4u;
    SET_GPR_U32(ctx, 31, 0x17E1ACu);
    ctx->pc = 0x17E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E1A4u;
    // 0x17e1a8: 0x240903f8  addiu       $t1, $zero, 0x3F8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1A80u, 0x17E1A4u, 0x17E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E1ACu;
}
