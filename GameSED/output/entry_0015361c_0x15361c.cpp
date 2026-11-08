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

// Function: entry_0015361c
// Address: 0x15361c - 0x153698
void entry_0015361c_0x15361c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015361c_0x15361c");
#endif

    ctx->pc = 0x15361cu;

    // 0x15361c: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x15361Cu;
    {
        const bool branch_taken_0x15361c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x153620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15361Cu;
        // 0x153620: 0x32a20004  andi        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15361c) {
            ctx->pc = 0x1536E8u;
            return;
        }
    }
    ctx->pc = 0x153624u;
    // 0x153624: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x153624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153628: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x153628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x15362c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x15362cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x153630: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x153630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x153634: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x153634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x153638: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x153638u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x15363c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15363cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x153640: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x153640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x153644: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x153644u;
    {
        const bool branch_taken_0x153644 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x153648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153644u;
        // 0x153648: 0xaca40030  sw          $a0, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153644) {
            ctx->pc = 0x1536A8u;
            return;
        }
    }
    ctx->pc = 0x15364Cu;
    // 0x15364c: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x15364cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x153650: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x153650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x153654: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x153654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x153658: 0x54800020  bnel        $a0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x153658u;
    {
        const bool branch_taken_0x153658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x153658) {
            ctx->pc = 0x15365Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153658u;
            // 0x15365c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1536DCu;
            return;
        }
    }
    ctx->pc = 0x153660u;
    // 0x153660: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x153660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x153664: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x153664u;
    {
        const bool branch_taken_0x153664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153664) {
            ctx->pc = 0x153668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153664u;
            // 0x153668: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153698u;
            return;
        }
    }
    ctx->pc = 0x15366Cu;
    // 0x15366c: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x15366cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x153670: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x153670u;
    {
        const bool branch_taken_0x153670 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x153674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153670u;
        // 0x153674: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153670) {
            ctx->pc = 0x1536D8u;
            return;
        }
    }
    ctx->pc = 0x153678u;
    // 0x153678: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x153678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x15367c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15367Cu;
    {
        const bool branch_taken_0x15367c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15367Cu;
        // 0x153680: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15367c) {
            ctx->pc = 0x1536D8u;
            return;
        }
    }
    ctx->pc = 0x153684u;
    // 0x153684: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x153684u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x153688: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x153688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15368c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15368Cu;
    {
        const bool branch_taken_0x15368c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15368Cu;
        // 0x153690: 0xaca2003c  sw          $v0, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15368c) {
            ctx->pc = 0x1536D8u;
            return;
        }
    }
    ctx->pc = 0x153694u;
    // 0x153694: 0x0  nop
    ctx->pc = 0x153694u;
    // NOP
    ctx->pc = 0x153698u;
}
