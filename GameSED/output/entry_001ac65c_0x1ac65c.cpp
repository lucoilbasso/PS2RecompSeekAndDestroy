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

// Function: entry_001ac65c
// Address: 0x1ac65c - 0x1ac68c
void entry_001ac65c_0x1ac65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac65c_0x1ac65c");
#endif

    ctx->pc = 0x1ac65cu;

    // 0x1ac65c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ac65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ac660: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x1ac660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1ac664: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x1ac664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x1ac668: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ac668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ac66c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ac66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac670: 0x34420109  ori         $v0, $v0, 0x109
    ctx->pc = 0x1ac670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)265);
    // 0x1ac674: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ac674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac678: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ac678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ac67c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ac67cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac684: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC684u;
        // 0x1ac688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC68Cu;
}
