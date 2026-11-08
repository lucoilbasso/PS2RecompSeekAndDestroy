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

// Function: entry_00119fe0
// Address: 0x119fe0 - 0x11a010
void entry_00119fe0_0x119fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119fe0_0x119fe0");
#endif

    ctx->pc = 0x119fe0u;

    // 0x119fe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119fe4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x119fe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119fec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x119fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x119ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119ff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x119ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119ff8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119ffc: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x119ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x11a000: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x11a000u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x11a004: 0xac23e150  sw          $v1, -0x1EB0($at)
    ctx->pc = 0x11a004u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959440), GPR_U32(ctx, 3));
    // 0x11a008: 0x3e00008  jr          $ra
    ctx->pc = 0x11A008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A008u;
        // 0x11a00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A010u;
}
