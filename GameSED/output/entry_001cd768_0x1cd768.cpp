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

// Function: entry_001cd768
// Address: 0x1cd768 - 0x1cd798
void entry_001cd768_0x1cd768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd768_0x1cd768");
#endif

    ctx->pc = 0x1cd768u;

label_1cd768:
    // 0x1cd768: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1cd768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cd76c: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x1cd76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1cd770: 0x0  nop
    ctx->pc = 0x1cd770u;
    // NOP
    // 0x1cd774: 0x0  nop
    ctx->pc = 0x1cd774u;
    // NOP
    // 0x1cd778: 0x0  nop
    ctx->pc = 0x1cd778u;
    // NOP
    // 0x1cd77c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CD77Cu;
    {
        const bool branch_taken_0x1cd77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd77c) {
            ctx->pc = 0x1CD780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD77Cu;
            // 0x1cd780: 0x641826  xor         $v1, $v1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd768;
        }
    }
    ctx->pc = 0x1CD784u;
    // 0x1cd784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd788: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd78c: 0xacc300d0  sw          $v1, 0xD0($a2)
    ctx->pc = 0x1cd78cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 208), GPR_U32(ctx, 3));
    // 0x1cd790: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD790u;
        // 0x1cd794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD798u;
}
