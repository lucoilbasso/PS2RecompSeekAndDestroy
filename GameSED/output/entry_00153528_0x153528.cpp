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

// Function: entry_00153528
// Address: 0x153528 - 0x153590
void entry_00153528_0x153528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153528_0x153528");
#endif

    ctx->pc = 0x153528u;

    // 0x153528: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x153528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x15352c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x15352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x153530: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x153530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x153534: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x153534u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x153538: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x153538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15353c: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x15353cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x153540: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x153540u;
    {
        const bool branch_taken_0x153540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x153544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153540u;
        // 0x153544: 0xaca40030  sw          $a0, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153540) {
            ctx->pc = 0x1535A0u;
            return;
        }
    }
    ctx->pc = 0x153548u;
    // 0x153548: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x153548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x15354c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x15354cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x153550: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x153550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x153554: 0x5480001f  bnel        $a0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x153554u;
    {
        const bool branch_taken_0x153554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x153554) {
            ctx->pc = 0x153558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153554u;
            // 0x153558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1535D4u;
            return;
        }
    }
    ctx->pc = 0x15355Cu;
    // 0x15355c: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x15355cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x153560: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x153560u;
    {
        const bool branch_taken_0x153560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153560) {
            ctx->pc = 0x153564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153560u;
            // 0x153564: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153590u;
            return;
        }
    }
    ctx->pc = 0x153568u;
    // 0x153568: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x153568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x15356c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15356Cu;
    {
        const bool branch_taken_0x15356c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x153570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15356Cu;
        // 0x153570: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15356c) {
            ctx->pc = 0x1535D0u;
            return;
        }
    }
    ctx->pc = 0x153574u;
    // 0x153574: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x153574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x153578: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x153578u;
    {
        const bool branch_taken_0x153578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153578u;
        // 0x15357c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153578) {
            ctx->pc = 0x1535D0u;
            return;
        }
    }
    ctx->pc = 0x153580u;
    // 0x153580: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x153580u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x153584: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x153584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x153588: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x153588u;
    {
        const bool branch_taken_0x153588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153588u;
        // 0x15358c: 0xaca2003c  sw          $v0, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153588) {
            ctx->pc = 0x1535D0u;
            return;
        }
    }
    ctx->pc = 0x153590u;
}
