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

// Function: entry_00119abc
// Address: 0x119abc - 0x119adc
void entry_00119abc_0x119abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119abc_0x119abc");
#endif

    switch (ctx->pc) {
        case 0x119ac4u: goto label_119ac4;
        default: break;
    }

    ctx->pc = 0x119abcu;

    // 0x119abc: 0xc0458a4  jal         func_116290
    ctx->pc = 0x119ABCu;
    SET_GPR_U32(ctx, 31, 0x119AC4u);
    ctx->pc = 0x119AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119ABCu;
    // 0x119ac0: 0xace300b0  sw          $v1, 0xB0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116290u, 0x119ABCu, 0x119AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119AC4u;
label_119ac4:
    // 0x119ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119acc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x119accu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119ad0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x119ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x119ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x119AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AD4u;
        // 0x119ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119ADCu;
}
