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

// Function: entry_001785b8
// Address: 0x1785b8 - 0x1785cc
void entry_001785b8_0x1785b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001785b8_0x1785b8");
#endif

    ctx->pc = 0x1785b8u;

    // 0x1785b8: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1785B8u;
    {
        const bool branch_taken_0x1785b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1785BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785B8u;
        // 0x1785bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1785b8) {
            ctx->pc = 0x1785CCu;
            return;
        }
    }
    ctx->pc = 0x1785C0u;
    // 0x1785c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1785c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1785c4: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1785C4u;
    {
        const bool branch_taken_0x1785c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1785c4) {
            ctx->pc = 0x1785C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1785C4u;
            // 0x1785c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1785E0u;
            return;
        }
    }
    ctx->pc = 0x1785CCu;
}
