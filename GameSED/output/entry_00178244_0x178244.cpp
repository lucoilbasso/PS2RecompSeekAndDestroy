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

// Function: entry_00178244
// Address: 0x178244 - 0x178268
void entry_00178244_0x178244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178244_0x178244");
#endif

    ctx->pc = 0x178244u;

    // 0x178244: 0xae401040  sw          $zero, 0x1040($s2)
    ctx->pc = 0x178244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4160), GPR_U32(ctx, 0));
    // 0x178248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17824c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17824cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178250: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178254: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178254u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178258: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x178258u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17825c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17825cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x178260: 0x3e00008  jr          $ra
    ctx->pc = 0x178260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178260u;
        // 0x178264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178268u;
}
