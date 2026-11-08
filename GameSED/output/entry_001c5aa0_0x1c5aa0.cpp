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

// Function: entry_001c5aa0
// Address: 0x1c5aa0 - 0x1c5acc
void entry_001c5aa0_0x1c5aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5aa0_0x1c5aa0");
#endif

    ctx->pc = 0x1c5aa0u;

    // 0x1c5aa0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c5aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c5aa4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1c5aa4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c5aa8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1c5aa8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c5aac: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1c5aacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c5ab0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c5ab0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5ab4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1c5ab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c5ab8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c5ab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5abc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1c5abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5ac0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c5ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AC4u;
        // 0x1c5ac8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5ACCu;
}
