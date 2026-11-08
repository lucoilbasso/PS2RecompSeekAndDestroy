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

// Function: entry_0012e4f0
// Address: 0x12e4f0 - 0x12e570
void entry_0012e4f0_0x12e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e4f0_0x12e4f0");
#endif

    switch (ctx->pc) {
        case 0x12e504u: goto label_12e504;
        case 0x12e51cu: goto label_12e51c;
        case 0x12e530u: goto label_12e530;
        default: break;
    }

    ctx->pc = 0x12e4f0u;

label_12e4f0:
    // 0x12e4f0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x12e4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12e4f4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x12e4f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x12e4f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4fc: 0xc041682  jal         func_105A08
    ctx->pc = 0x12E4FCu;
    SET_GPR_U32(ctx, 31, 0x12E504u);
    ctx->pc = 0x12E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E4FCu;
    // 0x12e500: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x12E4FCu, 0x12E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E504u;
label_12e504:
    // 0x12e504: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e508: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x12e508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x12e50c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12e50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e510: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x12e510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e514: 0xc041682  jal         func_105A08
    ctx->pc = 0x12E514u;
    SET_GPR_U32(ctx, 31, 0x12E51Cu);
    ctx->pc = 0x12E518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E514u;
    // 0x12e518: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x12E514u, 0x12E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E51Cu;
label_12e51c:
    // 0x12e51c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e520: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x12e520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12e524: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12e524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e528: 0xc041682  jal         func_105A08
    ctx->pc = 0x12E528u;
    SET_GPR_U32(ctx, 31, 0x12E530u);
    ctx->pc = 0x12E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E528u;
    // 0x12e52c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x12E528u, 0x12E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E530u;
label_12e530:
    // 0x12e530: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x12e530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x12e534: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12e534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x12e538: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x12e538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x12e53c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12e53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12e540: 0x6a1ffeb  bgez        $s5, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12E540u;
    {
        const bool branch_taken_0x12e540 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x12E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E540u;
        // 0x12e544: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e540) {
            ctx->pc = 0x12E4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e4f0;
        }
    }
    ctx->pc = 0x12E548u;
    // 0x12e548: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12e548u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x12e54c: 0x2ae20002  slti        $v0, $s7, 0x2
    ctx->pc = 0x12e54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12e550: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x12E550u;
    {
        const bool branch_taken_0x12e550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E550u;
        // 0x12e554: 0x26d60007  addiu       $s6, $s6, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e550) {
            ctx->pc = 0x12E4D8u;
            return;
        }
    }
    ctx->pc = 0x12E558u;
    // 0x12e558: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x12e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x12e55c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12e55cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e560: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x12e560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x12e564: 0x8c64009c  lw          $a0, 0x9C($v1)
    ctx->pc = 0x12e564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x12e568: 0x8c94001c  lw          $s4, 0x1C($a0)
    ctx->pc = 0x12e568u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x12e56c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12e56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12e570u;
}
