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

// Function: __tf9ApcPtcSpl
// Address: 0x1d80e8 - 0x1d8138
void ps2___tf9ApcPtcSpl_0x1d80e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9ApcPtcSpl_0x1d80e8");
#endif

    switch (ctx->pc) {
        case 0x1d810cu: goto label_1d810c;
        case 0x1d8124u: goto label_1d8124;
        default: break;
    }

    ctx->pc = 0x1d80e8u;

    // 0x1d80e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d80e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d80ec: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d80f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d80f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d80f4: 0x24500ac0  addiu       $s0, $v0, 0xAC0
    ctx->pc = 0x1d80f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2752));
    // 0x1d80f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d80f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410AC0u));
    // 0x1d80fc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D80FCu;
    {
        const bool branch_taken_0x1d80fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80FCu;
        // 0x1d8100: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80fc) {
            ctx->pc = 0x1D8124u;
            goto label_1d8124;
        }
    }
    ctx->pc = 0x1D8104u;
    // 0x1d8104: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1D8104u;
    SET_GPR_U32(ctx, 31, 0x1D810Cu);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1D8104u, 0x1D810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D810Cu;
label_1d810c:
    // 0x1d810c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d810cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d8110: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1d8110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1d8114: 0x24a55d60  addiu       $a1, $a1, 0x5D60
    ctx->pc = 0x1d8114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23904));
    // 0x1d8118: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1d8118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1d811c: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D811Cu;
    SET_GPR_U32(ctx, 31, 0x1D8124u);
    ctx->pc = 0x1D8120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D811Cu;
    // 0x1d8120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D811Cu, 0x1D8124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8124u;
label_1d8124:
    // 0x1d8124: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d8124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d812c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d812cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8130: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8130u;
        // 0x1d8134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8138u;
}
