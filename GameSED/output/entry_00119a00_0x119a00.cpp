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

// Function: entry_00119a00
// Address: 0x119a00 - 0x119a48
void entry_00119a00_0x119a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119a00_0x119a00");
#endif

    switch (ctx->pc) {
        case 0x119a0cu: goto label_119a0c;
        case 0x119a20u: goto label_119a20;
        default: break;
    }

    ctx->pc = 0x119a00u;

    // 0x119a00: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x119a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x119a04: 0xc041882  jal         func_106208
    ctx->pc = 0x119A04u;
    SET_GPR_U32(ctx, 31, 0x119A0Cu);
    ctx->pc = 0x119A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A04u;
    // 0x119a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x119A04u, 0x119A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A0Cu;
label_119a0c:
    // 0x119a0c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x119a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x119a10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119a14: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x119a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x119a18: 0xc041882  jal         func_106208
    ctx->pc = 0x119A18u;
    SET_GPR_U32(ctx, 31, 0x119A20u);
    ctx->pc = 0x119A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A18u;
    // 0x119a1c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x119A18u, 0x119A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A20u;
label_119a20:
    // 0x119a20: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x119a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x119a24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119a28: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x119a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x119a2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119a30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119a34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119a38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119a3c: 0xac8300b0  sw          $v1, 0xB0($a0)
    ctx->pc = 0x119a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
    // 0x119a40: 0x3e00008  jr          $ra
    ctx->pc = 0x119A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A40u;
        // 0x119a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119A48u;
}
