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

// Function: entry_0018e394
// Address: 0x18e394 - 0x18e3a8
void entry_0018e394_0x18e394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e394_0x18e394");
#endif

    ctx->pc = 0x18e394u;

    // 0x18e394: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18e394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18e398: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x18e398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x18e39c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E39Cu;
    {
        const bool branch_taken_0x18e39c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E39Cu;
        // 0x18e3a0: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e39c) {
            ctx->pc = 0x18E3A8u;
            return;
        }
    }
    ctx->pc = 0x18E3A4u;
    // 0x18e3a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x18e3a8u;
}
