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

// Function: entry_0017aa14
// Address: 0x17aa14 - 0x17aa24
void entry_0017aa14_0x17aa14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aa14_0x17aa14");
#endif

    ctx->pc = 0x17aa14u;

    // 0x17aa14: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AA14u;
    {
        const bool branch_taken_0x17aa14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA14u;
        // 0x17aa18: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa14) {
            ctx->pc = 0x17AA24u;
            return;
        }
    }
    ctx->pc = 0x17AA1Cu;
    // 0x17aa1c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17aa20: 0x2451e990  addiu       $s1, $v0, -0x1670
    ctx->pc = 0x17aa20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961552));
    ctx->pc = 0x17aa24u;
}
