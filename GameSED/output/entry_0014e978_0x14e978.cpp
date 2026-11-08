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

// Function: entry_0014e978
// Address: 0x14e978 - 0x14e9a8
void entry_0014e978_0x14e978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e978_0x14e978");
#endif

    ctx->pc = 0x14e978u;

label_14e978:
    // 0x14e978: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x14e978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x14e97c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14e980: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x14e980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x14e984: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e988: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x14E988u;
    {
        const bool branch_taken_0x14e988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e988) {
            ctx->pc = 0x14E98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E988u;
            // 0x14e98c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E9F0u;
            return;
        }
    }
    ctx->pc = 0x14E990u;
    // 0x14e990: 0x0  nop
    ctx->pc = 0x14e990u;
    // NOP
    // 0x14e994: 0x5452fff8  bnel        $v0, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14E994u;
    {
        const bool branch_taken_0x14e994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x14e994) {
            ctx->pc = 0x14E998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E994u;
            // 0x14e998: 0x8e22084c  lw          $v0, 0x84C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e978;
        }
    }
    ctx->pc = 0x14E99Cu;
    // 0x14e99c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14E99Cu;
    {
        const bool branch_taken_0x14e99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E99Cu;
        // 0x14e9a0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e99c) {
            ctx->pc = 0x14E9F0u;
            return;
        }
    }
    ctx->pc = 0x14E9A4u;
    // 0x14e9a4: 0x0  nop
    ctx->pc = 0x14e9a4u;
    // NOP
    ctx->pc = 0x14e9a8u;
}
