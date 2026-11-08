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

// Function: sceDevConsPutc
// Address: 0x1ae3e0 - 0x1ae42c
void sceDevConsPutc_0x1ae3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsPutc_0x1ae3e0");
#endif

    ctx->pc = 0x1ae3e0u;

    // 0x1ae3e0: 0x4a00010  bltz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AE3E0u;
    {
        const bool branch_taken_0x1ae3e0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1AE3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3E0u;
        // 0x1ae3e4: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae3e0) {
            ctx->pc = 0x1AE424u;
            goto label_1ae424;
        }
    }
    ctx->pc = 0x1AE3E8u;
    // 0x1ae3e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ae3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ae3ec: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1ae3ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ae3f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AE3F0u;
    {
        const bool branch_taken_0x1ae3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae3f0) {
            ctx->pc = 0x1AE424u;
            goto label_1ae424;
        }
    }
    ctx->pc = 0x1AE3F8u;
    // 0x1ae3f8: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1AE3F8u;
    {
        const bool branch_taken_0x1ae3f8 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1ae3f8) {
            ctx->pc = 0x1AE424u;
            goto label_1ae424;
        }
    }
    ctx->pc = 0x1AE400u;
    // 0x1ae400: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ae400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ae404: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1ae404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ae408: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE408u;
    {
        const bool branch_taken_0x1ae408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE408u;
        // 0x1ae40c: 0xc34018  mult        $t0, $a2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae408) {
            ctx->pc = 0x1AE424u;
            goto label_1ae424;
        }
    }
    ctx->pc = 0x1AE410u;
    // 0x1ae410: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ae410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ae414: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x1ae414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1ae418: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ae418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ae41c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ae41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae420: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x1ae420u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
label_1ae424:
    // 0x1ae424: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE42Cu;
}
