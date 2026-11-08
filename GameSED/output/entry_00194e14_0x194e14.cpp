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

// Function: entry_00194e14
// Address: 0x194e14 - 0x194e78
void entry_00194e14_0x194e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194e14_0x194e14");
#endif

    switch (ctx->pc) {
        case 0x194e48u: goto label_194e48;
        default: break;
    }

    ctx->pc = 0x194e14u;

    // 0x194e14: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x194e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x194e18: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x194e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x194e1c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x194e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x194e20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x194e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194e24: 0xaf808c74  sw          $zero, -0x738C($gp)
    ctx->pc = 0x194e24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 0));
    // 0x194e28: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x194e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x194e2c: 0x8f848c68  lw          $a0, -0x7398($gp)
    ctx->pc = 0x194e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x194e30: 0x34420145  ori         $v0, $v0, 0x145
    ctx->pc = 0x194e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)325);
    // 0x194e34: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x194e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    // 0x194e38: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x194e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x194e3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x194e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x194e40: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x194E40u;
    SET_GPR_U32(ctx, 31, 0x194E48u);
    ctx->pc = 0x194E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E40u;
    // 0x194e44: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x194E40u, 0x194E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E48u;
label_194e48:
    // 0x194e48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x194e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x194e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x194e50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x194e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194e54: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x194e54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x194e58: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x194e58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194e5c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x194e5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x194e60: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x194e60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194e64: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x194e64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x194e68: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x194e68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x194e6c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x194e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x194e70: 0x3e00008  jr          $ra
    ctx->pc = 0x194E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E70u;
        // 0x194e74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194E78u;
}
