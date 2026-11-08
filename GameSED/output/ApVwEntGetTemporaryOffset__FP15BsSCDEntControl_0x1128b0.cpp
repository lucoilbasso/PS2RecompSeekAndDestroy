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

// Function: ApVwEntGetTemporaryOffset__FP15BsSCDEntControl
// Address: 0x1128b0 - 0x112904
void ApVwEntGetTemporaryOffset__FP15BsSCDEntControl_0x1128b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApVwEntGetTemporaryOffset__FP15BsSCDEntControl_0x1128b0");
#endif

    switch (ctx->pc) {
        case 0x1128e4u: goto label_1128e4;
        default: break;
    }

    ctx->pc = 0x1128b0u;

    // 0x1128b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1128b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1128b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1128b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1128b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1128b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1128bc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1128bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1128c0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1128c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1128c4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1128C4u;
    {
        const bool branch_taken_0x1128c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1128C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128C4u;
        // 0x1128c8: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128c4) {
            ctx->pc = 0x1128F0u;
            goto label_1128f0;
        }
    }
    ctx->pc = 0x1128CCu;
    // 0x1128cc: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x1128ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x1128d0: 0x2610f6f0  addiu       $s0, $s0, -0x910
    ctx->pc = 0x1128d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964976));
    // 0x1128d4: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1128d4u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[0])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x25F6F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x25F6F0u, _value); } while (0);
    // 0x1128d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1128d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128dc: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x1128DCu;
    SET_GPR_U32(ctx, 31, 0x1128E4u);
    ctx->pc = 0x1128E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128DCu;
    // 0x1128e0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x1128DCu, 0x1128E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128E4u;
label_1128e4:
    // 0x1128e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1128E4u;
    {
        const bool branch_taken_0x1128e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1128E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128E4u;
        // 0x1128e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128e4) {
            ctx->pc = 0x1128F4u;
            goto label_1128f4;
        }
    }
    ctx->pc = 0x1128ECu;
    // 0x1128ec: 0x0  nop
    ctx->pc = 0x1128ecu;
    // NOP
label_1128f0:
    // 0x1128f0: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x1128f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
label_1128f4:
    // 0x1128f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1128f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1128f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1128f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1128fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1128FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128FCu;
        // 0x112900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1128FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112904u;
}
