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

// Function: Cmd_ACTOR_DYING_Entry__FP15BsSCDEntControl
// Address: 0x138cc0 - 0x138d18
void Cmd_ACTOR_DYING_Entry__FP15BsSCDEntControl_0x138cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_DYING_Entry__FP15BsSCDEntControl_0x138cc0");
#endif

    switch (ctx->pc) {
        case 0x138d0cu: goto label_138d0c;
        default: break;
    }

    ctx->pc = 0x138cc0u;

    // 0x138cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138cc4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138ccc: 0x2408fffd  addiu       $t0, $zero, -0x3
    ctx->pc = 0x138cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x138cd0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x138cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x138cd4: 0x3c06ff7f  lui         $a2, 0xFF7F
    ctx->pc = 0x138cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65407 << 16));
    // 0x138cd8: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x138cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x138cdc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x138cdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x138ce0: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x138ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x138ce4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x138ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x138ce8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x138ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138cec: 0x8ca300d4  lw          $v1, 0xD4($a1)
    ctx->pc = 0x138cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x138cf0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x138cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x138cf4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x138cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x138cf8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x138cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x138cfc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x138cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x138d00: 0xaca300d4  sw          $v1, 0xD4($a1)
    ctx->pc = 0x138d00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 212), GPR_U32(ctx, 3));
    // 0x138d04: 0xc06684c  jal         func_19A130
    ctx->pc = 0x138D04u;
    SET_GPR_U32(ctx, 31, 0x138D0Cu);
    ctx->pc = 0x138D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138D04u;
    // 0x138d08: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A130u, 0x138D04u, 0x138D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138D0Cu;
label_138d0c:
    // 0x138d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138d10: 0x3e00008  jr          $ra
    ctx->pc = 0x138D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D10u;
        // 0x138d14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138D18u;
}
