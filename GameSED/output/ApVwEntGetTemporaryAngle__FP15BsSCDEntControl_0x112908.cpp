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

// Function: ApVwEntGetTemporaryAngle__FP15BsSCDEntControl
// Address: 0x112908 - 0x112960
void ApVwEntGetTemporaryAngle__FP15BsSCDEntControl_0x112908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApVwEntGetTemporaryAngle__FP15BsSCDEntControl_0x112908");
#endif

    switch (ctx->pc) {
        case 0x11294cu: goto label_11294c;
        default: break;
    }

    ctx->pc = 0x112908u;

    // 0x112908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11290c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11290cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112910: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x112910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x112914: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x112914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x112918: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x112918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11291c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11291Cu;
    {
        const bool branch_taken_0x11291c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11291Cu;
        // 0x112920: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11291c) {
            ctx->pc = 0x112938u;
            goto label_112938;
        }
    }
    ctx->pc = 0x112924u;
    // 0x112924: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x112924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x112928: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x112928u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x11292c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11292Cu;
    {
        const bool branch_taken_0x11292c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11292Cu;
        // 0x112930: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11292c) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x112934u;
    // 0x112934: 0x0  nop
    ctx->pc = 0x112934u;
    // NOP
label_112938:
    // 0x112938: 0x2610f700  addiu       $s0, $s0, -0x900
    ctx->pc = 0x112938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964992));
    // 0x11293c: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x11293cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x112940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x112940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112944: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x112944u;
    SET_GPR_U32(ctx, 31, 0x11294Cu);
    ctx->pc = 0x112948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112944u;
    // 0x112948: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x112944u, 0x11294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11294Cu;
label_11294c:
    // 0x11294c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11294cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_112950:
    // 0x112950: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112954: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x112954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112958: 0x3e00008  jr          $ra
    ctx->pc = 0x112958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112958u;
        // 0x11295c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112960u;
}
