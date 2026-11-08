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

// Function: entry_001dfb58
// Address: 0x1dfb58 - 0x1dfb80
void entry_001dfb58_0x1dfb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfb58_0x1dfb58");
#endif

    ctx->pc = 0x1dfb58u;

    // 0x1dfb58: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1dfb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1dfb5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1dfb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb60: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1dfb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1dfb64: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1dfb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1dfb68: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1dfb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1dfb6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dfb6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfb70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfb70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfb74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dfb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfb78: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB78u;
        // 0x1dfb7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFB80u;
}
