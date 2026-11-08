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

// Function: entry_00176e38
// Address: 0x176e38 - 0x176e64
void entry_00176e38_0x176e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176e38_0x176e38");
#endif

    ctx->pc = 0x176e38u;

    // 0x176e38: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x176e38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x176e3c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x176e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x176e40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x176e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176e44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176e48: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x176e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x176e4c: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x176e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x176e50: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x176e50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x176e54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x176e54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176e58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x176e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x176E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E5Cu;
        // 0x176e60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176E64u;
}
