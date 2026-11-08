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
// Address: 0x174408 - 0x17445c
void setGIFtag_0x174408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setGIFtag_0x174408");
#endif

    ctx->pc = 0x174408u;

    // 0x174408: 0x94b80  sll         $t1, $t1, 14
    ctx->pc = 0x174408u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 14));
    // 0x17440c: 0x63700  sll         $a2, $a2, 28
    ctx->pc = 0x17440cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 28));
    // 0x174410: 0x73e80  sll         $a3, $a3, 26
    ctx->pc = 0x174410u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 26));
    // 0x174414: 0x843c0  sll         $t0, $t0, 15
    ctx->pc = 0x174414u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
    // 0x174418: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x174418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x17441c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x17441cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x174420: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x174420u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x174424: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x174424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x174428: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x174428u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x17442c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x17442cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x174430: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x174430u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x174434: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x174434u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x174438: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x174438u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x17443c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17443cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x174440: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x174440u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x174444: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x174444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x174448: 0xac890004  sw          $t1, 0x4($a0)
    ctx->pc = 0x174448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x17444c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x17444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x174450: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x174450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x174454: 0x3e00008  jr          $ra
    ctx->pc = 0x174454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174454u;
        // 0x174458: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17445Cu;
}
