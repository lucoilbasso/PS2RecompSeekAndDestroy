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

// Function: entry_0018ffe8
// Address: 0x18ffe8 - 0x18fff4
void entry_0018ffe8_0x18ffe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ffe8_0x18ffe8");
#endif

    ctx->pc = 0x18ffe8u;

    // 0x18ffe8: 0xf61024  and         $v0, $a3, $s6
    ctx->pc = 0x18ffe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 22));
    // 0x18ffec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18FFECu;
    {
        const bool branch_taken_0x18ffec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ffec) {
            ctx->pc = 0x18FFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FFECu;
            // 0x18fff0: 0xad2d000c  sw          $t5, 0xC($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FFF4u;
            return;
        }
    }
    ctx->pc = 0x18FFF4u;
}
