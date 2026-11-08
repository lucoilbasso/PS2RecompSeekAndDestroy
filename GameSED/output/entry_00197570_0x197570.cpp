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

// Function: entry_00197570
// Address: 0x197570 - 0x1975b4
void entry_00197570_0x197570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197570_0x197570");
#endif

    ctx->pc = 0x197570u;

label_197570:
    // 0x197570: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x197570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197574: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x197574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x197578: 0x0  nop
    ctx->pc = 0x197578u;
    // NOP
    // 0x19757c: 0x0  nop
    ctx->pc = 0x19757cu;
    // NOP
    // 0x197580: 0x0  nop
    ctx->pc = 0x197580u;
    // NOP
    // 0x197584: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x197584u;
    {
        const bool branch_taken_0x197584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197584u;
        // 0x197588: 0x8f848c50  lw          $a0, -0x73B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197584) {
            ctx->pc = 0x197570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197570;
        }
    }
    ctx->pc = 0x19758Cu;
    // 0x19758c: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x19758cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x197590: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x197590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x197594: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x197594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197598: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x197598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x19759c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x19759cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1975a0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1975a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1975a4: 0x34420145  ori         $v0, $v0, 0x145
    ctx->pc = 0x1975a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)325);
    // 0x1975a8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1975a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1975ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1975acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1975b0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1975b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->pc = 0x1975b4u;
}
