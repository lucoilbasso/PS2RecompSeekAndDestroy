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

// Function: entry_001106b4
// Address: 0x1106b4 - 0x1106d8
void entry_001106b4_0x1106b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001106b4_0x1106b4");
#endif

    switch (ctx->pc) {
        case 0x1106c0u: goto label_1106c0;
        default: break;
    }

    ctx->pc = 0x1106b4u;

    // 0x1106b4: 0x8e4401ac  lw          $a0, 0x1AC($s2)
    ctx->pc = 0x1106b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x1106b8: 0xc0654a4  jal         func_195290
    ctx->pc = 0x1106B8u;
    SET_GPR_U32(ctx, 31, 0x1106C0u);
    ctx->pc = 0x1106BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1106B8u;
    // 0x1106bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195290u, 0x1106B8u, 0x1106C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1106C0u;
label_1106c0:
    // 0x1106c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1106c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1106c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1106c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1106c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1106c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1106cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1106ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1106d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1106D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1106D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106D0u;
        // 0x1106d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1106D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1106D8u;
}
