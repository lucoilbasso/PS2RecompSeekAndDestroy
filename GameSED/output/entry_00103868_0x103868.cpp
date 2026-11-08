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

// Function: entry_00103868
// Address: 0x103868 - 0x1038b4
void entry_00103868_0x103868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103868_0x103868");
#endif

    switch (ctx->pc) {
        case 0x1038acu: goto label_1038ac;
        default: break;
    }

    ctx->pc = 0x103868u;

    // 0x103868: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x103868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10386c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10386cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103870: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103874: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x103874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103878: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x103878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10387c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10387cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x103880: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x103880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x103884: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x103884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x103888: 0x8e540024  lw          $s4, 0x24($s2)
    ctx->pc = 0x103888u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10388c: 0x8e910044  lw          $s1, 0x44($s4)
    ctx->pc = 0x10388cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x103890: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x103890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x103894: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x103894u;
    {
        const bool branch_taken_0x103894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103894u;
        // 0x103898: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103894) {
            ctx->pc = 0x1038B4u;
            return;
        }
    }
    ctx->pc = 0x10389Cu;
    // 0x10389c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x10389cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1038a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1038a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1038a4: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1038A4u;
    SET_GPR_U32(ctx, 31, 0x1038ACu);
    ctx->pc = 0x1038A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038A4u;
    // 0x1038a8: 0x248405e8  addiu       $a0, $a0, 0x5E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1038A4u, 0x1038ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038ACu;
label_1038ac:
    // 0x1038ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1038acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1038b0: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x1038b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x1038b4u;
}
