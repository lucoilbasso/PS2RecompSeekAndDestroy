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

// Function: entry_00104ddc
// Address: 0x104ddc - 0x104e0c
void entry_00104ddc_0x104ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104ddc_0x104ddc");
#endif

    ctx->pc = 0x104ddcu;

    // 0x104ddc: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x104ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x104de0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x104de0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104de4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104dec: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x104decu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104df0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104df4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x104df4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x104df8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104df8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104dfc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x104dfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104e00: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x104e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x104e04: 0x3e00008  jr          $ra
    ctx->pc = 0x104E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E04u;
        // 0x104e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104E0Cu;
}
