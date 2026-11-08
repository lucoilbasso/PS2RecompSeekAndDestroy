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

// Function: entry_0014cabc
// Address: 0x14cabc - 0x14cacc
void entry_0014cabc_0x14cabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cabc_0x14cabc");
#endif

    ctx->pc = 0x14cabcu;

    // 0x14cabc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14cabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14cac0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14CAC0u;
    {
        const bool branch_taken_0x14cac0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAC0u;
        // 0x14cac4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cac0) {
            ctx->pc = 0x14CACCu;
            return;
        }
    }
    ctx->pc = 0x14CAC8u;
    // 0x14cac8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x14caccu;
}
