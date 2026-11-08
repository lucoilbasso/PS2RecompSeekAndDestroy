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

// Function: entry_001533e8
// Address: 0x1533e8 - 0x153460
void entry_001533e8_0x1533e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001533e8_0x1533e8");
#endif

    ctx->pc = 0x1533e8u;

    // 0x1533e8: 0x5080007d  beql        $a0, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x1533E8u;
    {
        const bool branch_taken_0x1533e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1533e8) {
            ctx->pc = 0x1533ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1533E8u;
            // 0x1533ec: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1535E0u;
            return;
        }
    }
    ctx->pc = 0x1533F0u;
    // 0x1533f0: 0x262506dc  addiu       $a1, $s1, 0x6DC
    ctx->pc = 0x1533f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    // 0x1533f4: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1533f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1533f8: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1533f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1533fc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1533fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x153400: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x153400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x153404: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x153404u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x153408: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x153408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15340c: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x15340cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x153410: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x153410u;
    {
        const bool branch_taken_0x153410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x153414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153410u;
        // 0x153414: 0xaca40030  sw          $a0, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153410) {
            ctx->pc = 0x153470u;
            return;
        }
    }
    ctx->pc = 0x153418u;
    // 0x153418: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x153418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x15341c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x15341cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x153420: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x153420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x153424: 0x5480001f  bnel        $a0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x153424u;
    {
        const bool branch_taken_0x153424 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x153424) {
            ctx->pc = 0x153428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153424u;
            // 0x153428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1534A4u;
            return;
        }
    }
    ctx->pc = 0x15342Cu;
    // 0x15342c: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x15342cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x153430: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x153430u;
    {
        const bool branch_taken_0x153430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153430) {
            ctx->pc = 0x153434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153430u;
            // 0x153434: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153460u;
            return;
        }
    }
    ctx->pc = 0x153438u;
    // 0x153438: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x153438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x15343c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15343Cu;
    {
        const bool branch_taken_0x15343c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x153440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15343Cu;
        // 0x153440: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15343c) {
            ctx->pc = 0x1534A0u;
            return;
        }
    }
    ctx->pc = 0x153444u;
    // 0x153444: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x153444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x153448: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x153448u;
    {
        const bool branch_taken_0x153448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153448u;
        // 0x15344c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153448) {
            ctx->pc = 0x1534A0u;
            return;
        }
    }
    ctx->pc = 0x153450u;
    // 0x153450: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x153450u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x153454: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x153454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x153458: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x153458u;
    {
        const bool branch_taken_0x153458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153458u;
        // 0x15345c: 0xaca2003c  sw          $v0, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153458) {
            ctx->pc = 0x1534A0u;
            return;
        }
    }
    ctx->pc = 0x153460u;
}
