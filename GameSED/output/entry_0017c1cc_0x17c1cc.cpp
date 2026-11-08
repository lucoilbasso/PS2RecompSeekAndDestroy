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

// Function: entry_0017c1cc
// Address: 0x17c1cc - 0x17c1f0
void entry_0017c1cc_0x17c1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c1cc_0x17c1cc");
#endif

    ctx->pc = 0x17c1ccu;

    // 0x17c1cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c1d0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x17c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x17c1d4: 0x3401c034  ori         $at, $zero, 0xC034
    ctx->pc = 0x17c1d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x17c1d8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x17c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x17c1dc: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x17c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x17c1e0: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C1E0u;
    {
        const bool branch_taken_0x17c1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x17C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1E0u;
        // 0x17c1e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1e0) {
            ctx->pc = 0x17C1F0u;
            return;
        }
    }
    ctx->pc = 0x17C1E8u;
    // 0x17c1e8: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x17C1E8u;
    {
        const bool branch_taken_0x17c1e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1E8u;
        // 0x17c1ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1e8) {
            ctx->pc = 0x17C25Cu;
            return;
        }
    }
    ctx->pc = 0x17C1F0u;
}
