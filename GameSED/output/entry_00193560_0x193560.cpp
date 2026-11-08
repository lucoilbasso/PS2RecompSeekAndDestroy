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

// Function: entry_00193560
// Address: 0x193560 - 0x193590
void entry_00193560_0x193560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193560_0x193560");
#endif

    ctx->pc = 0x193560u;

label_193560:
    // 0x193560: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x193560u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193564: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x193564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x193568: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x193568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x19356c: 0x2a450004  slti        $a1, $s2, 0x4
    ctx->pc = 0x19356cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x193570: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x193570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x193574: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x193574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x193578: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x193578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x19357c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x19357cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x193580: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x193580u;
    {
        const bool branch_taken_0x193580 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x193584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193580u;
        // 0x193584: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193580) {
            ctx->pc = 0x193560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193560;
        }
    }
    ctx->pc = 0x193588u;
    // 0x193588: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x193588u;
    {
        const bool branch_taken_0x193588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193588u;
        // 0x19358c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193588) {
            ctx->pc = 0x1935D0u;
            return;
        }
    }
    ctx->pc = 0x193590u;
}
