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

// Function: entry_0010b368
// Address: 0x10b368 - 0x10b384
void entry_0010b368_0x10b368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b368_0x10b368");
#endif

    switch (ctx->pc) {
        case 0x10b374u: goto label_10b374;
        default: break;
    }

    ctx->pc = 0x10b368u;

    // 0x10b368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b36c: 0xc063b2e  jal         func_18ECB8
    ctx->pc = 0x10B36Cu;
    SET_GPR_U32(ctx, 31, 0x10B374u);
    ctx->pc = 0x10B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B36Cu;
    // 0x10b370: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ECB8u, 0x10B36Cu, 0x10B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B374u;
label_10b374:
    // 0x10b374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b378: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b37c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b37cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b380: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10b380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x10b384u;
}
