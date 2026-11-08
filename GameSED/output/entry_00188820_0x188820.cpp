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

// Function: entry_00188820
// Address: 0x188820 - 0x18883c
void entry_00188820_0x188820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188820_0x188820");
#endif

    ctx->pc = 0x188820u;

    // 0x188820: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x188820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x188824: 0x8e02015c  lw          $v0, 0x15C($s0)
    ctx->pc = 0x188824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x188828: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x188828u;
    {
        const bool branch_taken_0x188828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188828u;
        // 0x18882c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188828) {
            ctx->pc = 0x18884Cu;
            return;
        }
    }
    ctx->pc = 0x188830u;
    // 0x188830: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x188830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x188834: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188834u;
    {
        const bool branch_taken_0x188834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188834u;
        // 0x188838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188834) {
            ctx->pc = 0x188848u;
            return;
        }
    }
    ctx->pc = 0x18883Cu;
}
