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

// Function: entry_001d60f4
// Address: 0x1d60f4 - 0x1d6140
void entry_001d60f4_0x1d60f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d60f4_0x1d60f4");
#endif

    switch (ctx->pc) {
        case 0x1d610cu: goto label_1d610c;
        default: break;
    }

    ctx->pc = 0x1d60f4u;

    // 0x1d60f4: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x1d60f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1d60f8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d60f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d60fc: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D60FCu;
    {
        const bool branch_taken_0x1d60fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60FCu;
        // 0x1d6100: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60fc) {
            ctx->pc = 0x1D6168u;
            return;
        }
    }
    ctx->pc = 0x1D6104u;
    // 0x1d6104: 0xc0755ac  jal         func_1D56B0
    ctx->pc = 0x1D6104u;
    SET_GPR_U32(ctx, 31, 0x1D610Cu);
    ctx->pc = 0x1D6108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6104u;
    // 0x1d6108: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D56B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D56B0u, 0x1D6104u, 0x1D610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D610Cu;
label_1d610c:
    // 0x1d610c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d610cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6110: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D6110u;
    {
        const bool branch_taken_0x1d6110 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6110u;
        // 0x1d6114: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6110) {
            ctx->pc = 0x1D6140u;
            return;
        }
    }
    ctx->pc = 0x1D6118u;
    // 0x1d6118: 0x52023  negu        $a0, $a1
    ctx->pc = 0x1d6118u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1d611c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d611cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6120: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x1d6120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1d6124: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d6124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d6128: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d6128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1d612c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1d612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d6130: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x1d6130u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1d6134: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6134u;
    {
        const bool branch_taken_0x1d6134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6134u;
        // 0x1d6138: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6134) {
            ctx->pc = 0x1D6148u;
            return;
        }
    }
    ctx->pc = 0x1D613Cu;
    // 0x1d613c: 0x0  nop
    ctx->pc = 0x1d613cu;
    // NOP
    ctx->pc = 0x1d6140u;
}
