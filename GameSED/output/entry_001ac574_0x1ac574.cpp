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

// Function: entry_001ac574
// Address: 0x1ac574 - 0x1ac5a0
void entry_001ac574_0x1ac574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac574_0x1ac574");
#endif

    ctx->pc = 0x1ac574u;

    // 0x1ac574: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ac574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ac578: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x1ac578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1ac57c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1ac57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1ac580: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ac580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ac584: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ac584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac588: 0x34420105  ori         $v0, $v0, 0x105
    ctx->pc = 0x1ac588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)261);
    // 0x1ac58c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ac58cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac590: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ac590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ac594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac598: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC598u;
        // 0x1ac59c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC5A0u;
}
