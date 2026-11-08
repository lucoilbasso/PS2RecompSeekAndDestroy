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

// Function: setGIFtag
// Address: 0x171f50 - 0x171fa4
void setGIFtag_0x171f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setGIFtag_0x171f50");
#endif

    ctx->pc = 0x171f50u;

    // 0x171f50: 0x94b80  sll         $t1, $t1, 14
    ctx->pc = 0x171f50u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 14));
    // 0x171f54: 0x63700  sll         $a2, $a2, 28
    ctx->pc = 0x171f54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 28));
    // 0x171f58: 0x73e80  sll         $a3, $a3, 26
    ctx->pc = 0x171f58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 26));
    // 0x171f5c: 0x843c0  sll         $t0, $t0, 15
    ctx->pc = 0x171f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
    // 0x171f60: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x171f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x171f64: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x171f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x171f68: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x171f68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x171f6c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x171f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x171f70: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x171f70u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x171f74: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x171f74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x171f78: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x171f78u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x171f7c: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x171f7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x171f80: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x171f80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x171f84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x171f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x171f88: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x171f88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x171f8c: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x171f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x171f90: 0xac890004  sw          $t1, 0x4($a0)
    ctx->pc = 0x171f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x171f94: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x171f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x171f98: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x171f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x171f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x171F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F9Cu;
        // 0x171fa0: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171FA4u;
}
