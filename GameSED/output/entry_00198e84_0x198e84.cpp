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

// Function: entry_00198e84
// Address: 0x198e84 - 0x198eb8
void entry_00198e84_0x198e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198e84_0x198e84");
#endif

    switch (ctx->pc) {
        case 0x198e90u: goto label_198e90;
        default: break;
    }

    ctx->pc = 0x198e84u;

    // 0x198e84: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x198e84u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    // 0x198e88: 0xc064e8e  jal         func_193A38
    ctx->pc = 0x198E88u;
    SET_GPR_U32(ctx, 31, 0x198E90u);
    ctx->pc = 0x198E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E88u;
    // 0x198e8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A38u, 0x198E88u, 0x198E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E90u;
label_198e90:
    // 0x198e90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198e94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x198e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x198e98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x198e98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198e9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x198e9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198ea0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x198ea0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198ea4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x198ea4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198ea8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x198ea8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198eac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x198eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x198EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EB0u;
        // 0x198eb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198EB8u;
}
