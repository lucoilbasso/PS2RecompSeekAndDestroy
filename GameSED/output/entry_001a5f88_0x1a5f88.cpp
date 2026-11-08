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

// Function: entry_001a5f88
// Address: 0x1a5f88 - 0x1a5fb8
void entry_001a5f88_0x1a5f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5f88_0x1a5f88");
#endif

    ctx->pc = 0x1a5f88u;

    // 0x1a5f88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5F88u;
    {
        const bool branch_taken_0x1a5f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F88u;
        // 0x1a5f8c: 0x28a20400  slti        $v0, $a1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f88) {
            ctx->pc = 0x1A5FB8u;
            return;
        }
    }
    ctx->pc = 0x1A5F90u;
    // 0x1a5f90: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1a5f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a5f94: 0x24a5fe00  addiu       $a1, $a1, -0x200
    ctx->pc = 0x1a5f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x1a5f98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5f9c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a5f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5fa0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A5FA0u;
    {
        const bool branch_taken_0x1a5fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FA0u;
        // 0x1a5fa4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fa0) {
            ctx->pc = 0x1A5FF4u;
            return;
        }
    }
    ctx->pc = 0x1A5FA8u;
    // 0x1a5fa8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a5fac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a5facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5fb0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A5FB0u;
    {
        const bool branch_taken_0x1a5fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FB0u;
        // 0x1a5fb4: 0x24430004  addiu       $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fb0) {
            ctx->pc = 0x1A5FF4u;
            return;
        }
    }
    ctx->pc = 0x1A5FB8u;
}
