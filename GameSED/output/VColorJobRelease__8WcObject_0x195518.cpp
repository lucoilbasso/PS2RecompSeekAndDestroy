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

// Function: VColorJobRelease__8WcObject
// Address: 0x195518 - 0x195564
void VColorJobRelease__8WcObject_0x195518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VColorJobRelease__8WcObject_0x195518");
#endif

    switch (ctx->pc) {
        case 0x195544u: goto label_195544;
        default: break;
    }

    ctx->pc = 0x195518u;

    // 0x195518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19551c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x195520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195524: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x195524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x195528: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19552c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x19552cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x195530: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x195530u;
    {
        const bool branch_taken_0x195530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195530u;
        // 0x195534: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195530) {
            ctx->pc = 0x195554u;
            goto label_195554;
        }
    }
    ctx->pc = 0x195538u;
    // 0x195538: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x195538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x19553c: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x19553Cu;
    SET_GPR_U32(ctx, 31, 0x195544u);
    ctx->pc = 0x195540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19553Cu;
    // 0x195540: 0x2484de68  addiu       $a0, $a0, -0x2198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x19553Cu, 0x195544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195544u;
label_195544:
    // 0x195544: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x195544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x195548: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19554c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x195550: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x195550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_195554:
    // 0x195554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195558: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x195558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19555c: 0x3e00008  jr          $ra
    ctx->pc = 0x19555Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19555Cu;
        // 0x195560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19555Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195564u;
}
