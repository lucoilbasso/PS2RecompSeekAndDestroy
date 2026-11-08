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

// Function: entry_0017e0d0
// Address: 0x17e0d0 - 0x17e140
void entry_0017e0d0_0x17e0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e0d0_0x17e0d0");
#endif

    ctx->pc = 0x17e0d0u;

label_17e0d0:
    // 0x17e0d0: 0x9502002c  lhu         $v0, 0x2C($t0)
    ctx->pc = 0x17e0d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x17e0d4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x17e0d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x17e0d8: 0x95070018  lhu         $a3, 0x18($t0)
    ctx->pc = 0x17e0d8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x17e0dc: 0x95040004  lhu         $a0, 0x4($t0)
    ctx->pc = 0x17e0dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x17e0e0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x17e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x17e0e4: 0x95060002  lhu         $a2, 0x2($t0)
    ctx->pc = 0x17e0e4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x17e0e8: 0x73eb8  dsll        $a3, $a3, 26
    ctx->pc = 0x17e0e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 26);
    // 0x17e0ec: 0x9505001a  lhu         $a1, 0x1A($t0)
    ctx->pc = 0x17e0ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26)));
    // 0x17e0f0: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x17e0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x17e0f4: 0x9503000c  lhu         $v1, 0xC($t0)
    ctx->pc = 0x17e0f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x17e0f8: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x17e0f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x17e0fc: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x17e0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17e100: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17e100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17e104: 0x31cfc  dsll32      $v1, $v1, 19
    ctx->pc = 0x17e104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 19));
    // 0x17e108: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x17e108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x17e10c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x17e10cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x17e110: 0x9503002e  lhu         $v1, 0x2E($t0)
    ctx->pc = 0x17e110u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 46)));
    // 0x17e114: 0xee3825  or          $a3, $a3, $t6
    ctx->pc = 0x17e114u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 14));
    // 0x17e118: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x17e118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x17e11c: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x17e11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x17e120: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17e120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x17e124: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x17e124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x17e128: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x17e128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x17e12c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17e12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17e130: 0xa5030008  sh          $v1, 0x8($t0)
    ctx->pc = 0x17e130u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x17e134: 0xfd020038  sd          $v0, 0x38($t0)
    ctx->pc = 0x17e134u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 2));
    // 0x17e138: 0x1520ffe5  bnez        $t1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17E138u;
    {
        const bool branch_taken_0x17e138 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E138u;
        // 0x17e13c: 0x25080050  addiu       $t0, $t0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e138) {
            ctx->pc = 0x17E0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e0d0;
        }
    }
    ctx->pc = 0x17E140u;
}
