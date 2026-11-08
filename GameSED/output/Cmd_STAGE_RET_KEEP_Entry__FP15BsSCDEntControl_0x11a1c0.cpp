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

// Function: Cmd_STAGE_RET_KEEP_Entry__FP15BsSCDEntControl
// Address: 0x11a1c0 - 0x11a218
void Cmd_STAGE_RET_KEEP_Entry__FP15BsSCDEntControl_0x11a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_STAGE_RET_KEEP_Entry__FP15BsSCDEntControl_0x11a1c0");
#endif

    switch (ctx->pc) {
        case 0x11a1f8u: goto label_11a1f8;
        case 0x11a200u: goto label_11a200;
        default: break;
    }

    ctx->pc = 0x11a1c0u;

    // 0x11a1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a1c4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x11a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11a1c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a1cc: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x11a1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x11a1d0: 0x2610c540  addiu       $s0, $s0, -0x3AC0
    ctx->pc = 0x11a1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952256));
    // 0x11a1d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11a1d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a1dc: 0x260324b0  addiu       $v1, $s0, 0x24B0
    ctx->pc = 0x11a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9392));
    // 0x11a1e0: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x11a1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x11a1e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1e8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x11a1e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11a1ec: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x11a1ecu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1EE9F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1EE9F0u, _value); } while (0);
    // 0x11a1f0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11A1F0u;
    SET_GPR_U32(ctx, 31, 0x11A1F8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11A1F0u, 0x11A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1F8u;
label_11a1f8:
    // 0x11a1f8: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x11A1F8u;
    SET_GPR_U32(ctx, 31, 0x11A200u);
    ctx->pc = 0x11A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1F8u;
    // 0x11a1fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x11A1F8u, 0x11A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A200u;
label_11a200:
    // 0x11a200: 0xae0224c0  sw          $v0, 0x24C0($s0)
    ctx->pc = 0x11a200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9408), GPR_U32(ctx, 2));
    // 0x11a204: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11a204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a20c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a210: 0x3e00008  jr          $ra
    ctx->pc = 0x11A210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A210u;
        // 0x11a214: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A218u;
}
