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

// Function: entry_0014f9c4
// Address: 0x14f9c4 - 0x14fa10
void entry_0014f9c4_0x14f9c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f9c4_0x14f9c4");
#endif

    ctx->pc = 0x14f9c4u;

    // 0x14f9c4: 0x14a00016  bnez        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x14F9C4u;
    {
        const bool branch_taken_0x14f9c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9C4u;
        // 0x14f9c8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9c4) {
            ctx->pc = 0x14FA20u;
            return;
        }
    }
    ctx->pc = 0x14F9CCu;
    // 0x14f9cc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x14f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x14f9d0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14F9D0u;
    {
        const bool branch_taken_0x14f9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f9d0) {
            ctx->pc = 0x14FA10u;
            return;
        }
    }
    ctx->pc = 0x14F9D8u;
    // 0x14f9d8: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x14f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14f9dc: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x14f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x14f9e0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14f9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14f9e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14f9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14f9e8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x14f9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14f9ec: 0x30844000  andi        $a0, $a0, 0x4000
    ctx->pc = 0x14f9ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x14f9f0: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x14F9F0u;
    {
        const bool branch_taken_0x14f9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9F0u;
        // 0x14f9f4: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9f0) {
            ctx->pc = 0x14FB10u;
            return;
        }
    }
    ctx->pc = 0x14F9F8u;
    // 0x14f9f8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x14f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x14f9fc: 0xae0007f0  sw          $zero, 0x7F0($s0)
    ctx->pc = 0x14f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2032), GPR_U32(ctx, 0));
    // 0x14fa00: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14fa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14fa04: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x14FA04u;
    {
        const bool branch_taken_0x14fa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA04u;
        // 0x14fa08: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa04) {
            ctx->pc = 0x14FB10u;
            return;
        }
    }
    ctx->pc = 0x14FA0Cu;
    // 0x14fa0c: 0x0  nop
    ctx->pc = 0x14fa0cu;
    // NOP
    ctx->pc = 0x14fa10u;
}
