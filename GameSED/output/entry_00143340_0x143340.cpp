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

// Function: entry_00143340
// Address: 0x143340 - 0x143380
void entry_00143340_0x143340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143340_0x143340");
#endif

    switch (ctx->pc) {
        case 0x143368u: goto label_143368;
        default: break;
    }

    ctx->pc = 0x143340u;

    // 0x143340: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143344: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x143344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x143348: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x143348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14334c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x14334cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x143350: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x143350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x143354: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x143354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143358: 0x10c70017  beq         $a2, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x143358u;
    {
        const bool branch_taken_0x143358 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x14335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143358u;
        // 0x14335c: 0x8cb20048  lw          $s2, 0x48($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143358) {
            ctx->pc = 0x1433B8u;
            return;
        }
    }
    ctx->pc = 0x143360u;
    // 0x143360: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x143360u;
    SET_GPR_U32(ctx, 31, 0x143368u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x143360u, 0x143368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143368u;
label_143368:
    // 0x143368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x143368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14336c: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x14336Cu;
    {
        const bool branch_taken_0x14336c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x143370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14336Cu;
        // 0x143370: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14336c) {
            ctx->pc = 0x143408u;
            return;
        }
    }
    ctx->pc = 0x143374u;
    // 0x143374: 0x26500024  addiu       $s0, $s2, 0x24
    ctx->pc = 0x143374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x143378: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x143378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14337c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14337cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x143380u;
}
