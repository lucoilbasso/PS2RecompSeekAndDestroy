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

// Function: entry_001ce180
// Address: 0x1ce180 - 0x1ce1b0
void entry_001ce180_0x1ce180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce180_0x1ce180");
#endif

    switch (ctx->pc) {
        case 0x1ce198u: goto label_1ce198;
        default: break;
    }

    ctx->pc = 0x1ce180u;

    // 0x1ce180: 0x2a22007a  slti        $v0, $s1, 0x7A
    ctx->pc = 0x1ce180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)122) ? 1 : 0);
    // 0x1ce184: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CE184u;
    {
        const bool branch_taken_0x1ce184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE184u;
        // 0x1ce188: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce184) {
            ctx->pc = 0x1CE158u;
            return;
        }
    }
    ctx->pc = 0x1CE18Cu;
    // 0x1ce18c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ce18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce190: 0xc073730  jal         func_1CDCC0
    ctx->pc = 0x1CE190u;
    SET_GPR_U32(ctx, 31, 0x1CE198u);
    ctx->pc = 0x1CE194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE190u;
    // 0x1ce194: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDCC0u, 0x1CE190u, 0x1CE198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE198u;
label_1ce198:
    // 0x1ce198: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1ce198u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce19c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ce19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ce1a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1ce1a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ce1a4: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1ce1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ce1a8: 0x1615ffe1  bne         $s0, $s5, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1CE1A8u;
    {
        const bool branch_taken_0x1ce1a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x1CE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1A8u;
        // 0x1ce1ac: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1a8) {
            ctx->pc = 0x1CE130u;
            return;
        }
    }
    ctx->pc = 0x1CE1B0u;
}
