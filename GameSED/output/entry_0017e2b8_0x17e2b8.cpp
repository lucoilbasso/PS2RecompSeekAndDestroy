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

// Function: entry_0017e2b8
// Address: 0x17e2b8 - 0x17e320
void entry_0017e2b8_0x17e2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e2b8_0x17e2b8");
#endif

    ctx->pc = 0x17e2b8u;

    // 0x17e2b8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x17e2b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2bc: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x17e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x17e2c0: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x17e2c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17e2c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17e2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17e2c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17e2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2cc: 0x26950070  addiu       $s5, $s4, 0x70
    ctx->pc = 0x17e2ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x17e2d0: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x17e2d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x17e2d4: 0x96450008  lhu         $a1, 0x8($s2)
    ctx->pc = 0x17e2d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17e2d8: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x17e2d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17e2dc: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x17e2dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x17e2e0: 0x9646000a  lhu         $a2, 0xA($s2)
    ctx->pc = 0x17e2e0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x17e2e4: 0x9653000c  lhu         $s3, 0xC($s2)
    ctx->pc = 0x17e2e4u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17e2e8: 0x96430020  lhu         $v1, 0x20($s2)
    ctx->pc = 0x17e2e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17e2ec: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x17e2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x17e2f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17e2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17e2f4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17e2f8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x17e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x17e2fc: 0x133c00  sll         $a3, $s3, 16
    ctx->pc = 0x17e2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x17e300: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x17e300u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x17e304: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x17e304u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x17e308: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E308u;
    {
        const bool branch_taken_0x17e308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E308u;
        // 0x17e30c: 0x73c03  sra         $a3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e308) {
            ctx->pc = 0x17E320u;
            return;
        }
    }
    ctx->pc = 0x17E310u;
    // 0x17e310: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x17e310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17e314: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17E314u;
    {
        const bool branch_taken_0x17e314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E314u;
        // 0x17e318: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e314) {
            ctx->pc = 0x17E328u;
            return;
        }
    }
    ctx->pc = 0x17E31Cu;
    // 0x17e31c: 0x0  nop
    ctx->pc = 0x17e31cu;
    // NOP
    ctx->pc = 0x17e320u;
}
