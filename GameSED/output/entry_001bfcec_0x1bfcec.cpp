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

// Function: entry_001bfcec
// Address: 0x1bfcec - 0x1bfd0c
void entry_001bfcec_0x1bfcec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfcec_0x1bfcec");
#endif

    ctx->pc = 0x1bfcecu;

    // 0x1bfcec: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bfcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bfcf0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bfcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bfcf4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1bfcf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bfcf8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1bfcf8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1bfcfc: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1BFCFCu;
    {
        const bool branch_taken_0x1bfcfc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCFCu;
        // 0x1bfd00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfcfc) {
            ctx->pc = 0x1BFC9Cu;
            return;
        }
    }
    ctx->pc = 0x1BFD04u;
    // 0x1bfd04: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFD0Cu;
}
