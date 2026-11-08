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

// Function: entry_001876b4
// Address: 0x1876b4 - 0x1876d8
void entry_001876b4_0x1876b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001876b4_0x1876b4");
#endif

    ctx->pc = 0x1876b4u;

    // 0x1876b4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1876b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x1876b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1876b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1876bc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1876BCu;
    {
        const bool branch_taken_0x1876bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1876C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876BCu;
        // 0x1876c0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876bc) {
            ctx->pc = 0x187738u;
            return;
        }
    }
    ctx->pc = 0x1876C4u;
    // 0x1876c4: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x1876c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x1876c8: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1876C8u;
    {
        const bool branch_taken_0x1876c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1876CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876C8u;
        // 0x1876cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876c8) {
            ctx->pc = 0x187714u;
            return;
        }
    }
    ctx->pc = 0x1876D0u;
    // 0x1876d0: 0x8e0201bc  lw          $v0, 0x1BC($s0)
    ctx->pc = 0x1876d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1876d4: 0x0  nop
    ctx->pc = 0x1876d4u;
    // NOP
    ctx->pc = 0x1876d8u;
}
