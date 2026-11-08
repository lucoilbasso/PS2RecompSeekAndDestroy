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

// Function: Cmd_GET_MY_TANK_Entry__FP15BsSCDEntControl
// Address: 0x119810 - 0x119860
void Cmd_GET_MY_TANK_Entry__FP15BsSCDEntControl_0x119810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_MY_TANK_Entry__FP15BsSCDEntControl_0x119810");
#endif

    switch (ctx->pc) {
        case 0x119834u: goto label_119834;
        default: break;
    }

    ctx->pc = 0x119810u;

    // 0x119810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x119810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x119814: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x119814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x119818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11981c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x11981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x119820: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119824: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119824u;
    {
        const bool branch_taken_0x119824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x119828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119824u;
        // 0x119828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119824) {
            ctx->pc = 0x119838u;
            goto label_119838;
        }
    }
    ctx->pc = 0x11982Cu;
    // 0x11982c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11982Cu;
    SET_GPR_U32(ctx, 31, 0x119834u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11982Cu, 0x119834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119834u;
label_119834:
    // 0x119834: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x119834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119838:
    // 0x119838: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x119838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x11983c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11983cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119840: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x119840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x119844: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x119844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x119848: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11984c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11984cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119850: 0x8c63d528  lw          $v1, -0x2AD8($v1)
    ctx->pc = 0x119850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956328)));
    // 0x119854: 0xac8300b0  sw          $v1, 0xB0($a0)
    ctx->pc = 0x119854u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    // 0x119858: 0x3e00008  jr          $ra
    ctx->pc = 0x119858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119858u;
        // 0x11985c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119860u;
}
