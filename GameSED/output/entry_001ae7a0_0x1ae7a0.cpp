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

// Function: entry_001ae7a0
// Address: 0x1ae7a0 - 0x1ae7c8
void entry_001ae7a0_0x1ae7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae7a0_0x1ae7a0");
#endif

    ctx->pc = 0x1ae7a0u;

    // 0x1ae7a0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x1ae7a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ae7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae7a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ae7a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7ac: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1ae7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1ae7b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7b4: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x1ae7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ae7b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ae7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae7bc: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x1ae7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x1ae7c0: 0x1444ffcd  bne         $v0, $a0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1AE7C0u;
    {
        const bool branch_taken_0x1ae7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AE7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7C0u;
        // 0x1ae7c4: 0x25890938  addiu       $t1, $t4, 0x938 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 2360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae7c0) {
            ctx->pc = 0x1AE6F8u;
            return;
        }
    }
    ctx->pc = 0x1AE7C8u;
}
