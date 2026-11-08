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

// Function: entry_00105d04
// Address: 0x105d04 - 0x105d34
void entry_00105d04_0x105d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105d04_0x105d04");
#endif

    switch (ctx->pc) {
        case 0x105d0cu: goto label_105d0c;
        default: break;
    }

    ctx->pc = 0x105d04u;

    // 0x105d04: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x105D04u;
    SET_GPR_U32(ctx, 31, 0x105D0Cu);
    ctx->pc = 0x105D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105D04u;
    // 0x105d08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x105D04u, 0x105D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D0Cu;
label_105d0c:
    // 0x105d0c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x105d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x105d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105d14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105d18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x105d18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105d1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x105d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x105d20: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x105d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x105d24: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x105d24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x105d28: 0xac22dc00  sw          $v0, -0x2400($at)
    ctx->pc = 0x105d28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958080), GPR_U32(ctx, 2));
    // 0x105d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x105D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D2Cu;
        // 0x105d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105D34u;
}
