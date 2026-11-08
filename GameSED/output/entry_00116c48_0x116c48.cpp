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

// Function: entry_00116c48
// Address: 0x116c48 - 0x116c90
void entry_00116c48_0x116c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116c48_0x116c48");
#endif

    switch (ctx->pc) {
        case 0x116c50u: goto label_116c50;
        case 0x116c64u: goto label_116c64;
        default: break;
    }

    ctx->pc = 0x116c48u;

    // 0x116c48: 0xc041882  jal         func_106208
    ctx->pc = 0x116C48u;
    SET_GPR_U32(ctx, 31, 0x116C50u);
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116C48u, 0x116C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C50u;
label_116c50:
    // 0x116c50: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x116c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x116c54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116c58: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x116c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116c5c: 0xc041882  jal         func_106208
    ctx->pc = 0x116C5Cu;
    SET_GPR_U32(ctx, 31, 0x116C64u);
    ctx->pc = 0x116C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C5Cu;
    // 0x116c60: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116C5Cu, 0x116C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C64u;
label_116c64:
    // 0x116c64: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x116c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x116c68: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x116c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x116c6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x116c6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116c70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116c78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x116c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116c7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116c80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x116c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x116c84: 0xac8200b0  sw          $v0, 0xB0($a0)
    ctx->pc = 0x116c84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
    // 0x116c88: 0x3e00008  jr          $ra
    ctx->pc = 0x116C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C88u;
        // 0x116c8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116C90u;
}
