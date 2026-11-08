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

// Function: entry_001c46f0
// Address: 0x1c46f0 - 0x1c4748
void entry_001c46f0_0x1c46f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c46f0_0x1c46f0");
#endif

    ctx->pc = 0x1c46f0u;

label_1c46f0:
    // 0x1c46f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c46f4: 0x0  nop
    ctx->pc = 0x1c46f4u;
    // NOP
    // 0x1c46f8: 0x0  nop
    ctx->pc = 0x1c46f8u;
    // NOP
    // 0x1c46fc: 0x0  nop
    ctx->pc = 0x1c46fcu;
    // NOP
    // 0x1c4700: 0x0  nop
    ctx->pc = 0x1c4700u;
    // NOP
    // 0x1c4704: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C4704u;
    {
        const bool branch_taken_0x1c4704 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c4704) {
            ctx->pc = 0x1C46F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c46f0;
        }
    }
    ctx->pc = 0x1C470Cu;
    // 0x1c470c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1c470cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1c4710: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c4710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4714: 0x2463dd90  addiu       $v1, $v1, -0x2270
    ctx->pc = 0x1c4714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958480));
    // 0x1c4718: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x1c4718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x1c471c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1c471cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x24DD90u));
    // 0x1c4720: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c4720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4724: 0x3c066000  lui         $a2, 0x6000
    ctx->pc = 0x1c4724u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24576 << 16));
    // 0x1c4728: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x1c4728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x1c472c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1c472cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x1c4730: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1c4730u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4734: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x1c4734u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x1c4738: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1c4738u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x24DDA0u));
    // 0x1c473c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1c473cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x1c4740: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1c4740u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 6));
    // 0x1c4744: 0x0  nop
    ctx->pc = 0x1c4744u;
    // NOP
    ctx->pc = 0x1c4748u;
}
