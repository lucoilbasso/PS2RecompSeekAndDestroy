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

// Function: caseD_64
// Address: 0x19b268 - 0x19b2a0
void caseD_64_0x19b268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_64_0x19b268");
#endif

    switch (ctx->pc) {
        case 0x19b294u: goto label_19b294;
        default: break;
    }

    ctx->pc = 0x19b268u;

    // 0x19b268: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x19b268u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19b26c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b26cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b270: 0x38e70075  xori        $a3, $a3, 0x75
    ctx->pc = 0x19b270u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)117);
    // 0x19b274: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19b274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b278: 0x84027  nor         $t0, $zero, $t0
    ctx->pc = 0x19b278u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
    // 0x19b27c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x19b27cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b284: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x19b284u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x19b288: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x19b288u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x19b28c: 0xc066b00  jal         func_19AC00
    ctx->pc = 0x19B28Cu;
    SET_GPR_U32(ctx, 31, 0x19B294u);
    ctx->pc = 0x19B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B28Cu;
    // 0x19b290: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19AC00u, 0x19B28Cu, 0x19B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B294u;
label_19b294:
    // 0x19b294: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x19B294u;
    {
        const bool branch_taken_0x19b294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B294u;
        // 0x19b298: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b294) {
            ctx->pc = 0x19B448u;
            return;
        }
    }
    ctx->pc = 0x19B29Cu;
    // 0x19b29c: 0x0  nop
    ctx->pc = 0x19b29cu;
    // NOP
    ctx->pc = 0x19b2a0u;
}
