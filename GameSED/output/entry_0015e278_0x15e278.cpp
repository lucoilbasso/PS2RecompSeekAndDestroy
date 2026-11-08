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

// Function: entry_0015e278
// Address: 0x15e278 - 0x15e2c4
void entry_0015e278_0x15e278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e278_0x15e278");
#endif

    ctx->pc = 0x15e278u;

    // 0x15e278: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x15E278u;
    {
        const bool branch_taken_0x15e278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E278u;
        // 0x15e27c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e278) {
            ctx->pc = 0x15E2D8u;
            return;
        }
    }
    ctx->pc = 0x15E280u;
    // 0x15e280: 0x8e230200  lw          $v1, 0x200($s1)
    ctx->pc = 0x15e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x15e284: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x15e284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x15e288: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15E288u;
    {
        const bool branch_taken_0x15e288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E288u;
        // 0x15e28c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e288) {
            ctx->pc = 0x15E2C4u;
            return;
        }
    }
    ctx->pc = 0x15E290u;
    // 0x15e290: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15e290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15e294: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x15e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x15e298: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x15e298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15e29c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x15e29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15e2a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15e2a4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x15e2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x15e2a8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15e2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x15e2ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15e2acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x15e2b0: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x15e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x15e2b4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x15e2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x15e2b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15e2bc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x15e2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x15e2c0: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x15e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
    ctx->pc = 0x15e2c4u;
}
