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

// Function: caseD_6
// Address: 0x134ab0 - 0x134ae0
void caseD_6_0x134ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x134ab0");
#endif

    switch (ctx->pc) {
        case 0x134adcu: goto label_134adc;
        default: break;
    }

    ctx->pc = 0x134ab0u;

    // 0x134ab0: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x134ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x134ab4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x134ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x134ab8: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x134ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x134abc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x134abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x134ac0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x134ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134ac4: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x134AC4u;
    {
        const bool branch_taken_0x134ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x134AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AC4u;
        // 0x134ac8: 0x8c650044  lw          $a1, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ac4) {
            ctx->pc = 0x134AE0u;
            return;
        }
    }
    ctx->pc = 0x134ACCu;
    // 0x134acc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x134accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ad4: 0xc04110c  jal         func_104430
    ctx->pc = 0x134AD4u;
    SET_GPR_U32(ctx, 31, 0x134ADCu);
    ctx->pc = 0x134AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AD4u;
    // 0x134ad8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x134AD4u, 0x134ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134ADCu;
label_134adc:
    // 0x134adc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x134adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x134ae0u;
}
