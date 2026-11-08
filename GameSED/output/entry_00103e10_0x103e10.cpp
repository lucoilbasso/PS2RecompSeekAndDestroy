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

// Function: entry_00103e10
// Address: 0x103e10 - 0x103e7c
void entry_00103e10_0x103e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103e10_0x103e10");
#endif

    switch (ctx->pc) {
        case 0x103e20u: goto label_103e20;
        default: break;
    }

    ctx->pc = 0x103e10u;

    // 0x103e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x103e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x103e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e18: 0xc04039c  jal         func_100E70
    ctx->pc = 0x103E18u;
    SET_GPR_U32(ctx, 31, 0x103E20u);
    ctx->pc = 0x103E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E18u;
    // 0x103e1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100E70u, 0x103E18u, 0x103E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E20u;
label_103e20:
    // 0x103e20: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x103e20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103e24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x103e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x103e28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103e2c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x103e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x103e30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103e30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103e34: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x103e34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x103e38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x103e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x103e3c: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x103e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x103e40: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x103e40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x103e44: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x103e44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x103e48: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x103e48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x103e4c: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x103e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    // 0x103e50: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x103e50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x103e54: 0xfc830020  sd          $v1, 0x20($a0)
    ctx->pc = 0x103e54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
    // 0x103e58: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x103e58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x103e5c: 0xfc820028  sd          $v0, 0x28($a0)
    ctx->pc = 0x103e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 2));
    // 0x103e60: 0xde030030  ld          $v1, 0x30($s0)
    ctx->pc = 0x103e60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x103e64: 0xfc830030  sd          $v1, 0x30($a0)
    ctx->pc = 0x103e64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 3));
    // 0x103e68: 0xde020038  ld          $v0, 0x38($s0)
    ctx->pc = 0x103e68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x103e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103e70: 0xfc820038  sd          $v0, 0x38($a0)
    ctx->pc = 0x103e70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 2));
    // 0x103e74: 0x3e00008  jr          $ra
    ctx->pc = 0x103E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E74u;
        // 0x103e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103E7Cu;
}
