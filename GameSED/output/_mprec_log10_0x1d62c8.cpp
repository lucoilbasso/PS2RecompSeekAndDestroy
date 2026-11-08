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

// Function: _mprec_log10
// Address: 0x1d62c8 - 0x1d6338
void _mprec_log10_0x1d62c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_mprec_log10_0x1d62c8");
#endif

    switch (ctx->pc) {
        case 0x1d6308u: goto label_1d6308;
        case 0x1d6318u: goto label_1d6318;
        default: break;
    }

    ctx->pc = 0x1d62c8u;

    // 0x1d62c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d62c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d62cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d62ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d62d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d62d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62d4: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x1d62d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d62d8: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1d62d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1d62dc: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1d62dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1d62e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D62E0u;
    {
        const bool branch_taken_0x1d62e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D62E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62E0u;
        // 0x1d62e4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62e0) {
            ctx->pc = 0x1D6300u;
            goto label_1d6300;
        }
    }
    ctx->pc = 0x1D62E8u;
    // 0x1d62e8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1d62e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d62ec: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d62ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d62f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d62f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d62f4: 0xdc42c680  ld          $v0, -0x3980($v0)
    ctx->pc = 0x1d62f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294952576)));
    // 0x1d62f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D62F8u;
    {
        const bool branch_taken_0x1d62f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D62FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62F8u;
        // 0x1d62fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62f8) {
            ctx->pc = 0x1D632Cu;
            goto label_1d632c;
        }
    }
    ctx->pc = 0x1D6300u;
label_1d6300:
    // 0x1d6300: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6300u;
    {
        const bool branch_taken_0x1d6300 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1d6300) {
            ctx->pc = 0x1D6324u;
            goto label_1d6324;
        }
    }
    ctx->pc = 0x1D6308u;
label_1d6308:
    // 0x1d6308: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x1d6308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1d630c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1d630cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1d6310: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D6310u;
    SET_GPR_U32(ctx, 31, 0x1D6318u);
    ctx->pc = 0x1D6314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6310u;
    // 0x1d6314: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D6310u, 0x1D6318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6318u;
label_1d6318:
    // 0x1d6318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d6318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d631c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D631Cu;
    {
        const bool branch_taken_0x1d631c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1d631c) {
            ctx->pc = 0x1D6308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6308;
        }
    }
    ctx->pc = 0x1D6324u;
label_1d6324:
    // 0x1d6324: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d6324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d632c:
    // 0x1d632c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d632cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6330: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6330u;
        // 0x1d6334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6338u;
}
