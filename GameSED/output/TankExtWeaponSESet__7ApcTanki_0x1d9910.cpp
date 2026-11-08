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

// Function: TankExtWeaponSESet__7ApcTanki
// Address: 0x1d9910 - 0x1d9934
void TankExtWeaponSESet__7ApcTanki_0x1d9910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankExtWeaponSESet__7ApcTanki_0x1d9910");
#endif

    ctx->pc = 0x1d9910u;

    // 0x1d9910: 0x8c820854  lw          $v0, 0x854($a0)
    ctx->pc = 0x1d9910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2132)));
    // 0x1d9914: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9914u;
    {
        const bool branch_taken_0x1d9914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9914) {
            ctx->pc = 0x1D9918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9914u;
            // 0x1d9918: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9924u;
            goto label_1d9924;
        }
    }
    ctx->pc = 0x1D991Cu;
    // 0x1d991c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D991Cu;
    {
        const bool branch_taken_0x1d991c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D9920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D991Cu;
        // 0x1d9920: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d991c) {
            ctx->pc = 0x1D992Cu;
            goto label_1d992c;
        }
    }
    ctx->pc = 0x1D9924u;
label_1d9924:
    // 0x1d9924: 0xac850854  sw          $a1, 0x854($a0)
    ctx->pc = 0x1d9924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2132), GPR_U32(ctx, 5));
    // 0x1d9928: 0xac820858  sw          $v0, 0x858($a0)
    ctx->pc = 0x1d9928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2136), GPR_U32(ctx, 2));
label_1d992c:
    // 0x1d992c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D992Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D992Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9934u;
}
