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

// Function: entry_0016f7b8
// Address: 0x16f7b8 - 0x16f804
void entry_0016f7b8_0x16f7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f7b8_0x16f7b8");
#endif

    switch (ctx->pc) {
        case 0x16f7e8u: goto label_16f7e8;
        default: break;
    }

    ctx->pc = 0x16f7b8u;

label_16f7b8:
    // 0x16f7b8: 0x26843600  addiu       $a0, $s4, 0x3600
    ctx->pc = 0x16f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 13824));
    // 0x16f7bc: 0x260300ff  addiu       $v1, $s0, 0xFF
    ctx->pc = 0x16f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 255));
    // 0x16f7c0: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x16f7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16f7c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f7c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x16f7c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x16f7cc: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x16f7ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x16f7d0: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x16f7d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x16f7d4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x16f7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x16f7d8: 0x2052823  subu        $a1, $s0, $a1
    ctx->pc = 0x16f7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x16f7dc: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x16f7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x16f7e0: 0xc0671f6  jal         func_19C7D8
    ctx->pc = 0x16F7E0u;
    SET_GPR_U32(ctx, 31, 0x16F7E8u);
    ctx->pc = 0x16F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7E0u;
    // 0x16f7e4: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7D8u, 0x16F7E0u, 0x16F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F7E8u;
label_16f7e8:
    // 0x16f7e8: 0x2a420014  slti        $v0, $s2, 0x14
    ctx->pc = 0x16f7e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x16f7ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F7ECu;
    {
        const bool branch_taken_0x16f7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7ECu;
        // 0x16f7f0: 0x230182a  slt         $v1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7ec) {
            ctx->pc = 0x16F804u;
            return;
        }
    }
    ctx->pc = 0x16F7F4u;
    // 0x16f7f4: 0x1a000003  blez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F7F4u;
    {
        const bool branch_taken_0x16f7f4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x16f7f4) {
            ctx->pc = 0x16F804u;
            return;
        }
    }
    ctx->pc = 0x16F7FCu;
    // 0x16f7fc: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x16F7FCu;
    {
        const bool branch_taken_0x16f7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f7fc) {
            ctx->pc = 0x16F800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F7FCu;
            // 0x16f800: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f7b8;
        }
    }
    ctx->pc = 0x16F804u;
}
