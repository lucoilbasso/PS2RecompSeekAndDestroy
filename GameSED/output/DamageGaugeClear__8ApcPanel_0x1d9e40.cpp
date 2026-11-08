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

// Function: DamageGaugeClear__8ApcPanel
// Address: 0x1d9e40 - 0x1d9e94
void DamageGaugeClear__8ApcPanel_0x1d9e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DamageGaugeClear__8ApcPanel_0x1d9e40");
#endif

    ctx->pc = 0x1d9e40u;

    // 0x1d9e40: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x1d9e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1d9e44: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1d9e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1d9e48: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1d9e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1d9e4c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1d9e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1d9e50: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1d9e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1d9e54: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1d9e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1d9e58: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1d9e58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1d9e5c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d9e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d9e60: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1d9e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1d9e64: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1d9e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1d9e68: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1d9e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1d9e6c: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1d9e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1d9e70: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d9e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d9e74: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d9e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d9e78: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1d9e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1d9e7c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d9e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d9e80: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d9e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d9e84: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1d9e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1d9e88: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1d9e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1d9e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E8Cu;
        // 0x1d9e90: 0xac400034  sw          $zero, 0x34($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9E94u;
}
