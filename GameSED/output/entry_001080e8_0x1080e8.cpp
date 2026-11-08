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

// Function: entry_001080e8
// Address: 0x1080e8 - 0x108110
void entry_001080e8_0x1080e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001080e8_0x1080e8");
#endif

    ctx->pc = 0x1080e8u;

    // 0x1080e8: 0x1222004b  beq         $s1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1080E8u;
    {
        const bool branch_taken_0x1080e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1080ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080E8u;
        // 0x1080ec: 0x51102a  slt         $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080e8) {
            ctx->pc = 0x108218u;
            return;
        }
    }
    ctx->pc = 0x1080F0u;
    // 0x1080f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1080F0u;
    {
        const bool branch_taken_0x1080f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1080F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080F0u;
        // 0x1080f4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080f0) {
            ctx->pc = 0x108110u;
            return;
        }
    }
    ctx->pc = 0x1080F8u;
    // 0x1080f8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1080f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1080fc: 0x522200b6  beql        $s1, $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1080FCu;
    {
        const bool branch_taken_0x1080fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1080fc) {
            ctx->pc = 0x108100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1080FCu;
            // 0x108100: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1083D8u;
            return;
        }
    }
    ctx->pc = 0x108104u;
    // 0x108104: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x108104u;
    {
        const bool branch_taken_0x108104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108104u;
        // 0x108108: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108104) {
            ctx->pc = 0x1084E8u;
            return;
        }
    }
    ctx->pc = 0x10810Cu;
    // 0x10810c: 0x0  nop
    ctx->pc = 0x10810cu;
    // NOP
    ctx->pc = 0x108110u;
}
