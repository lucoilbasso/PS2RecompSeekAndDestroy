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

// Function: entry_001211e0
// Address: 0x1211e0 - 0x121218
void entry_001211e0_0x1211e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001211e0_0x1211e0");
#endif

    ctx->pc = 0x1211e0u;

label_1211e0:
    // 0x1211e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1211e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1211e4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1211e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1211e8: 0x2cc40045  sltiu       $a0, $a2, 0x45
    ctx->pc = 0x1211e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x1211ec: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1211ECu;
    {
        const bool branch_taken_0x1211ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211ECu;
        // 0x1211f0: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211ec) {
            ctx->pc = 0x12121Cu;
            return;
        }
    }
    ctx->pc = 0x1211F4u;
    // 0x1211f4: 0x10c5ffec  beq         $a2, $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1211F4u;
    {
        const bool branch_taken_0x1211f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1211f4) {
            ctx->pc = 0x1211A8u;
            return;
        }
    }
    ctx->pc = 0x1211FCu;
    // 0x1211fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1211fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x121200: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121204: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x121204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x121208: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x121208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12120c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x12120cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x121210: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x121210u;
    {
        const bool branch_taken_0x121210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121210u;
        // 0x121214: 0x3066ffff  andi        $a2, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121210) {
            ctx->pc = 0x1211E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1211e0;
        }
    }
    ctx->pc = 0x121218u;
}
