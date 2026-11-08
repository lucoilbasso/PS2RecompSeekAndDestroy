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

// Function: _$_8bad_cast
// Address: 0x1e1860 - 0x1e1894
void ps2____8bad_cast_0x1e1860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____8bad_cast_0x1e1860");
#endif

    ctx->pc = 0x1e1860u;

    // 0x1e1860: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e1860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e1864: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1868: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1e1868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x1e186c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1e186cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1e1870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1874: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1874u;
    {
        const bool branch_taken_0x1e1874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1874u;
        // 0x1e1878: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1874) {
            ctx->pc = 0x1E1888u;
            goto label_1e1888;
        }
    }
    ctx->pc = 0x1E187Cu;
    // 0x1e187c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e187cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1880: 0x80682ca  j           func_1A0B28
    ctx->pc = 0x1E1880u;
    ctx->pc = 0x1E1884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1880u;
    // 0x1e1884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B28u;
    ps2___builtin_delete_0x1a0b28(rdram, ctx, runtime); return;
    ctx->pc = 0x1E1888u;
label_1e1888:
    // 0x1e1888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e188c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E188Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E188Cu;
        // 0x1e1890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E188Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1894u;
}
