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

// Function: entry_001b5fbc
// Address: 0x1b5fbc - 0x1b5ff4
void entry_001b5fbc_0x1b5fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5fbc_0x1b5fbc");
#endif

    ctx->pc = 0x1b5fbcu;

    // 0x1b5fbc: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1b5fbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fc0: 0x2692b400  addiu       $s2, $s4, -0x4C00
    ctx->pc = 0x1b5fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947840));
    // 0x1b5fc4: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1B5FC4u;
    {
        const bool branch_taken_0x1b5fc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FC4u;
        // 0x1b5fc8: 0xae93b400  sw          $s3, -0x4C00($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294947840), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fc4) {
            ctx->pc = 0x1B60F0u;
            return;
        }
    }
    ctx->pc = 0x1B5FCCu;
    // 0x1b5fcc: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x1b5fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x1b5fd0: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1B5FD0u;
    {
        const bool branch_taken_0x1b5fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FD0u;
        // 0x1b5fd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fd0) {
            ctx->pc = 0x1B60DCu;
            return;
        }
    }
    ctx->pc = 0x1B5FD8u;
    // 0x1b5fd8: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1b5fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1b5fdc: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1b5fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1b5fe0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1b5fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1b5fe4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B5FE4u;
    {
        const bool branch_taken_0x1b5fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FE4u;
        // 0x1b5fe8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fe4) {
            ctx->pc = 0x1B6050u;
            return;
        }
    }
    ctx->pc = 0x1B5FECu;
    // 0x1b5fec: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1b5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1b5ff0: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1b5ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b5ff4u;
}
