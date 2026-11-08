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

// Function: entry_001c4b6c
// Address: 0x1c4b6c - 0x1c4ba8
void entry_001c4b6c_0x1c4b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4b6c_0x1c4b6c");
#endif

    ctx->pc = 0x1c4b6cu;

    // 0x1c4b6c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c4b70: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1c4b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1c4b74: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1c4b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c4b78: 0x2c4200f1  sltiu       $v0, $v0, 0xF1
    ctx->pc = 0x1c4b78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)241) ? 1 : 0);
    // 0x1c4b7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C4B7Cu;
    {
        const bool branch_taken_0x1c4b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B7Cu;
        // 0x1c4b80: 0x2602dc80  addiu       $v0, $s0, -0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b7c) {
            ctx->pc = 0x1C4BA8u;
            return;
        }
    }
    ctx->pc = 0x1C4B84u;
    // 0x1c4b84: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1c4b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b88: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1c4b88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c4b8c: 0x2584dcc0  addiu       $a0, $t4, -0x2340
    ctx->pc = 0x1c4b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294958272));
    // 0x1c4b90: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x1c4b90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c4b94: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1c4b94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b98: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x1c4b98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b9c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c4b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c4ba0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4BA0u;
    {
        const bool branch_taken_0x1c4ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BA0u;
        // 0x1c4ba4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ba0) {
            ctx->pc = 0x1C4BC8u;
            return;
        }
    }
    ctx->pc = 0x1C4BA8u;
}
