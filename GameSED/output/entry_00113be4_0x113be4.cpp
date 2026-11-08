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

// Function: entry_00113be4
// Address: 0x113be4 - 0x113c0c
void entry_00113be4_0x113be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113be4_0x113be4");
#endif

    ctx->pc = 0x113be4u;

    // 0x113be4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x113be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x113be8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x113be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x113bec: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x113becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x113bf0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x113BF0u;
    {
        const bool branch_taken_0x113bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BF0u;
        // 0x113bf4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bf0) {
            ctx->pc = 0x113BA0u;
            return;
        }
    }
    ctx->pc = 0x113BF8u;
    // 0x113bf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113bfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113c00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x113c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113c04: 0x3e00008  jr          $ra
    ctx->pc = 0x113C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C04u;
        // 0x113c08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113C0Cu;
}
