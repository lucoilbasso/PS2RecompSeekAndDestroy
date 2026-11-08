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

// Function: entry_0019a7c0
// Address: 0x19a7c0 - 0x19a7f0
void entry_0019a7c0_0x19a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a7c0_0x19a7c0");
#endif

    ctx->pc = 0x19a7c0u;

    // 0x19a7c0: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x19A7C0u;
    {
        const bool branch_taken_0x19a7c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7C0u;
        // 0x19a7c4: 0x26250104  addiu       $a1, $s1, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a7c0) {
            ctx->pc = 0x19A818u;
            return;
        }
    }
    ctx->pc = 0x19A7C8u;
    // 0x19a7c8: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x19a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x19a7cc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x19a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a7d0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x19a7d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7d4: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x19a7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19a7d8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x19a7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x19a7dc: 0x72100a  movz        $v0, $v1, $s2
    ctx->pc = 0x19a7dcu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x19a7e0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x19A7E0u;
    {
        const bool branch_taken_0x19a7e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7E0u;
        // 0x19a7e4: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a7e0) {
            ctx->pc = 0x19A80Cu;
            return;
        }
    }
    ctx->pc = 0x19A7E8u;
    // 0x19a7e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a7ec: 0x0  nop
    ctx->pc = 0x19a7ecu;
    // NOP
    ctx->pc = 0x19a7f0u;
}
