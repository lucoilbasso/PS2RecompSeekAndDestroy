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

// Function: entry_001a0220
// Address: 0x1a0220 - 0x1a0248
void entry_001a0220_0x1a0220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0220_0x1a0220");
#endif

    ctx->pc = 0x1a0220u;

    // 0x1a0220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0224: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a0224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0228: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a022c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a022cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0234: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a0234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0238: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0238u;
    {
        const bool branch_taken_0x1a0238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0238u;
        // 0x1a023c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0238) {
            ctx->pc = 0x1A0248u;
            return;
        }
    }
    ctx->pc = 0x1A0240u;
    // 0x1a0240: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a0240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a0244: 0x8c42f640  lw          $v0, -0x9C0($v0)
    ctx->pc = 0x1a0244u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x23F640u));
    ctx->pc = 0x1a0248u;
}
