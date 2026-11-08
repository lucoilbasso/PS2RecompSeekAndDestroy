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

// Function: entry_0010b6c8
// Address: 0x10b6c8 - 0x10b700
void entry_0010b6c8_0x10b6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b6c8_0x10b6c8");
#endif

    switch (ctx->pc) {
        case 0x10b6e8u: goto label_10b6e8;
        case 0x10b6f4u: goto label_10b6f4;
        default: break;
    }

    ctx->pc = 0x10b6c8u;

    // 0x10b6c8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x10b6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b6cc: 0x2610f610  addiu       $s0, $s0, -0x9F0
    ctx->pc = 0x10b6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964752));
    // 0x10b6d0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x10b6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10b6d4: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x10b6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b6d8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x10b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x10b6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6e0: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x10B6E0u;
    SET_GPR_U32(ctx, 31, 0x10B6E8u);
    ctx->pc = 0x10B6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6E0u;
    // 0x10b6e4: 0x24a5f5d0  addiu       $a1, $a1, -0xA30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x10B6E0u, 0x10B6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B6E8u;
label_10b6e8:
    // 0x10b6e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10b6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6ec: 0xc063b2e  jal         func_18ECB8
    ctx->pc = 0x10B6ECu;
    SET_GPR_U32(ctx, 31, 0x10B6F4u);
    ctx->pc = 0x10B6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6ECu;
    // 0x10b6f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ECB8u, 0x10B6ECu, 0x10B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B6F4u;
label_10b6f4:
    // 0x10b6f4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x10b6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b6f8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x10b6f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10b6fc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10b6fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x10b700u;
}
