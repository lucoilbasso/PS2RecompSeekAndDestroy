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

// Function: entry_0018e41c
// Address: 0x18e41c - 0x18e430
void entry_0018e41c_0x18e41c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e41c_0x18e41c");
#endif

    ctx->pc = 0x18e41cu;

    // 0x18e41c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18e41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18e420: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x18e420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x18e424: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E424u;
    {
        const bool branch_taken_0x18e424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E424u;
        // 0x18e428: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e424) {
            ctx->pc = 0x18E430u;
            return;
        }
    }
    ctx->pc = 0x18E42Cu;
    // 0x18e42c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x18e430u;
}
