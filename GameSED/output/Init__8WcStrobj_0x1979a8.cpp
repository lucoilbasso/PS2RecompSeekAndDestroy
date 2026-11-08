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

// Function: Init__8WcStrobj
// Address: 0x1979a8 - 0x1979e0
void Init__8WcStrobj_0x1979a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__8WcStrobj_0x1979a8");
#endif

    switch (ctx->pc) {
        case 0x1979bcu: goto label_1979bc;
        default: break;
    }

    ctx->pc = 0x1979a8u;

    // 0x1979a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1979a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1979ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1979acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1979b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1979b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1979b4: 0xc064e54  jal         func_193950
    ctx->pc = 0x1979B4u;
    SET_GPR_U32(ctx, 31, 0x1979BCu);
    ctx->pc = 0x1979B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979B4u;
    // 0x1979b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193950u, 0x1979B4u, 0x1979BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979BCu;
label_1979bc:
    // 0x1979bc: 0x24020846  addiu       $v0, $zero, 0x846
    ctx->pc = 0x1979bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2118));
    // 0x1979c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1979c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1979c4: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x1979c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
    // 0x1979c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1979c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1979cc: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x1979ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x1979d0: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x1979d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x1979d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1979d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1979d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1979D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1979DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979D8u;
        // 0x1979dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1979D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1979E0u;
}
