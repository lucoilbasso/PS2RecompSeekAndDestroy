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

// Function: entry_00165820
// Address: 0x165820 - 0x165848
void entry_00165820_0x165820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165820_0x165820");
#endif

    ctx->pc = 0x165820u;

    // 0x165820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165824: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x165828: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x165828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16582c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16582cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165830: 0x8e220c1c  lw          $v0, 0xC1C($s1)
    ctx->pc = 0x165830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3100)));
    // 0x165834: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x165834u;
    {
        const bool branch_taken_0x165834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x165838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165834u;
        // 0x165838: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165834) {
            ctx->pc = 0x165848u;
            return;
        }
    }
    ctx->pc = 0x16583Cu;
    // 0x16583c: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x16583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x165840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x165840u;
    {
        const bool branch_taken_0x165840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165840u;
        // 0x165844: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165840) {
            ctx->pc = 0x16584Cu;
            return;
        }
    }
    ctx->pc = 0x165848u;
}
