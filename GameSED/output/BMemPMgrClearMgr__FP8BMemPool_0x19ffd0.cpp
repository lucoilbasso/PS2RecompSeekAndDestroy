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

// Function: BMemPMgrClearMgr__FP8BMemPool
// Address: 0x19ffd0 - 0x1a0028
void BMemPMgrClearMgr__FP8BMemPool_0x19ffd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrClearMgr__FP8BMemPool_0x19ffd0");
#endif

    ctx->pc = 0x19ffd0u;

    // 0x19ffd0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x19ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19ffd4: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x19ffd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x19ffd8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x19ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x19ffdc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x19ffdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ffe0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x19ffe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x19ffe4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19ffe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ffe8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19ffe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19ffec: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x19ffecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x19fff0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19fff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19fff4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x19fff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x19fff8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19fffc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x19fffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a0000: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1a0000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1a0004: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1a0004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1a0008: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1a0008u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1a000c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x1a000cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a0010: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a0010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a0014: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x1a0014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x1a0018: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1a0018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1a001c: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x1a001cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x1a0020: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0020u;
        // 0x1a0024: 0xac45fff0  sw          $a1, -0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0028u;
}
