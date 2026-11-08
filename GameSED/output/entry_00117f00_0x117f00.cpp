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

// Function: entry_00117f00
// Address: 0x117f00 - 0x117f50
void entry_00117f00_0x117f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117f00_0x117f00");
#endif

    ctx->pc = 0x117f00u;

label_117f00:
    // 0x117f00: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x117f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x117f04: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x117f04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x117f08: 0x0  nop
    ctx->pc = 0x117f08u;
    // NOP
    // 0x117f0c: 0x0  nop
    ctx->pc = 0x117f0cu;
    // NOP
    // 0x117f10: 0x0  nop
    ctx->pc = 0x117f10u;
    // NOP
    // 0x117f14: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x117F14u;
    {
        const bool branch_taken_0x117f14 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x117F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F14u;
        // 0x117f18: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f14) {
            ctx->pc = 0x117F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117f00;
        }
    }
    ctx->pc = 0x117F1Cu;
    // 0x117f1c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x117f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x117f20: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x117f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x117f24: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x117F24u;
    {
        const bool branch_taken_0x117f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F24u;
        // 0x117f28: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f24) {
            ctx->pc = 0x117EE8u;
            return;
        }
    }
    ctx->pc = 0x117F2Cu;
    // 0x117f2c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x117f2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x117f30: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x117f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x117f34: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x117F34u;
    {
        const bool branch_taken_0x117f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F34u;
        // 0x117f38: 0x250800c8  addiu       $t0, $t0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f34) {
            ctx->pc = 0x117EE0u;
            return;
        }
    }
    ctx->pc = 0x117F3Cu;
    // 0x117f3c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x117f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x117f40: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x117f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117f44: 0x244233b0  addiu       $v0, $v0, 0x33B0
    ctx->pc = 0x117f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13232));
    // 0x117f48: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x117f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x117f4c: 0x24420267  addiu       $v0, $v0, 0x267
    ctx->pc = 0x117f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 615));
    ctx->pc = 0x117f50u;
}
