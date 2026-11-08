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

// Function: entry_0019255c
// Address: 0x19255c - 0x192590
void entry_0019255c_0x19255c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019255c_0x19255c");
#endif

    ctx->pc = 0x19255cu;

    // 0x19255c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192560: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x192560u;
    {
        const bool branch_taken_0x192560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x192564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192560u;
        // 0x192564: 0x262201d0  addiu       $v0, $s1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192560) {
            ctx->pc = 0x192590u;
            return;
        }
    }
    ctx->pc = 0x192568u;
    // 0x192568: 0xde2201f0  ld          $v0, 0x1F0($s1)
    ctx->pc = 0x192568u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x19256c: 0xde2301f8  ld          $v1, 0x1F8($s1)
    ctx->pc = 0x19256cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x192570: 0xde240200  ld          $a0, 0x200($s1)
    ctx->pc = 0x192570u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x192574: 0xde250208  ld          $a1, 0x208($s1)
    ctx->pc = 0x192574u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x192578: 0xfe2201d0  sd          $v0, 0x1D0($s1)
    ctx->pc = 0x192578u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 464), GPR_U64(ctx, 2));
    // 0x19257c: 0xfe2301d8  sd          $v1, 0x1D8($s1)
    ctx->pc = 0x19257cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 472), GPR_U64(ctx, 3));
    // 0x192580: 0xfe2401e0  sd          $a0, 0x1E0($s1)
    ctx->pc = 0x192580u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 480), GPR_U64(ctx, 4));
    // 0x192584: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x192584u;
    {
        const bool branch_taken_0x192584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192584u;
        // 0x192588: 0xfe2501e8  sd          $a1, 0x1E8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 488), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192584) {
            ctx->pc = 0x1925ACu;
            return;
        }
    }
    ctx->pc = 0x19258Cu;
    // 0x19258c: 0x0  nop
    ctx->pc = 0x19258cu;
    // NOP
    ctx->pc = 0x192590u;
}
