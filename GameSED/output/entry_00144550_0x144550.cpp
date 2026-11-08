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

// Function: entry_00144550
// Address: 0x144550 - 0x144570
void entry_00144550_0x144550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144550_0x144550");
#endif

    ctx->pc = 0x144550u;

    // 0x144550: 0xae720060  sw          $s2, 0x60($s3)
    ctx->pc = 0x144550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 18));
    // 0x144554: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x144554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144558: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x144558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14455c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x14455cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144560: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x144560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x144564: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x144564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144568: 0x3e00008  jr          $ra
    ctx->pc = 0x144568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144568u;
        // 0x14456c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144570u;
}
