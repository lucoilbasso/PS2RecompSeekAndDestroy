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

// Function: entry_00198b14
// Address: 0x198b14 - 0x198b40
void entry_00198b14_0x198b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198b14_0x198b14");
#endif

    ctx->pc = 0x198b14u;

    // 0x198b14: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x198b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x198b18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198b1c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x198b1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198b20: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x198b20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198b24: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x198b24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198b28: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x198b28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198b2c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x198b2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x198b30: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x198b30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198b34: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x198b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x198b38: 0x3e00008  jr          $ra
    ctx->pc = 0x198B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B38u;
        // 0x198b3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198B40u;
}
