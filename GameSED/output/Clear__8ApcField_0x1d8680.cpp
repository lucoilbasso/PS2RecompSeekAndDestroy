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

// Function: Clear__8ApcField
// Address: 0x1d8680 - 0x1d86d8
void Clear__8ApcField_0x1d8680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__8ApcField_0x1d8680");
#endif

    switch (ctx->pc) {
        case 0x1d86b0u: goto label_1d86b0;
        default: break;
    }

    ctx->pc = 0x1d8680u;

    // 0x1d8680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8684: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1d8684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1d8688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d868c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d868cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8690: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8694: 0x26040208  addiu       $a0, $s0, 0x208
    ctx->pc = 0x1d8694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
    // 0x1d8698: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x1d8698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x1d869c: 0xae0001e8  sw          $zero, 0x1E8($s0)
    ctx->pc = 0x1d869cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 0));
    // 0x1d86a0: 0xae0001fc  sw          $zero, 0x1FC($s0)
    ctx->pc = 0x1d86a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 0));
    // 0x1d86a4: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x1d86a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x1d86a8: 0xc06727a  jal         func_19C9E8
    ctx->pc = 0x1D86A8u;
    SET_GPR_U32(ctx, 31, 0x1D86B0u);
    ctx->pc = 0x1D86ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D86A8u;
    // 0x1d86ac: 0xae000204  sw          $zero, 0x204($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9E8u, 0x1D86A8u, 0x1D86B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D86B0u;
label_1d86b0:
    // 0x1d86b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d86b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1d86b4: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1d86b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1d86b8: 0xac200208  sw          $zero, 0x208($at)
    ctx->pc = 0x1d86b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 520), GPR_U32(ctx, 0));
    // 0x1d86bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d86bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1d86c0: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1d86c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1d86c4: 0xac20020c  sw          $zero, 0x20C($at)
    ctx->pc = 0x1d86c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 524), GPR_U32(ctx, 0));
    // 0x1d86c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d86c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d86cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d86ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d86d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D86D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86D0u;
        // 0x1d86d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D86D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D86D8u;
}
