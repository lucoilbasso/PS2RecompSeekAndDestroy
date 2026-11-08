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

// Function: cscVu1Init
// Address: 0x171e70 - 0x171ebc
void cscVu1Init_0x171e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cscVu1Init_0x171e70");
#endif

    ctx->pc = 0x171e70u;

    // 0x171e70: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x171e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x171e74: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x171e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x171e78: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x171e78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x171e7c: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x171e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x171e80: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x171e80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x171e84: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x171e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x171e88: 0x24632400  addiu       $v1, $v1, 0x2400
    ctx->pc = 0x171e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9216));
    // 0x171e8c: 0x24a52d00  addiu       $a1, $a1, 0x2D00
    ctx->pc = 0x171e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11520));
    // 0x171e90: 0x24c64800  addiu       $a2, $a2, 0x4800
    ctx->pc = 0x171e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18432));
    // 0x171e94: 0x24e74880  addiu       $a3, $a3, 0x4880
    ctx->pc = 0x171e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18560));
    // 0x171e98: 0x25083600  addiu       $t0, $t0, 0x3600
    ctx->pc = 0x171e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13824));
    // 0x171e9c: 0x24423f00  addiu       $v0, $v0, 0x3F00
    ctx->pc = 0x171e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16128));
    // 0x171ea0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x171ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x171ea4: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x171ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x171ea8: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x171ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x171eac: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x171eacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x171eb0: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x171eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x171eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x171EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EB4u;
        // 0x171eb8: 0xac880010  sw          $t0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171EBCu;
}
