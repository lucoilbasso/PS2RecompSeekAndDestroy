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

// Function: entry_0010cd10
// Address: 0x10cd10 - 0x10cd30
void entry_0010cd10_0x10cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cd10_0x10cd10");
#endif

    switch (ctx->pc) {
        case 0x10cd1cu: goto label_10cd1c;
        default: break;
    }

    ctx->pc = 0x10cd10u;

    // 0x10cd10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10cd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd14: 0xc063b2e  jal         func_18ECB8
    ctx->pc = 0x10CD14u;
    SET_GPR_U32(ctx, 31, 0x10CD1Cu);
    ctx->pc = 0x10CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD14u;
    // 0x10cd18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ECB8u, 0x10CD14u, 0x10CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD1Cu;
label_10cd1c:
    // 0x10cd1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cd1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cd20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10cd20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10cd24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10cd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cd28: 0x3e00008  jr          $ra
    ctx->pc = 0x10CD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD28u;
        // 0x10cd2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CD30u;
}
