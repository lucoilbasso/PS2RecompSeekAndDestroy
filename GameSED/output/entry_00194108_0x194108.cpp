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

// Function: entry_00194108
// Address: 0x194108 - 0x19413c
void entry_00194108_0x194108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194108_0x194108");
#endif

    ctx->pc = 0x194108u;

    // 0x194108: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x194108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x19410c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x19410cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x194110: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x194110u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194114: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x194114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x194118: 0x93a40003  lbu         $a0, 0x3($sp)
    ctx->pc = 0x194118u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x19411c: 0xa1250000  sb          $a1, 0x0($t1)
    ctx->pc = 0x19411cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x194120: 0xa1220001  sb          $v0, 0x1($t1)
    ctx->pc = 0x194120u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x194124: 0xa1230002  sb          $v1, 0x2($t1)
    ctx->pc = 0x194124u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x194128: 0xa1240003  sb          $a0, 0x3($t1)
    ctx->pc = 0x194128u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x19412c: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x19412cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x194130: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x194130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x194134: 0x541ffca  bgez        $t2, . + 4 + (-0x36 << 2)
    ctx->pc = 0x194134u;
    {
        const bool branch_taken_0x194134 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x194138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194134u;
        // 0x194138: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194134) {
            ctx->pc = 0x194060u;
            return;
        }
    }
    ctx->pc = 0x19413Cu;
}
