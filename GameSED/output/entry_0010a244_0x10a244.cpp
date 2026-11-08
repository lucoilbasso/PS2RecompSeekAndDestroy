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

// Function: entry_0010a244
// Address: 0x10a244 - 0x10a254
void entry_0010a244_0x10a244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a244_0x10a244");
#endif

    ctx->pc = 0x10a244u;

    // 0x10a244: 0x15400003  bnez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A244u;
    {
        const bool branch_taken_0x10a244 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A244u;
        // 0x10a248: 0x23400  sll         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a244) {
            ctx->pc = 0x10A254u;
            return;
        }
    }
    ctx->pc = 0x10A24Cu;
    // 0x10a24c: 0x862501a2  lh          $a1, 0x1A2($s1)
    ctx->pc = 0x10a24cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 418)));
    // 0x10a250: 0x862a01a6  lh          $t2, 0x1A6($s1)
    ctx->pc = 0x10a250u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 422)));
    ctx->pc = 0x10a254u;
}
