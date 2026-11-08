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

// Function: entry_001dfae4
// Address: 0x1dfae4 - 0x1dfb10
void entry_001dfae4_0x1dfae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfae4_0x1dfae4");
#endif

    ctx->pc = 0x1dfae4u;

    // 0x1dfae4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1dfae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1dfae8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1dfae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfaec: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1dfaecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1dfaf0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1dfaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1dfaf4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1dfaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1dfaf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfaf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfafc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dfafcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfb00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dfb00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfb04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dfb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfb08: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB08u;
        // 0x1dfb0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFB10u;
}
