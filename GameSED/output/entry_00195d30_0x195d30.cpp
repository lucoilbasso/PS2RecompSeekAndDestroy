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

// Function: entry_00195d30
// Address: 0x195d30 - 0x195d8c
void entry_00195d30_0x195d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195d30_0x195d30");
#endif

    switch (ctx->pc) {
        case 0x195d60u: goto label_195d60;
        default: break;
    }

    ctx->pc = 0x195d30u;

    // 0x195d30: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x195d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x195d34: 0x8ec50244  lw          $a1, 0x244($s6)
    ctx->pc = 0x195d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 580)));
    // 0x195d38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x195d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195d3c: 0xaf808c74  sw          $zero, -0x738C($gp)
    ctx->pc = 0x195d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 0));
    // 0x195d40: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x195d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x195d44: 0x8f848c68  lw          $a0, -0x7398($gp)
    ctx->pc = 0x195d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x195d48: 0x34420145  ori         $v0, $v0, 0x145
    ctx->pc = 0x195d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)325);
    // 0x195d4c: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x195d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    // 0x195d50: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x195d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x195d54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x195d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x195d58: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x195D58u;
    SET_GPR_U32(ctx, 31, 0x195D60u);
    ctx->pc = 0x195D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195D58u;
    // 0x195d5c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x195D58u, 0x195D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D60u;
label_195d60:
    // 0x195d60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x195d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195d64: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x195d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x195d68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x195d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195d6c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x195d6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195d70: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x195d70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195d74: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x195d74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195d78: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x195d78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195d7c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x195d7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x195d80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x195d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x195d84: 0x3e00008  jr          $ra
    ctx->pc = 0x195D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D84u;
        // 0x195d88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195D8Cu;
}
