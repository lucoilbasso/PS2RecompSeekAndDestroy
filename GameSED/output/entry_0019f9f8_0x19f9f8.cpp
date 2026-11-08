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

// Function: entry_0019f9f8
// Address: 0x19f9f8 - 0x19fa28
void entry_0019f9f8_0x19f9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f9f8_0x19f9f8");
#endif

    ctx->pc = 0x19f9f8u;

    // 0x19f9f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f9fc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x19F9FCu;
    {
        const bool branch_taken_0x19f9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9FCu;
        // 0x19fa00: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9fc) {
            ctx->pc = 0x19FA98u;
            return;
        }
    }
    ctx->pc = 0x19FA04u;
    // 0x19fa04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19fa08: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x19fa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19fa0c: 0xab1024  and         $v0, $a1, $t3
    ctx->pc = 0x19fa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x19fa10: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x19FA10u;
    {
        const bool branch_taken_0x19fa10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fa10) {
            ctx->pc = 0x19FA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FA10u;
            // 0x19fa14: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FA64u;
            return;
        }
    }
    ctx->pc = 0x19FA18u;
    // 0x19fa18: 0x3c080fff  lui         $t0, 0xFFF
    ctx->pc = 0x19fa18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4095 << 16));
    // 0x19fa1c: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x19fa1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x19fa20: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x19fa20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x19fa24: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19fa24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19fa28u;
}
