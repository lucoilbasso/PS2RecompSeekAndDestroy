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

// Function: entry_00127b90
// Address: 0x127b90 - 0x127bb8
void entry_00127b90_0x127b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127b90_0x127b90");
#endif

    ctx->pc = 0x127b90u;

    // 0x127b90: 0xae2201f8  sw          $v0, 0x1F8($s1)
    ctx->pc = 0x127b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 2));
    // 0x127b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127b98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127b9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x127b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127ba0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x127ba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127ba4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x127ba4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127ba8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x127ba8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x127bac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x127bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x127BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BB0u;
        // 0x127bb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127BB8u;
}
