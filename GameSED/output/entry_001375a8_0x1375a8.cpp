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

// Function: entry_001375a8
// Address: 0x1375a8 - 0x137604
void entry_001375a8_0x1375a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001375a8_0x1375a8");
#endif

    ctx->pc = 0x1375a8u;

    // 0x1375a8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1375a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1375ac: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1375ACu;
    {
        const bool branch_taken_0x1375ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1375B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375ACu;
        // 0x1375b0: 0x8ed60000  lw          $s6, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375ac) {
            ctx->pc = 0x13783Cu;
            return;
        }
    }
    ctx->pc = 0x1375B4u;
    // 0x1375b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1375b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1375b8: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x1375B8u;
    {
        const bool branch_taken_0x1375b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1375BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375B8u;
        // 0x1375bc: 0x24042118  addiu       $a0, $zero, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375b8) {
            ctx->pc = 0x13783Cu;
            return;
        }
    }
    ctx->pc = 0x1375C0u;
    // 0x1375c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1375c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1375c4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1375c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1375c8: 0x1044009c  beq         $v0, $a0, . + 4 + (0x9C << 2)
    ctx->pc = 0x1375C8u;
    {
        const bool branch_taken_0x1375c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1375CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375C8u;
        // 0x1375cc: 0x30620fff  andi        $v0, $v1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375c8) {
            ctx->pc = 0x13783Cu;
            return;
        }
    }
    ctx->pc = 0x1375D0u;
    // 0x1375d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1375d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375d4: 0x38420118  xori        $v0, $v0, 0x118
    ctx->pc = 0x1375d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)280);
    // 0x1375d8: 0x262280a  movz        $a1, $s3, $v0
    ctx->pc = 0x1375d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x1375dc: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1375DCu;
    {
        const bool branch_taken_0x1375dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1375dc) {
            ctx->pc = 0x1375E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1375DCu;
            // 0x1375e0: 0x8e6200d4  lw          $v0, 0xD4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137614u;
            return;
        }
    }
    ctx->pc = 0x1375E4u;
    // 0x1375e4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1375e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1375e8: 0x3042c800  andi        $v0, $v0, 0xC800
    ctx->pc = 0x1375e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)51200);
    // 0x1375ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1375ECu;
    {
        const bool branch_taken_0x1375ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1375F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375ECu;
        // 0x1375f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375ec) {
            ctx->pc = 0x137604u;
            return;
        }
    }
    ctx->pc = 0x1375F4u;
    // 0x1375f4: 0x8ca20184  lw          $v0, 0x184($a1)
    ctx->pc = 0x1375f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 388)));
    // 0x1375f8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1375f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1375fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1375FCu;
    {
        const bool branch_taken_0x1375fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1375fc) {
            ctx->pc = 0x137608u;
            return;
        }
    }
    ctx->pc = 0x137604u;
}
