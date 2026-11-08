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

// Function: SetViewOffset__6WcViewff
// Address: 0x1873c8 - 0x1873e0
void SetViewOffset__6WcViewff_0x1873c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetViewOffset__6WcViewff_0x1873c8");
#endif

    ctx->pc = 0x1873c8u;

    // 0x1873c8: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1873c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1873cc: 0xe48c01b0  swc1        $f12, 0x1B0($a0)
    ctx->pc = 0x1873ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 432), bits); }
    // 0x1873d0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1873d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1873d4: 0xe48d01b4  swc1        $f13, 0x1B4($a0)
    ctx->pc = 0x1873d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 436), bits); }
    // 0x1873d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1873D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1873DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873D8u;
        // 0x1873dc: 0xac820150  sw          $v0, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1873D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1873E0u;
}
