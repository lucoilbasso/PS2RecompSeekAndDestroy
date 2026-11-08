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

// Function: entry_0019c178
// Address: 0x19c178 - 0x19c1a0
void entry_0019c178_0x19c178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c178_0x19c178");
#endif

    ctx->pc = 0x19c178u;

    // 0x19c178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c17c: 0x28830018  slti        $v1, $a0, 0x18
    ctx->pc = 0x19c17cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x19c180: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C180u;
    {
        const bool branch_taken_0x19c180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C180u;
        // 0x19c184: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c180) {
            ctx->pc = 0x19C1A0u;
            return;
        }
    }
    ctx->pc = 0x19C188u;
    // 0x19c188: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19c188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19c18c: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19c190: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19c190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c194: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19c194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c198: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19C198u;
    {
        const bool branch_taken_0x19c198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C198u;
        // 0x19c19c: 0x8ca3007c  lw          $v1, 0x7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c198) {
            ctx->pc = 0x19C1B4u;
            return;
        }
    }
    ctx->pc = 0x19C1A0u;
}
