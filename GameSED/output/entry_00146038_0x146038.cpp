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

// Function: entry_00146038
// Address: 0x146038 - 0x146060
void entry_00146038_0x146038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146038_0x146038");
#endif

    ctx->pc = 0x146038u;

    // 0x146038: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x146038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14603c: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14603Cu;
    {
        const bool branch_taken_0x14603c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x146040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14603Cu;
        // 0x146040: 0x28a30002  slti        $v1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14603c) {
            ctx->pc = 0x146070u;
            return;
        }
    }
    ctx->pc = 0x146044u;
    // 0x146044: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x146044u;
    {
        const bool branch_taken_0x146044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146044) {
            ctx->pc = 0x146048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146044u;
            // 0x146048: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146060u;
            return;
        }
    }
    ctx->pc = 0x14604Cu;
    // 0x14604c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x14604Cu;
    {
        const bool branch_taken_0x14604c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x146050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14604Cu;
        // 0x146050: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14604c) {
            ctx->pc = 0x146088u;
            return;
        }
    }
    ctx->pc = 0x146054u;
    // 0x146054: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x146054u;
    {
        const bool branch_taken_0x146054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146054u;
        // 0x146058: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146054) {
            ctx->pc = 0x146078u;
            return;
        }
    }
    ctx->pc = 0x14605Cu;
    // 0x14605c: 0x0  nop
    ctx->pc = 0x14605cu;
    // NOP
    ctx->pc = 0x146060u;
}
