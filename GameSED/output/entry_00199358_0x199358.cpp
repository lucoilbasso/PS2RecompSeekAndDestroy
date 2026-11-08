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

// Function: entry_00199358
// Address: 0x199358 - 0x19937c
void entry_00199358_0x199358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199358_0x199358");
#endif

    ctx->pc = 0x199358u;

    // 0x199358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x199358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19935c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19935cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199360: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x199360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199364: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x199364u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199368: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x199368u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19936c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x19936cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x199370: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x199370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199374: 0x3e00008  jr          $ra
    ctx->pc = 0x199374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199374u;
        // 0x199378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19937Cu;
}
