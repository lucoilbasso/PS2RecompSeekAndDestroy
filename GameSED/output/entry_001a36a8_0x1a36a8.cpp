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

// Function: entry_001a36a8
// Address: 0x1a36a8 - 0x1a36d0
void entry_001a36a8_0x1a36a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a36a8_0x1a36a8");
#endif

    ctx->pc = 0x1a36a8u;

label_1a36a8:
    // 0x1a36a8: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x1a36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1a36ac: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x1a36acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a36b0: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x1a36b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x1a36b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a36b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a36b8: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x1a36b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a36bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A36BCu;
    {
        const bool branch_taken_0x1a36bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36BCu;
        // 0x1a36c0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36bc) {
            ctx->pc = 0x1A36A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a36a8;
        }
    }
    ctx->pc = 0x1A36C4u;
    // 0x1a36c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A36C4u;
    {
        const bool branch_taken_0x1a36c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36C4u;
        // 0x1a36c8: 0xa505000a  sh          $a1, 0xA($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36c4) {
            ctx->pc = 0x1A3704u;
            return;
        }
    }
    ctx->pc = 0x1A36CCu;
    // 0x1a36cc: 0x0  nop
    ctx->pc = 0x1a36ccu;
    // NOP
    ctx->pc = 0x1a36d0u;
}
