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

// Function: entry_001b5db4
// Address: 0x1b5db4 - 0x1b5dec
void entry_001b5db4_0x1b5db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5db4_0x1b5db4");
#endif

    ctx->pc = 0x1b5db4u;

    // 0x1b5db4: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1b5db4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5db8: 0x2692b400  addiu       $s2, $s4, -0x4C00
    ctx->pc = 0x1b5db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947840));
    // 0x1b5dbc: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1B5DBCu;
    {
        const bool branch_taken_0x1b5dbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DBCu;
        // 0x1b5dc0: 0xae93b400  sw          $s3, -0x4C00($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294947840), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5dbc) {
            ctx->pc = 0x1B5EE8u;
            return;
        }
    }
    ctx->pc = 0x1B5DC4u;
    // 0x1b5dc4: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x1b5dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x1b5dc8: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1B5DC8u;
    {
        const bool branch_taken_0x1b5dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DC8u;
        // 0x1b5dcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5dc8) {
            ctx->pc = 0x1B5ED4u;
            return;
        }
    }
    ctx->pc = 0x1B5DD0u;
    // 0x1b5dd0: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1b5dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1b5dd4: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1b5dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1b5dd8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1b5dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1b5ddc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B5DDCu;
    {
        const bool branch_taken_0x1b5ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DDCu;
        // 0x1b5de0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ddc) {
            ctx->pc = 0x1B5E48u;
            return;
        }
    }
    ctx->pc = 0x1B5DE4u;
    // 0x1b5de4: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1b5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1b5de8: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1b5de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b5decu;
}
