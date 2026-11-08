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

// Function: entry_0014b520
// Address: 0x14b520 - 0x14b560
void entry_0014b520_0x14b520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b520_0x14b520");
#endif

    ctx->pc = 0x14b520u;

    // 0x14b520: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14b520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14b524: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14b524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14b528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14b52c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14b52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14b530: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14b530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14b534: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14b534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x14b538: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x14b538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x14b53c: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x14b53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x14b540: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b544: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14b544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14b548: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B548u;
    {
        const bool branch_taken_0x14b548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x14B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B548u;
        // 0x14b54c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b548) {
            ctx->pc = 0x14B560u;
            return;
        }
    }
    ctx->pc = 0x14B550u;
    // 0x14b550: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b554: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x14b554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x14b558: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B558u;
    SET_GPR_U32(ctx, 31, 0x14B560u);
    ctx->pc = 0x14B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B558u;
    // 0x14b55c: 0x24a56bf0  addiu       $a1, $a1, 0x6BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B558u, 0x14B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B560u;
}
