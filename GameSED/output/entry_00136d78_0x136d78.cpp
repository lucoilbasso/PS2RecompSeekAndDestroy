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

// Function: entry_00136d78
// Address: 0x136d78 - 0x136da8
void entry_00136d78_0x136d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136d78_0x136d78");
#endif

    ctx->pc = 0x136d78u;

    // 0x136d78: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x136D78u;
    {
        const bool branch_taken_0x136d78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x136D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D78u;
        // 0x136d7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d78) {
            ctx->pc = 0x136DB8u;
            return;
        }
    }
    ctx->pc = 0x136D80u;
    // 0x136d80: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x136d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x136d84: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x136d84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x136d88: 0x8c70fff4  lw          $s0, -0xC($v1)
    ctx->pc = 0x136d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
    // 0x136d8c: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x136d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x136d90: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x136d90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x136d94: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x136d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x136d98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136D98u;
    {
        const bool branch_taken_0x136d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d98) {
            ctx->pc = 0x136DA8u;
            return;
        }
    }
    ctx->pc = 0x136DA0u;
    // 0x136da0: 0xc061920  jal         func_186480
    ctx->pc = 0x136DA0u;
    SET_GPR_U32(ctx, 31, 0x136DA8u);
    ctx->pc = 0x136DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DA0u;
    // 0x136da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x136DA0u, 0x136DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DA8u;
}
