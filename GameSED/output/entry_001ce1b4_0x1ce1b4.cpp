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

// Function: entry_001ce1b4
// Address: 0x1ce1b4 - 0x1ce1fc
void entry_001ce1b4_0x1ce1b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce1b4_0x1ce1b4");
#endif

    ctx->pc = 0x1ce1b4u;

    // 0x1ce1b4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1ce1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1b8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1ce1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1ce1bc: 0x8fa80d84  lw          $t0, 0xD84($sp)
    ctx->pc = 0x1ce1bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3460)));
    // 0x1ce1c0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ce1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ce1c4: 0xdfb00da0  ld          $s0, 0xDA0($sp)
    ctx->pc = 0x1ce1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 3488)));
    // 0x1ce1c8: 0x7e182d  daddu       $v1, $v1, $fp
    ctx->pc = 0x1ce1c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 30));
    // 0x1ce1cc: 0xdfbe0de0  ld          $fp, 0xDE0($sp)
    ctx->pc = 0x1ce1ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 3552)));
    // 0x1ce1d0: 0xdfb10da8  ld          $s1, 0xDA8($sp)
    ctx->pc = 0x1ce1d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 3496)));
    // 0x1ce1d4: 0xdfb20db0  ld          $s2, 0xDB0($sp)
    ctx->pc = 0x1ce1d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 3504)));
    // 0x1ce1d8: 0xdfb30db8  ld          $s3, 0xDB8($sp)
    ctx->pc = 0x1ce1d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 3512)));
    // 0x1ce1dc: 0xdfb40dc0  ld          $s4, 0xDC0($sp)
    ctx->pc = 0x1ce1dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 3520)));
    // 0x1ce1e0: 0xdfb50dc8  ld          $s5, 0xDC8($sp)
    ctx->pc = 0x1ce1e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 3528)));
    // 0x1ce1e4: 0xdfb60dd0  ld          $s6, 0xDD0($sp)
    ctx->pc = 0x1ce1e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 3536)));
    // 0x1ce1e8: 0xdfb70dd8  ld          $s7, 0xDD8($sp)
    ctx->pc = 0x1ce1e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 3544)));
    // 0x1ce1ec: 0xdfbf0de8  ld          $ra, 0xDE8($sp)
    ctx->pc = 0x1ce1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3560)));
    // 0x1ce1f0: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x1ce1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x1ce1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1F4u;
        // 0x1ce1f8: 0x27bd0df0  addiu       $sp, $sp, 0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE1FCu;
}
