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

// Function: entry_0018e7a0
// Address: 0x18e7a0 - 0x18e7c8
void entry_0018e7a0_0x18e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e7a0_0x18e7a0");
#endif

    ctx->pc = 0x18e7a0u;

    // 0x18e7a0: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E7A0u;
    {
        const bool branch_taken_0x18e7a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7A0u;
        // 0x18e7a4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7a0) {
            ctx->pc = 0x18E7C8u;
            return;
        }
    }
    ctx->pc = 0x18E7A8u;
    // 0x18e7a8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x18e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18e7ac: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x18e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x18e7b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e7b4: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x18e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x18e7b8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x18e7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x18e7bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18E7BCu;
    {
        const bool branch_taken_0x18e7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7BCu;
        // 0x18e7c0: 0xace00010  sw          $zero, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7bc) {
            ctx->pc = 0x18E7DCu;
            return;
        }
    }
    ctx->pc = 0x18E7C4u;
    // 0x18e7c4: 0x0  nop
    ctx->pc = 0x18e7c4u;
    // NOP
    ctx->pc = 0x18e7c8u;
}
