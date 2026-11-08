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

// Function: entry_001a20f0
// Address: 0x1a20f0 - 0x1a2144
void entry_001a20f0_0x1a20f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a20f0_0x1a20f0");
#endif

    ctx->pc = 0x1a20f0u;

label_1a20f0:
    // 0x1a20f0: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x1a20f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a20f4: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x1a20f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a20f8: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x1a20f8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a20fc: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x1a20fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1a2100: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x1a2100u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x1a2104: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1a2104u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1a2108: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x1a2108u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x1a210c: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x1a210cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x1a2110: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1a2110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1a2114: 0x0  nop
    ctx->pc = 0x1a2114u;
    // NOP
    // 0x1a2118: 0x0  nop
    ctx->pc = 0x1a2118u;
    // NOP
    // 0x1a211c: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A211Cu;
    {
        const bool branch_taken_0x1a211c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A2120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A211Cu;
        // 0x1a2120: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a211c) {
            ctx->pc = 0x1A20F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a20f0;
        }
    }
    ctx->pc = 0x1A2124u;
    // 0x1a2124: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1a2124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a2128: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2128u;
    {
        const bool branch_taken_0x1a2128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2128) {
            ctx->pc = 0x1A2144u;
            return;
        }
    }
    ctx->pc = 0x1A2130u;
    // 0x1a2130: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1a2130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2134: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a2134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1a2138: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2138u;
    {
        const bool branch_taken_0x1a2138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2138u;
        // 0x1a213c: 0x26020030  addiu       $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2138) {
            ctx->pc = 0x1A2144u;
            return;
        }
    }
    ctx->pc = 0x1A2140u;
    // 0x1a2140: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a2140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1a2144u;
}
