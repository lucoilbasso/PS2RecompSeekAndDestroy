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

// Function: entry_001c08a8
// Address: 0x1c08a8 - 0x1c08e0
void entry_001c08a8_0x1c08a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c08a8_0x1c08a8");
#endif

    ctx->pc = 0x1c08a8u;

label_1c08a8:
    // 0x1c08a8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1c08a8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c08ac: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x1c08acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1c08b0: 0x710b41e8  pminh       $t0, $t0, $t3
    ctx->pc = 0x1c08b0u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x1c08b4: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x1c08b4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1c08b8: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x1c08b8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1c08bc: 0x712b49e8  pminh       $t1, $t1, $t3
    ctx->pc = 0x1c08bcu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x1c08c0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1c08c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1c08c4: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x1c08c4u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1c08c8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1c08c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1c08cc: 0x712856c8  ppacb       $t2, $t1, $t0
    ctx->pc = 0x1c08ccu;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c08d0: 0x1580fff5  bnez        $t4, . + 4 + (-0xB << 2)
    ctx->pc = 0x1C08D0u;
    {
        const bool branch_taken_0x1c08d0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C08D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08D0u;
        // 0x1c08d4: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c08d0) {
            ctx->pc = 0x1C08A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c08a8;
        }
    }
    ctx->pc = 0x1C08D8u;
    // 0x1c08d8: 0x0  nop
    ctx->pc = 0x1c08d8u;
    // NOP
    // 0x1c08dc: 0x0  nop
    ctx->pc = 0x1c08dcu;
    // NOP
    ctx->pc = 0x1c08e0u;
}
