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

// Function: Clear__8WcMulobj
// Address: 0x1e0400 - 0x1e0448
void Clear__8WcMulobj_0x1e0400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__8WcMulobj_0x1e0400");
#endif

    switch (ctx->pc) {
        case 0x1e0430u: goto label_1e0430;
        default: break;
    }

    ctx->pc = 0x1e0400u;

    // 0x1e0400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0404: 0xc78c85cc  lwc1        $f12, -0x7A34($gp)
    ctx->pc = 0x1e0404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0408: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e040c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e040cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0410: 0x260201b4  addiu       $v0, $s0, 0x1B4
    ctx->pc = 0x1e0410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x1e0414: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e0414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e0418: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e0418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e041c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e041cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e0420: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x1e0420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x1e0424: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x1e0424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    // 0x1e0428: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x1E0428u;
    SET_GPR_U32(ctx, 31, 0x1E0430u);
    ctx->pc = 0x1E042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0428u;
    // 0x1e042c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x1E0428u, 0x1E0430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0430u;
label_1e0430:
    // 0x1e0430: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1e0430u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1e0434: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e0434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0438: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x1e0438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x1e043c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e043cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0440: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0440u;
        // 0x1e0444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0448u;
}
