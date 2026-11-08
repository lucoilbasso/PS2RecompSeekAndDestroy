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

// Function: entry_0017d24c
// Address: 0x17d24c - 0x17d268
void entry_0017d24c_0x17d24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d24c_0x17d24c");
#endif

    ctx->pc = 0x17d24cu;

    // 0x17d24c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d250: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x17d250u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17d254: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17d254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17d258: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x17d258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x17d25c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17D25Cu;
    {
        const bool branch_taken_0x17d25c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D25Cu;
        // 0x17d260: 0x228c0  sll         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d25c) {
            ctx->pc = 0x17D268u;
            return;
        }
    }
    ctx->pc = 0x17D264u;
    // 0x17d264: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17d264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x17d268u;
}
