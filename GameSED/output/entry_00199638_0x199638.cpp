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

// Function: entry_00199638
// Address: 0x199638 - 0x199650
void entry_00199638_0x199638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199638_0x199638");
#endif

    switch (ctx->pc) {
        case 0x199640u: goto label_199640;
        default: break;
    }

    ctx->pc = 0x199638u;

    // 0x199638: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x199638u;
    SET_GPR_U32(ctx, 31, 0x199640u);
    ctx->pc = 0x19963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199638u;
    // 0x19963c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x199638u, 0x199640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199640u;
label_199640:
    // 0x199640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199644: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x199644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199648: 0x3e00008  jr          $ra
    ctx->pc = 0x199648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199648u;
        // 0x19964c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199650u;
}
