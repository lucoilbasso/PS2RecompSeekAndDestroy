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

// Function: ApVwEntGetTemporaryScale__FP15BsSCDEntControl
// Address: 0x112960 - 0x1129b0
void ApVwEntGetTemporaryScale__FP15BsSCDEntControl_0x112960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApVwEntGetTemporaryScale__FP15BsSCDEntControl_0x112960");
#endif

    switch (ctx->pc) {
        case 0x11299cu: goto label_11299c;
        default: break;
    }

    ctx->pc = 0x112960u;

    // 0x112960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x112968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11296c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x11296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x112970: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x112970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x112974: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x112974u;
    {
        const bool branch_taken_0x112974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112974u;
        // 0x112978: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112974) {
            ctx->pc = 0x112990u;
            goto label_112990;
        }
    }
    ctx->pc = 0x11297Cu;
    // 0x11297c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x11297cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x112980: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x112980u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112984: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x112984u;
    {
        const bool branch_taken_0x112984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112984u;
        // 0x112988: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112984) {
            ctx->pc = 0x1129A0u;
            goto label_1129a0;
        }
    }
    ctx->pc = 0x11298Cu;
    // 0x11298c: 0x0  nop
    ctx->pc = 0x11298cu;
    // NOP
label_112990:
    // 0x112990: 0x2610f710  addiu       $s0, $s0, -0x8F0
    ctx->pc = 0x112990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965008));
    // 0x112994: 0xc0416dc  jal         func_105B70
    ctx->pc = 0x112994u;
    SET_GPR_U32(ctx, 31, 0x11299Cu);
    ctx->pc = 0x112998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112994u;
    // 0x112998: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B70u, 0x112994u, 0x11299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11299Cu;
label_11299c:
    // 0x11299c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11299cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1129a0:
    // 0x1129a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1129a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1129a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1129a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1129a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1129A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1129ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129A8u;
        // 0x1129ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1129A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1129B0u;
}
