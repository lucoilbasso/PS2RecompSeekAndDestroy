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

// Function: entry_0017a9d8
// Address: 0x17a9d8 - 0x17a9fc
void entry_0017a9d8_0x17a9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a9d8_0x17a9d8");
#endif

    ctx->pc = 0x17a9d8u;

    // 0x17a9d8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17A9D8u;
    {
        const bool branch_taken_0x17a9d8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9D8u;
        // 0x17a9dc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9d8) {
            ctx->pc = 0x17A9C0u;
            return;
        }
    }
    ctx->pc = 0x17A9E0u;
    // 0x17a9e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a9e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17a9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a9e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17a9e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a9ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17a9ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a9f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17a9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9F4u;
        // 0x17a9f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A9FCu;
}
