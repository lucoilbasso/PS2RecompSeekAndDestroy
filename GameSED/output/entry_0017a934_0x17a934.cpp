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

// Function: entry_0017a934
// Address: 0x17a934 - 0x17a954
void entry_0017a934_0x17a934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a934_0x17a934");
#endif

    ctx->pc = 0x17a934u;

    // 0x17a934: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x17a934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x17a938: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17a938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a93c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17a93cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a940: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17a940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a944: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x17a944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a948: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17a948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a94c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A94Cu;
        // 0x17a950: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A954u;
}
