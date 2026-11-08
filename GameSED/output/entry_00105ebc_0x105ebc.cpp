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

// Function: entry_00105ebc
// Address: 0x105ebc - 0x105eec
void entry_00105ebc_0x105ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105ebc_0x105ebc");
#endif

    switch (ctx->pc) {
        case 0x105ec4u: goto label_105ec4;
        default: break;
    }

    ctx->pc = 0x105ebcu;

    // 0x105ebc: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x105EBCu;
    SET_GPR_U32(ctx, 31, 0x105EC4u);
    ctx->pc = 0x105EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105EBCu;
    // 0x105ec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x105EBCu, 0x105EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EC4u;
label_105ec4:
    // 0x105ec4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x105ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x105ec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105ecc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105ed0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x105ed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105ed4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x105ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x105ed8: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x105ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x105edc: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x105edcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x105ee0: 0xac22ec00  sw          $v0, -0x1400($at)
    ctx->pc = 0x105ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962176), GPR_U32(ctx, 2));
    // 0x105ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x105EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EE4u;
        // 0x105ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105EECu;
}
