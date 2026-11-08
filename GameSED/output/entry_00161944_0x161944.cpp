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

// Function: entry_00161944
// Address: 0x161944 - 0x161960
void entry_00161944_0x161944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161944_0x161944");
#endif

    ctx->pc = 0x161944u;

    // 0x161944: 0x8e820c1c  lw          $v0, 0xC1C($s4)
    ctx->pc = 0x161944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3100)));
    // 0x161948: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161948u;
    {
        const bool branch_taken_0x161948 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161948u;
        // 0x16194c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161948) {
            ctx->pc = 0x161960u;
            return;
        }
    }
    ctx->pc = 0x161950u;
    // 0x161950: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x161950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x161954: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x161954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x161958: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161958u;
    {
        const bool branch_taken_0x161958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161958u;
        // 0x16195c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161958) {
            ctx->pc = 0x161964u;
            return;
        }
    }
    ctx->pc = 0x161960u;
}
