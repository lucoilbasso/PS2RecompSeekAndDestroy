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

// Function: entry_00155d08
// Address: 0x155d08 - 0x155d58
void entry_00155d08_0x155d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155d08_0x155d08");
#endif

    switch (ctx->pc) {
        case 0x155d30u: goto label_155d30;
        case 0x155d44u: goto label_155d44;
        default: break;
    }

    ctx->pc = 0x155d08u;

    // 0x155d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155d0c: 0x90900575  lbu         $s0, 0x575($a0)
    ctx->pc = 0x155d0cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1397)));
    // 0x155d10: 0x720210e8  pminw       $v0, $s0, $v0
    ctx->pc = 0x155d10u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x155d14: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x155d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x155d18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x155d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x155d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x155d20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x155d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x155d24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155d28: 0xc05be74  jal         func_16F9D0
    ctx->pc = 0x155D28u;
    SET_GPR_U32(ctx, 31, 0x155D30u);
    ctx->pc = 0x155D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D28u;
    // 0x155d2c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x155D28u, 0x155D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D30u;
label_155d30:
    // 0x155d30: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x155d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x155d34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x155d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x155d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d3c: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x155D3Cu;
    SET_GPR_U32(ctx, 31, 0x155D44u);
    ctx->pc = 0x155D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D3Cu;
    // 0x155d40: 0x24846cc0  addiu       $a0, $a0, 0x6CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x155D3Cu, 0x155D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D44u;
label_155d44:
    // 0x155d44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155d48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155d4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155d50: 0x3e00008  jr          $ra
    ctx->pc = 0x155D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D50u;
        // 0x155d54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155D58u;
}
