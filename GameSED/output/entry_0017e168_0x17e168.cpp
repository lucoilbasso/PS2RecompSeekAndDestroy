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

// Function: entry_0017e168
// Address: 0x17e168 - 0x17e184
void entry_0017e168_0x17e168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e168_0x17e168");
#endif

    ctx->pc = 0x17e168u;

    // 0x17e168: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x17e168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e16c: 0xad90003c  sw          $s0, 0x3C($t4)
    ctx->pc = 0x17e16cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 60), GPR_U32(ctx, 16));
    // 0x17e170: 0x2452e7c0  addiu       $s2, $v0, -0x1840
    ctx->pc = 0x17e170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961088));
    // 0x17e174: 0xad8d0038  sw          $t5, 0x38($t4)
    ctx->pc = 0x17e174u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 56), GPR_U32(ctx, 13));
    // 0x17e178: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17E178u;
    {
        const bool branch_taken_0x17e178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E178u;
        // 0x17e17c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e178) {
            ctx->pc = 0x17E184u;
            return;
        }
    }
    ctx->pc = 0x17E180u;
    // 0x17e180: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17e180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x17e184u;
}
