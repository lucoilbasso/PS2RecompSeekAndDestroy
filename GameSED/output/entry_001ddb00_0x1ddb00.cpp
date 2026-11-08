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

// Function: entry_001ddb00
// Address: 0x1ddb00 - 0x1ddb44
void entry_001ddb00_0x1ddb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddb00_0x1ddb00");
#endif

    ctx->pc = 0x1ddb00u;

    // 0x1ddb00: 0x8e4401bc  lw          $a0, 0x1BC($s2)
    ctx->pc = 0x1ddb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x1ddb04: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x1ddb04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x1ddb08: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x1ddb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x1ddb0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ddb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ddb10: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1ddb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1ddb14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ddb14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddb18: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x1ddb18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x1ddb1c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ddb1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb20: 0xae4301c0  sw          $v1, 0x1C0($s2)
    ctx->pc = 0x1ddb20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 3));
    // 0x1ddb24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddb24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddb28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ddb28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddb2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ddb2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ddb30: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ddb30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddb34: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ddb34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ddb38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ddb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ddb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB3Cu;
        // 0x1ddb40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDB44u;
}
