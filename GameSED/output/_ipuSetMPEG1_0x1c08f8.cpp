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

// Function: _ipuSetMPEG1
// Address: 0x1c08f8 - 0x1c0920
void _ipuSetMPEG1_0x1c08f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ipuSetMPEG1_0x1c08f8");
#endif

    ctx->pc = 0x1c08f8u;

    // 0x1c08f8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c08f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c08fc: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1c08fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x1c0900: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x1c0900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x1c0904: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c0904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c0908: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c0908u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c090c: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x1c090cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x1c0910: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c0910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c0914: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c0914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c0918: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0918u;
        // 0x1c091c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0920u;
}
