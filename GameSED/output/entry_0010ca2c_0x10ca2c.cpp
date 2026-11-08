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

// Function: entry_0010ca2c
// Address: 0x10ca2c - 0x10ca54
void entry_0010ca2c_0x10ca2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ca2c_0x10ca2c");
#endif

    switch (ctx->pc) {
        case 0x10ca3cu: goto label_10ca3c;
        default: break;
    }

    ctx->pc = 0x10ca2cu;

    // 0x10ca2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ca2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10ca30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca34: 0xc063822  jal         func_18E088
    ctx->pc = 0x10CA34u;
    SET_GPR_U32(ctx, 31, 0x10CA3Cu);
    ctx->pc = 0x10CA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CA34u;
    // 0x10ca38: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E088u, 0x10CA34u, 0x10CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA3Cu;
label_10ca3c:
    // 0x10ca3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10ca3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ca40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10ca40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ca44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ca44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ca48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10ca48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10ca4c: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA4Cu;
        // 0x10ca50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CA54u;
}
