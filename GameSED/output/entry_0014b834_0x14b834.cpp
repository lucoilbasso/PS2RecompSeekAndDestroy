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

// Function: entry_0014b834
// Address: 0x14b834 - 0x14b86c
void entry_0014b834_0x14b834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b834_0x14b834");
#endif

    ctx->pc = 0x14b834u;

    // 0x14b834: 0x1480006a  bnez        $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x14B834u;
    {
        const bool branch_taken_0x14b834 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B834u;
        // 0x14b838: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b834) {
            ctx->pc = 0x14B9E0u;
            return;
        }
    }
    ctx->pc = 0x14B83Cu;
    // 0x14b83c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x14B83Cu;
    {
        const bool branch_taken_0x14b83c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B83Cu;
        // 0x14b840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b83c) {
            ctx->pc = 0x14B86Cu;
            return;
        }
    }
    ctx->pc = 0x14B844u;
    // 0x14b844: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B844u;
    {
        const bool branch_taken_0x14b844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x14B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B844u;
        // 0x14b848: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b844) {
            ctx->pc = 0x14B86Cu;
            return;
        }
    }
    ctx->pc = 0x14B84Cu;
    // 0x14b84c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x14b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x14b850: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14b850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14b854: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x14B854u;
    {
        const bool branch_taken_0x14b854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B854u;
        // 0x14b858: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b854) {
            ctx->pc = 0x14B9E0u;
            return;
        }
    }
    ctx->pc = 0x14B85Cu;
    // 0x14b85c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14b860: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14b860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14b864: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x14B864u;
    {
        const bool branch_taken_0x14b864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B864u;
        // 0x14b868: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b864) {
            ctx->pc = 0x14B9E0u;
            return;
        }
    }
    ctx->pc = 0x14B86Cu;
}
