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

// Function: entry_0017fa78
// Address: 0x17fa78 - 0x17fa98
void entry_0017fa78_0x17fa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fa78_0x17fa78");
#endif

    ctx->pc = 0x17fa78u;

    // 0x17fa78: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x17fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x17fa7c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x17fa7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x17fa80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17fa80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17fa88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17fa8c: 0x8c8a000c  lw          $t2, 0xC($a0)
    ctx->pc = 0x17fa8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17fa90: 0x11400016  beqz        $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x17FA90u;
    {
        const bool branch_taken_0x17fa90 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA90u;
        // 0x17fa94: 0x24880010  addiu       $t0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa90) {
            ctx->pc = 0x17FAECu;
            return;
        }
    }
    ctx->pc = 0x17FA98u;
}
