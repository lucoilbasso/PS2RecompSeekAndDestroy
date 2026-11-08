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

// Function: entry_00138280
// Address: 0x138280 - 0x1382a4
void entry_00138280_0x138280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138280_0x138280");
#endif

    ctx->pc = 0x138280u;

    // 0x138280: 0x2a620014  slti        $v0, $s3, 0x14
    ctx->pc = 0x138280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x138284: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x138284u;
    {
        const bool branch_taken_0x138284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138284u;
        // 0x138288: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138284) {
            ctx->pc = 0x1382A4u;
            return;
        }
    }
    ctx->pc = 0x13828Cu;
    // 0x13828c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x13828cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x138290: 0x2463bc50  addiu       $v1, $v1, -0x43B0
    ctx->pc = 0x138290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949968));
    // 0x138294: 0x8c620400  lw          $v0, 0x400($v1)
    ctx->pc = 0x138294u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC050u));
    // 0x138298: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x138298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13829c: 0x5440ff84  bnel        $v0, $zero, . + 4 + (-0x7C << 2)
    ctx->pc = 0x13829Cu;
    {
        const bool branch_taken_0x13829c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13829c) {
            ctx->pc = 0x1382A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13829Cu;
            // 0x1382a0: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1380B0u;
            return;
        }
    }
    ctx->pc = 0x1382A4u;
}
