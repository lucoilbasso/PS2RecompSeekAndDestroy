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

// Function: entry_001d25c4
// Address: 0x1d25c4 - 0x1d2638
void entry_001d25c4_0x1d25c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d25c4_0x1d25c4");
#endif

    switch (ctx->pc) {
        case 0x1d25d4u: goto label_1d25d4;
        case 0x1d2624u: goto label_1d2624;
        default: break;
    }

    ctx->pc = 0x1d25c4u;

    // 0x1d25c4: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x1d25c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1d25c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d25c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d25cc: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D25CCu;
    SET_GPR_U32(ctx, 31, 0x1D25D4u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D25CCu, 0x1D25D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D25D4u;
label_1d25d4:
    // 0x1d25d4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D25D4u;
    {
        const bool branch_taken_0x1d25d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25D4u;
        // 0x1d25d8: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25d4) {
            ctx->pc = 0x1D2638u;
            return;
        }
    }
    ctx->pc = 0x1D25DCu;
    // 0x1d25dc: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x1d25dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x1d25e0: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1d25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d25e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d25e8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1d25e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1d25ec: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d25ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d25f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d25f4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d25f8: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1d25f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d25fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2600: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2604: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x1d2604u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2608: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d2608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d260c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1d260cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1d2610: 0x14a00051  bnez        $a1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1D2610u;
    {
        const bool branch_taken_0x1d2610 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2610u;
        // 0x1d2614: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2610) {
            ctx->pc = 0x1D2758u;
            return;
        }
    }
    ctx->pc = 0x1D2618u;
    // 0x1d2618: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d261c: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D261Cu;
    SET_GPR_U32(ctx, 31, 0x1D2624u);
    ctx->pc = 0x1D2620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D261Cu;
    // 0x1d2620: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D261Cu, 0x1D2624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2624u;
label_1d2624:
    // 0x1d2624: 0x144000b3  bnez        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1D2624u;
    {
        const bool branch_taken_0x1d2624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2624u;
        // 0x1d2628: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2624) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D262Cu;
    // 0x1d262c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1d262cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2630: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1D2630u;
    {
        const bool branch_taken_0x1d2630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2630u;
        // 0x1d2634: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2630) {
            ctx->pc = 0x1D2758u;
            return;
        }
    }
    ctx->pc = 0x1D2638u;
}
