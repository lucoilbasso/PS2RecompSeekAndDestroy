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

// Function: entry_00160284
// Address: 0x160284 - 0x1602a0
void entry_00160284_0x160284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160284_0x160284");
#endif

    ctx->pc = 0x160284u;

    // 0x160284: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x160284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x160288: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x160288u;
    {
        const bool branch_taken_0x160288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160288) {
            ctx->pc = 0x16028Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160288u;
            // 0x16028c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1602D4u;
            return;
        }
    }
    ctx->pc = 0x160290u;
    // 0x160290: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x160290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x160294: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x160294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x160298: 0x24510f3c  addiu       $s1, $v0, 0xF3C
    ctx->pc = 0x160298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3900));
    // 0x16029c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x16029cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1602a0u;
}
