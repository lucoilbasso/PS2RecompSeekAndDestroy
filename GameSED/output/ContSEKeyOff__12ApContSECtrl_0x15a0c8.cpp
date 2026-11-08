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

// Function: ContSEKeyOff__12ApContSECtrl
// Address: 0x15a0c8 - 0x15a11c
void ContSEKeyOff__12ApContSECtrl_0x15a0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ContSEKeyOff__12ApContSECtrl_0x15a0c8");
#endif

    switch (ctx->pc) {
        case 0x15a0fcu: goto label_15a0fc;
        default: break;
    }

    ctx->pc = 0x15a0c8u;

    // 0x15a0c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15a0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15a0cc: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x15a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x15a0d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15a0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15a0d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15a0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a0d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15a0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15a0dc: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x15a0dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15a0e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15a0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15a0e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a0e8: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x15a0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x15a0ec: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A0ECu;
    {
        const bool branch_taken_0x15a0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x15A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A0ECu;
        // 0x15a0f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a0ec) {
            ctx->pc = 0x15A108u;
            goto label_15a108;
        }
    }
    ctx->pc = 0x15A0F4u;
    // 0x15a0f4: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x15A0F4u;
    SET_GPR_U32(ctx, 31, 0x15A0FCu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x15A0F4u, 0x15A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A0FCu;
label_15a0fc:
    // 0x15a0fc: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x15a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x15a100: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x15a100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15a104: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x15a104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_15a108:
    // 0x15a108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15a108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a10c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15a10cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15a110: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15a110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a114: 0x3e00008  jr          $ra
    ctx->pc = 0x15A114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A114u;
        // 0x15a118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A11Cu;
}
