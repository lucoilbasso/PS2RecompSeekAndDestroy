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

// Function: entry_0015337c
// Address: 0x15337c - 0x1533c8
void entry_0015337c_0x15337c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015337c_0x15337c");
#endif

    ctx->pc = 0x15337cu;

    // 0x15337c: 0x50c00098  beql        $a2, $zero, . + 4 + (0x98 << 2)
    ctx->pc = 0x15337Cu;
    {
        const bool branch_taken_0x15337c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15337c) {
            ctx->pc = 0x153380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15337Cu;
            // 0x153380: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1535E0u;
            return;
        }
    }
    ctx->pc = 0x153384u;
    // 0x153384: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x153384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x153388: 0x5200004e  beql        $s0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x153388u;
    {
        const bool branch_taken_0x153388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x153388) {
            ctx->pc = 0x15338Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153388u;
            // 0x15338c: 0x8e2306dc  lw          $v1, 0x6DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1534C4u;
            return;
        }
    }
    ctx->pc = 0x153390u;
    // 0x153390: 0x8e030c04  lw          $v1, 0xC04($s0)
    ctx->pc = 0x153390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x153394: 0x311c3  sra         $v0, $v1, 7
    ctx->pc = 0x153394u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
    // 0x153398: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x153398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15339c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x15339Cu;
    {
        const bool branch_taken_0x15339c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1533A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15339Cu;
        // 0x1533a0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15339c) {
            ctx->pc = 0x1534C0u;
            return;
        }
    }
    ctx->pc = 0x1533A4u;
    // 0x1533a4: 0x8e021268  lw          $v0, 0x1268($s0)
    ctx->pc = 0x1533a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4712)));
    // 0x1533a8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1533A8u;
    {
        const bool branch_taken_0x1533a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1533ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533A8u;
        // 0x1533ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533a8) {
            ctx->pc = 0x1533E8u;
            return;
        }
    }
    ctx->pc = 0x1533B0u;
    // 0x1533b0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1533b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1533b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1533B4u;
    {
        const bool branch_taken_0x1533b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1533B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533B4u;
        // 0x1533b8: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533b4) {
            ctx->pc = 0x1533DCu;
            return;
        }
    }
    ctx->pc = 0x1533BCu;
    // 0x1533bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1533BCu;
    {
        const bool branch_taken_0x1533bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1533C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533BCu;
        // 0x1533c0: 0x2404006a  addiu       $a0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533bc) {
            ctx->pc = 0x1533C8u;
            return;
        }
    }
    ctx->pc = 0x1533C4u;
    // 0x1533c4: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1533c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    ctx->pc = 0x1533c8u;
}
