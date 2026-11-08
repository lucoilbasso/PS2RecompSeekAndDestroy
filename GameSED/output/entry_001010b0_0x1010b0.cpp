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

// Function: entry_001010b0
// Address: 0x1010b0 - 0x1010dc
void entry_001010b0_0x1010b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001010b0_0x1010b0");
#endif

    ctx->pc = 0x1010b0u;

    // 0x1010b0: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x1010b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x1010b4: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x1010b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x1010b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1010b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1010bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1010bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1010c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1010c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1010c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1010c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1010c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1010c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1010cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1010ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1010d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1010d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1010d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1010D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1010D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010D4u;
        // 0x1010d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1010D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1010DCu;
}
