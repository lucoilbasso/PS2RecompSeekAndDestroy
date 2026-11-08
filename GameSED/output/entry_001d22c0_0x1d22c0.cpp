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

// Function: entry_001d22c0
// Address: 0x1d22c0 - 0x1d231c
void entry_001d22c0_0x1d22c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d22c0_0x1d22c0");
#endif

    switch (ctx->pc) {
        case 0x1d2308u: goto label_1d2308;
        default: break;
    }

    ctx->pc = 0x1d22c0u;

    // 0x1d22c0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d22c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d22c4: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1D22C4u;
    {
        const bool branch_taken_0x1d22c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22C4u;
        // 0x1d22c8: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22c4) {
            ctx->pc = 0x1D2438u;
            return;
        }
    }
    ctx->pc = 0x1D22CCu;
    // 0x1d22cc: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1d22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d22d0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1d22d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1d22d4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d22d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d22d8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d22d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d22dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d22dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d22e0: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x1d22e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d22e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d22e8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d22e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d22ec: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1d22ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1d22f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d22f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d22f4: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D22F4u;
    {
        const bool branch_taken_0x1d22f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22F4u;
        // 0x1d22f8: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22f4) {
            ctx->pc = 0x1D231Cu;
            return;
        }
    }
    ctx->pc = 0x1D22FCu;
    // 0x1d22fc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d22fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2300: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2300u;
    SET_GPR_U32(ctx, 31, 0x1D2308u);
    ctx->pc = 0x1D2304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2300u;
    // 0x1d2304: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2300u, 0x1D2308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2308u;
label_1d2308:
    // 0x1d2308: 0x1440017a  bnez        $v0, . + 4 + (0x17A << 2)
    ctx->pc = 0x1D2308u;
    {
        const bool branch_taken_0x1d2308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2308u;
        // 0x1d230c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2308) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D2310u;
    // 0x1d2310: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d2310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2314: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x1d2314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d2318: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d2318u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d231cu;
}
