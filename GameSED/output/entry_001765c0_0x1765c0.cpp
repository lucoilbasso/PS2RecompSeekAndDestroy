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

// Function: entry_001765c0
// Address: 0x1765c0 - 0x176600
void entry_001765c0_0x1765c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001765c0_0x1765c0");
#endif

    ctx->pc = 0x1765c0u;

label_1765c0:
    // 0x1765c0: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x1765c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1765c4: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x1765c4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1765c8: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x1765c8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1765cc: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x1765ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1765d0: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x1765d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x1765d4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1765d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1765d8: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x1765d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x1765dc: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x1765dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x1765e0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1765e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1765e4: 0x0  nop
    ctx->pc = 0x1765e4u;
    // NOP
    // 0x1765e8: 0x0  nop
    ctx->pc = 0x1765e8u;
    // NOP
    // 0x1765ec: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1765ECu;
    {
        const bool branch_taken_0x1765ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1765F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765ECu;
        // 0x1765f0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765ec) {
            ctx->pc = 0x1765C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1765c0;
        }
    }
    ctx->pc = 0x1765F4u;
    // 0x1765f4: 0x26030500  addiu       $v1, $s0, 0x500
    ctx->pc = 0x1765f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
    // 0x1765f8: 0x26020170  addiu       $v0, $s0, 0x170
    ctx->pc = 0x1765f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x1765fc: 0x260401f0  addiu       $a0, $s0, 0x1F0
    ctx->pc = 0x1765fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    ctx->pc = 0x176600u;
}
