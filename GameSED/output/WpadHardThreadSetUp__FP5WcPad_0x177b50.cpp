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

// Function: WpadHardThreadSetUp__FP5WcPad
// Address: 0x177b50 - 0x177bb0
void WpadHardThreadSetUp__FP5WcPad_0x177b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WpadHardThreadSetUp__FP5WcPad_0x177b50");
#endif

    switch (ctx->pc) {
        case 0x177b84u: goto label_177b84;
        default: break;
    }

    ctx->pc = 0x177b50u;

    // 0x177b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177b54: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x177b54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x177b58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177b64: 0x26110080  addiu       $s1, $s0, 0x80
    ctx->pc = 0x177b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x177b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b70: 0x24c67bb0  addiu       $a2, $a2, 0x7BB0
    ctx->pc = 0x177b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31664));
    // 0x177b74: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x177b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x177b78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177b7c: 0xc0685e0  jal         func_1A1780
    ctx->pc = 0x177B7Cu;
    SET_GPR_U32(ctx, 31, 0x177B84u);
    ctx->pc = 0x177B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B7Cu;
    // 0x177b80: 0x24081000  addiu       $t0, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1780u, 0x177B7Cu, 0x177B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B84u;
label_177b84:
    // 0x177b84: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x177b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x177b88: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x177b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x177b8c: 0x24630158  addiu       $v1, $v1, 0x158
    ctx->pc = 0x177b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 344));
    // 0x177b90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177b94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x177b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177b9c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x177b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x177ba0: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x177ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x177ba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x177BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BA8u;
        // 0x177bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177BB0u;
}
