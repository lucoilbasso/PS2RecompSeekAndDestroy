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

// Function: entry_00153714
// Address: 0x153714 - 0x153788
void entry_00153714_0x153714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153714_0x153714");
#endif

    ctx->pc = 0x153714u;

    // 0x153714: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x153714u;
    {
        const bool branch_taken_0x153714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x153718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153714u;
        // 0x153718: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153714) {
            ctx->pc = 0x1537D4u;
            return;
        }
    }
    ctx->pc = 0x15371Cu;
    // 0x15371c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x15371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x153720: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x153720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x153724: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x153724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x153728: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x153728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15372c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x15372cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x153730: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x153730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x153734: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x153734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x153738: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x153738u;
    {
        const bool branch_taken_0x153738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153738u;
        // 0x15373c: 0xaca40030  sw          $a0, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153738) {
            ctx->pc = 0x153798u;
            return;
        }
    }
    ctx->pc = 0x153740u;
    // 0x153740: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x153740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x153744: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x153744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x153748: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x153748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x15374c: 0x5480001f  bnel        $a0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x15374Cu;
    {
        const bool branch_taken_0x15374c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15374c) {
            ctx->pc = 0x153750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15374Cu;
            // 0x153750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1537CCu;
            return;
        }
    }
    ctx->pc = 0x153754u;
    // 0x153754: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x153754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x153758: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x153758u;
    {
        const bool branch_taken_0x153758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153758) {
            ctx->pc = 0x15375Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153758u;
            // 0x15375c: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153788u;
            return;
        }
    }
    ctx->pc = 0x153760u;
    // 0x153760: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x153760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x153764: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x153764u;
    {
        const bool branch_taken_0x153764 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x153768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153764u;
        // 0x153768: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153764) {
            ctx->pc = 0x1537C8u;
            return;
        }
    }
    ctx->pc = 0x15376Cu;
    // 0x15376c: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x15376cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x153770: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x153770u;
    {
        const bool branch_taken_0x153770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153770u;
        // 0x153774: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153770) {
            ctx->pc = 0x1537C8u;
            return;
        }
    }
    ctx->pc = 0x153778u;
    // 0x153778: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x153778u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x15377c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x15377cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x153780: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x153780u;
    {
        const bool branch_taken_0x153780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153780u;
        // 0x153784: 0xaca2003c  sw          $v0, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153780) {
            ctx->pc = 0x1537C8u;
            return;
        }
    }
    ctx->pc = 0x153788u;
}
