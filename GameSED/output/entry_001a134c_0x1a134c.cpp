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

// Function: entry_001a134c
// Address: 0x1a134c - 0x1a1374
void entry_001a134c_0x1a134c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a134c_0x1a134c");
#endif

    ctx->pc = 0x1a134cu;

    // 0x1a134c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1a134cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1a1350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a1358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a135c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a135cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a1360: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a1360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1364: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a1364u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1368: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a1368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a136c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A136Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A136Cu;
        // 0x1a1370: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A136Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1374u;
}
