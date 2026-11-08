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

// Function: Clear__9ApcGameDr
// Address: 0x1d7e48 - 0x1d7eac
void Clear__9ApcGameDr_0x1d7e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9ApcGameDr_0x1d7e48");
#endif

    switch (ctx->pc) {
        case 0x1d7e74u: goto label_1d7e74;
        default: break;
    }

    ctx->pc = 0x1d7e48u;

    // 0x1d7e48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d7e4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7e50: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1d7e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1d7e54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e58: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d7e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d7e5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e60: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1d7e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1d7e64: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x1d7e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x1d7e68: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1d7e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1d7e6c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1D7E6Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E74u);
    ctx->pc = 0x1D7E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E6Cu;
    // 0x1d7e70: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1D7E6Cu, 0x1D7E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E74u;
label_1d7e74:
    // 0x1d7e74: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d7e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d7e78: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x1d7e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x1d7e7c: 0xae0340a4  sw          $v1, 0x40A4($s0)
    ctx->pc = 0x1d7e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16548), GPR_U32(ctx, 3));
    // 0x1d7e80: 0xae0040ac  sw          $zero, 0x40AC($s0)
    ctx->pc = 0x1d7e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16556), GPR_U32(ctx, 0));
    // 0x1d7e84: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1d7e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x1d7e88: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1d7e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x1d7e8c: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x1d7e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x1d7e90: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x1d7e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x1d7e94: 0xae0040a0  sw          $zero, 0x40A0($s0)
    ctx->pc = 0x1d7e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16544), GPR_U32(ctx, 0));
    // 0x1d7e98: 0xae0040a8  sw          $zero, 0x40A8($s0)
    ctx->pc = 0x1d7e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16552), GPR_U32(ctx, 0));
    // 0x1d7e9c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d7e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d7ea0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1d7ea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EA4u;
        // 0x1d7ea8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7EACu;
}
