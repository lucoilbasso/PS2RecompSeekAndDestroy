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

// Function: entry_001d134c
// Address: 0x1d134c - 0x1d1380
void entry_001d134c_0x1d134c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d134c_0x1d134c");
#endif

    switch (ctx->pc) {
        case 0x1d1374u: goto label_1d1374;
        default: break;
    }

    ctx->pc = 0x1d134cu;

    // 0x1d134c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d1350: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1350u;
    {
        const bool branch_taken_0x1d1350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1350u;
        // 0x1d1354: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1350) {
            ctx->pc = 0x1D1380u;
            return;
        }
    }
    ctx->pc = 0x1D1358u;
    // 0x1d1358: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x1d1358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d135c: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x1d135cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x1d1360: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1360u;
    {
        const bool branch_taken_0x1d1360 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1360u;
        // 0x1d1364: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1360) {
            ctx->pc = 0x1D1380u;
            return;
        }
    }
    ctx->pc = 0x1D1368u;
    // 0x1d1368: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1d1368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d136c: 0xc074466  jal         func_1D1198
    ctx->pc = 0x1D136Cu;
    SET_GPR_U32(ctx, 31, 0x1D1374u);
    ctx->pc = 0x1D1370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D136Cu;
    // 0x1d1370: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1198u, 0x1D136Cu, 0x1D1374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1374u;
label_1d1374:
    // 0x1d1374: 0x10000565  b           . + 4 + (0x565 << 2)
    ctx->pc = 0x1D1374u;
    {
        const bool branch_taken_0x1d1374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1374u;
        // 0x1d1378: 0xdfb00240  ld          $s0, 0x240($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1374) {
            ctx->pc = 0x1D290Cu;
            return;
        }
    }
    ctx->pc = 0x1D137Cu;
    // 0x1d137c: 0x0  nop
    ctx->pc = 0x1d137cu;
    // NOP
    ctx->pc = 0x1d1380u;
}
