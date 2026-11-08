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

// Function: entry_0018cdf4
// Address: 0x18cdf4 - 0x18ce34
void entry_0018cdf4_0x18cdf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cdf4_0x18cdf4");
#endif

    ctx->pc = 0x18cdf4u;

    // 0x18cdf4: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x18cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x18cdf8: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x18cdf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18cdfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ce00: 0xae840018  sw          $a0, 0x18($s4)
    ctx->pc = 0x18ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 4));
    // 0x18ce04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18ce04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18ce08: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x18ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x18ce0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18ce0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ce10: 0xae83001c  sw          $v1, 0x1C($s4)
    ctx->pc = 0x18ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
    // 0x18ce14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18ce14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ce18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x18ce18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ce1c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x18ce1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18ce20: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x18ce20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ce24: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x18ce24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18ce28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18ce28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ce2c: 0x3e00008  jr          $ra
    ctx->pc = 0x18CE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE2Cu;
        // 0x18ce30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CE34u;
}
