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

// Function: entry_001347c0
// Address: 0x1347c0 - 0x1347fc
void entry_001347c0_0x1347c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001347c0_0x1347c0");
#endif

    ctx->pc = 0x1347c0u;

    // 0x1347c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1347c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1347c4: 0x1662001a  bne         $s3, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1347C4u;
    {
        const bool branch_taken_0x1347c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1347C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347C4u;
        // 0x1347c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347c4) {
            ctx->pc = 0x134830u;
            return;
        }
    }
    ctx->pc = 0x1347CCu;
    // 0x1347cc: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x1347ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x1347d0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1347d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1347d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1347D4u;
    {
        const bool branch_taken_0x1347d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347D4u;
        // 0x1347d8: 0x24022118  addiu       $v0, $zero, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347d4) {
            ctx->pc = 0x1347FCu;
            return;
        }
    }
    ctx->pc = 0x1347DCu;
    // 0x1347dc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1347dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1347e0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1347E0u;
    {
        const bool branch_taken_0x1347e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1347e0) {
            ctx->pc = 0x1347FCu;
            return;
        }
    }
    ctx->pc = 0x1347E8u;
    // 0x1347e8: 0x96420266  lhu         $v0, 0x266($s2)
    ctx->pc = 0x1347e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 614)));
    // 0x1347ec: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1347ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1347f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1347f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1347f4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1347F4u;
    {
        const bool branch_taken_0x1347f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1347F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347F4u;
        // 0x1347f8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347f4) {
            ctx->pc = 0x1348A4u;
            return;
        }
    }
    ctx->pc = 0x1347FCu;
}
